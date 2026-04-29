// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4390
// Name:            .Z3_get_decl_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4390 jmp     cs:off_4E1B0
//
// Resolved target: Z3_get_decl_name
// Target address:  0x4F7B8
// GOT/IAT slot:    0x4E1B0
// Slot symbol:     off_4E1B0
// Target type:     <no type info>
// ============================================================

void .Z3_get_decl_name(/* see target signature */)
{
    // Tail-call to Z3_get_decl_name via GOT/IAT indirection
    return Z3_get_decl_name(/* forwarded args */);
}

