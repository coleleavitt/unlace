// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A640
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A640 jmp     cs:off_4BF308
//
// Resolved target: parse_decls
// Target address:  0x4C27D0
// GOT/IAT slot:    0x4BF308
// Slot symbol:     off_4BF308
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

