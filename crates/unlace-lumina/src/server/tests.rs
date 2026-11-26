use super::*;
use std::net::{IpAddr, Ipv4Addr};

fn session(is_admin: bool, features: u32) -> Session {
    Session {
        peer: SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 1),
        protocol_version: 6,
        username: "u".into(),
        is_admin,
        features,
    }
}

#[test]
fn admin_commands_need_an_admin() {
    let user = session(false, u32::MAX);
    assert!(refusal(Packet::KillSessions.as_u8(), &user).is_some());
    assert!(refusal(Packet::GetLuminaStats.as_u8(), &user).is_some());
    assert!(refusal(Packet::PullMd.as_u8(), &user).is_none());
    assert!(refusal(Packet::GetLuminaStats.as_u8(), &session(true, 0)).is_none());
    assert!(refusal(Packet::ShowHistory.as_u8(), &user).is_some());
    assert!(refusal(Packet::DumpMd.as_u8(), &user).is_some());
    assert!(refusal(Packet::GetPop.as_u8(), &user).is_none());
}

#[test]
fn feature_bits_gate_decompile_and_telemetry() {
    let plain = session(false, features::METADATA);
    assert!(refusal(Packet::Decompile.as_u8(), &plain).is_some());
    assert!(refusal(Packet::PushTlm.as_u8(), &plain).is_some());
    assert!(refusal(Packet::PushMd.as_u8(), &plain).is_none());
}

#[test]
fn dispatch_answers_unknown_and_unimplemented_packets_with_fail() {
    let h = InMemoryHandler::new();
    let s = session(true, u32::MAX);
    for id in [Packet::ShowPushes.as_u8(), 99] {
        let reply = dispatch(&Frame::new(id, Vec::new()), &s, &h).unwrap();
        assert_eq!(reply.id, Packet::RpcFail.as_u8());
    }
}

#[test]
fn a_connection_that_does_not_start_with_helo_is_refused() {
    let mut wire = Vec::new();
    write_frame(
        &mut wire,
        &Frame::new(Packet::PullMd.as_u8(), vec![0, 0, 0]),
        64,
    )
    .unwrap();
    let mut conn = Duplex {
        input: io::Cursor::new(wire),
        output: Vec::new(),
    };
    let peer = SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 1);
    assert!(serve_connection(&mut conn, peer, &InMemoryHandler::new()).is_err());
    assert_eq!(conn.output[4], Packet::RpcFail.as_u8());
}

#[test]
fn records_frame_layout() {
    let row = FuncRecord {
        key: vec![7; 2],
        info: FuncInfo {
            name: "f".into(),
            size: 0x20,
            metadata: vec![9],
        },
        popularity: 3,
    };
    let frame = records_frame(Packet::GetPopResult, &[row]).unwrap();
    assert_eq!(frame.id, Packet::GetPopResult.as_u8());
    assert_eq!(frame.payload, vec![1, 2, 7, 7, b'f', 0, 0x20, 0, 1, 9, 3]);
}

struct Duplex {
    input: io::Cursor<Vec<u8>>,
    output: Vec<u8>,
}

impl Read for Duplex {
    fn read(&mut self, buf: &mut [u8]) -> io::Result<usize> {
        self.input.read(buf)
    }
}

impl Write for Duplex {
    fn write(&mut self, buf: &[u8]) -> io::Result<usize> {
        self.output.write(buf)
    }

    fn flush(&mut self) -> io::Result<()> {
        Ok(())
    }
}
