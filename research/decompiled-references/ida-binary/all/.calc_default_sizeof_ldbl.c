// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119CC0
// Name:            .calc_default_sizeof_ldbl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119CC0 jmp     cs:calc_default_sizeof_ldbl_ptr
//
// Resolved target: calc_default_sizeof_ldbl
// Target address:  0x8D89F0
// GOT/IAT slot:    0x8A3B00
// Slot symbol:     calc_default_sizeof_ldbl_ptr
// Target type:     <no type info>
// ============================================================

void .calc_default_sizeof_ldbl(/* see target signature */)
{
    // Tail-call to calc_default_sizeof_ldbl via GOT/IAT indirection
    return calc_default_sizeof_ldbl(/* forwarded args */);
}

