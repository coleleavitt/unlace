// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA190
// Name:            .parse_json
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA190 jmp     cs:off_2C7A8B0
//
// Resolved target: parse_json
// Target address:  0x7AB870
// GOT/IAT slot:    0x2C7A8B0
// Slot symbol:     off_2C7A8B0
// Target type:     <no type info>
// ============================================================

void .parse_json(/* see target signature */)
{
    // Tail-call to parse_json via GOT/IAT indirection
    return parse_json(/* forwarded args */);
}

