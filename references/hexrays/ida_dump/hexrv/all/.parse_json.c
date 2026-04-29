// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC20
// Name:            .parse_json
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC20 jmp     cs:off_4BF5F8
//
// Resolved target: parse_json
// Target address:  0x4C2AE0
// GOT/IAT slot:    0x4BF5F8
// Slot symbol:     off_4BF5F8
// Target type:     <no type info>
// ============================================================

void .parse_json(/* see target signature */)
{
    // Tail-call to parse_json via GOT/IAT indirection
    return parse_json(/* forwarded args */);
}

