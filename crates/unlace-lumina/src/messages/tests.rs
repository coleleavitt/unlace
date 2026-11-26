use super::*;

fn info(name: &str) -> FuncInfo {
    FuncInfo {
        name: name.into(),
        size: 0x40,
        metadata: vec![1, 2, 3],
    }
}

#[test]
fn pull_md_roundtrips_and_is_byte_exact() {
    let p = PullMd {
        flags: 1,
        keys: vec![3],
        patterns: vec![PatternId {
            kind: 1,
            data: vec![0xAB; 2],
        }],
    };
    let bytes = p.encode().unwrap();
    assert_eq!(bytes, vec![1, 1, 3, 1, 1, 2, 0xAB, 0xAB]);
    assert_eq!(PullMd::decode(&bytes).unwrap(), p);
    let mut trailing = bytes;
    trailing.push(0);
    assert!(PullMd::decode(&trailing).is_err());
}

#[test]
fn pull_md_result_maps_codes_to_answers() {
    let found = FuncInfoAndFrequency {
        info: info("f"),
        popularity: 4,
    };
    let r = PullMdResult::from_answers(vec![None, Some(found.clone()), None]);
    assert_eq!(r.codes, vec![codes::NOT_FOUND, codes::OK, codes::NOT_FOUND]);
    let back = PullMdResult::decode(&r.encode().unwrap()).unwrap();
    assert_eq!(back, r);
    assert_eq!(back.answers().unwrap(), vec![None, Some(found), None]);
    // -2 travels as the five-byte form of its two's-complement bits.
    assert_eq!(&r.encode().unwrap()[1..6], &[0xFF, 0xFF, 0xFF, 0xFF, 0xFE]);
}

#[test]
fn pull_md_result_with_missing_results_errors() {
    let r = PullMdResult {
        codes: vec![codes::OK],
        results: vec![],
    };
    assert!(r.answers().is_err());
}

#[test]
fn push_md_roundtrips() {
    let p = PushMd {
        flags: push_mode::OVERRIDE,
        idb: "a.i64".into(),
        input_path: "a".into(),
        input_md5: [7; 16],
        hostname: "localhost".into(),
        contents: vec![FuncInfoAndPattern {
            info: info("main"),
            pattern: PatternId::md5([9; 16]),
        }],
        eas: vec![0x1_0000_1000],
    };
    let back = PushMd::decode(&p.encode().unwrap()).unwrap();
    assert_eq!(back, p);
    assert_eq!(back.mode(), push_mode::OVERRIDE);
}

#[test]
fn push_md_without_eas_decodes() {
    let mut p = PushMd::default();
    p.contents.push(FuncInfoAndPattern {
        info: info("g"),
        pattern: PatternId::md5([1; 16]),
    });
    let mut bytes = p.encode().unwrap();
    bytes.pop();
    assert_eq!(PushMd::decode(&bytes).unwrap().contents, p.contents);
}

#[test]
fn push_md_result_roundtrips() {
    let r = PushMdResult {
        codes: vec![codes::ADDED, codes::OK, codes::ERROR],
    };
    assert_eq!(PushMdResult::decode(&r.encode().unwrap()).unwrap(), r);
}

#[test]
fn rpc_fail_roundtrips_and_reads_a_bare_message() {
    let f = RpcFail::new("Operation failed");
    assert_eq!(RpcFail::decode(&f.encode()), f);
    let bare = RpcFail::decode(b"\x80");
    assert_eq!(bare.code, codes::ERROR);
}
