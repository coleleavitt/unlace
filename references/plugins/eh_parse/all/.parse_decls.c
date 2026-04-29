// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61D0
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61D0 jmp     cs:off_2F0D0
//
// Resolved target: parse_decls
// Target address:  0x2F740
// GOT/IAT slot:    0x2F0D0
// Slot symbol:     off_2F0D0
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

