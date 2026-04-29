// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D650
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D650 jmp     cs:off_4E9310
//
// Resolved target: parse_decls
// Target address:  0x4EBD00
// GOT/IAT slot:    0x4E9310
// Slot symbol:     off_4E9310
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

