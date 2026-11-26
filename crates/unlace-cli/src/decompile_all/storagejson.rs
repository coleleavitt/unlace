//! The `--storage` member of a `--json` variable row: where the variable
//! lives in the machine, and in which instructions
//! (`docs/spec/06-variables-and-merge.md`, "Variable storage").

use unlace_decomp::funcreport::StoragePiece;

use crate::jsonfmt::Json;

/// `{space, register, offset, size}`: where one piece is.
pub(crate) fn place(piece: &StoragePiece) -> Vec<(String, Json)> {
    vec![
        ("space".into(), Json::Str(piece.space.clone())),
        (
            "register".into(),
            piece.register.clone().map_or(Json::Null, Json::Str),
        ),
        ("offset".into(), Json::Number(piece.offset.to_string())),
        ("size".into(), Json::Number(piece.size.to_string())),
    ]
}

/// A row's `storage`: each piece's place and the instruction address ranges
/// `[start, end)` in which it holds the variable.
pub(super) fn list(storage: &[StoragePiece]) -> Json {
    let range = |&(start, end): &(u64, u64)| {
        Json::Object(vec![
            ("start".into(), Json::Number(start.to_string())),
            ("end".into(), Json::Number(end.to_string())),
        ])
    };
    Json::Array(
        storage
            .iter()
            .map(|piece| {
                let mut fields = place(piece);
                fields.push((
                    "ranges".into(),
                    Json::Array(piece.ranges.iter().map(range).collect()),
                ));
                Json::Object(fields)
            })
            .collect(),
    )
}
