// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B660
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B660 jmp     cs:off_4ED318
//
// Resolved target: parse_decls
// Target address:  0x4F1610
// GOT/IAT slot:    0x4ED318
// Slot symbol:     off_4ED318
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

