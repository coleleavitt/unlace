use super::{emit_to, status_after};
use std::io::{self, Write};

struct FailingWriter;

impl Write for FailingWriter {
    fn write(&mut self, _buf: &[u8]) -> io::Result<usize> {
        Err(io::Error::other("synthetic failure"))
    }

    fn flush(&mut self) -> io::Result<()> {
        Ok(())
    }
}

#[test]
fn propagates_non_broken_pipe_write_errors() {
    let err = emit_to(&mut FailingWriter, b"output").expect_err("write should fail");
    assert_eq!(err.kind(), io::ErrorKind::Other);
    assert_eq!(err.to_string(), "synthetic failure");
}

#[test]
fn a_broken_pipe_keeps_the_verdict() {
    for status in [0, 1, 2, 137] {
        let err = io::Error::new(io::ErrorKind::BrokenPipe, "closed");
        assert_eq!(status_after(err, status), status);
    }
}

#[test]
fn any_other_write_failure_forces_one() {
    let err = io::Error::other("disk full");
    assert_eq!(status_after(err, 0), 1);
}
