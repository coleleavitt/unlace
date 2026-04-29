// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC70
// Name:            .parse_json
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC70 jmp     cs:off_4ED620
//
// Resolved target: parse_json
// Target address:  0x4F1928
// GOT/IAT slot:    0x4ED620
// Slot symbol:     off_4ED620
// Target type:     <no type info>
// ============================================================

void .parse_json(/* see target signature */)
{
    // Tail-call to parse_json via GOT/IAT indirection
    return parse_json(/* forwarded args */);
}

