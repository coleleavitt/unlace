// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119B90
// Name:            .parse_decl_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119B90 jmp     cs:parse_decl_ex_ptr
//
// Resolved target: parse_decl_ex
// Target address:  0x8D8940
// GOT/IAT slot:    0x8A3A68
// Slot symbol:     parse_decl_ex_ptr
// Target type:     <no type info>
// ============================================================

void .parse_decl_ex(/* see target signature */)
{
    // Tail-call to parse_decl_ex via GOT/IAT indirection
    return parse_decl_ex(/* forwarded args */);
}

