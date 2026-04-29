// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DC40
// Name:            .parse_json
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DC40 jmp     cs:off_4E9608
//
// Resolved target: parse_json
// Target address:  0x4EC018
// GOT/IAT slot:    0x4E9608
// Slot symbol:     off_4E9608
// Target type:     <no type info>
// ============================================================

void .parse_json(/* see target signature */)
{
    // Tail-call to parse_json via GOT/IAT indirection
    return parse_json(/* forwarded args */);
}

