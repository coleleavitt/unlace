// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4370
// Name:            .Z3_mk_string_symbol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4370 jmp     cs:off_4E1A0
//
// Resolved target: Z3_mk_string_symbol
// Target address:  0x4F7A8
// GOT/IAT slot:    0x4E1A0
// Slot symbol:     off_4E1A0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_string_symbol(/* see target signature */)
{
    // Tail-call to Z3_mk_string_symbol via GOT/IAT indirection
    return Z3_mk_string_symbol(/* forwarded args */);
}

