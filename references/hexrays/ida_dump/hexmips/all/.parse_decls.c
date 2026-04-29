// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A640
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A640 jmp     cs:off_4CD308
//
// Resolved target: parse_decls
// Target address:  0x4CFCF8
// GOT/IAT slot:    0x4CD308
// Slot symbol:     off_4CD308
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

