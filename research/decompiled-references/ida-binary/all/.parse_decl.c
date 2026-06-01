// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1175D0
// Name:            .parse_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1175D0 jmp     cs:parse_decl_ptr
//
// Resolved target: parse_decl
// Target address:  0x8D71A8
// GOT/IAT slot:    0x8A2788
// Slot symbol:     parse_decl_ptr
// Target type:     <no type info>
// ============================================================

void .parse_decl(/* see target signature */)
{
    // Tail-call to parse_decl via GOT/IAT indirection
    return parse_decl(/* forwarded args */);
}

