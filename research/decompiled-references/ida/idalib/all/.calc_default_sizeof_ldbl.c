// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC760
// Name:            .calc_default_sizeof_ldbl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC760 jmp     cs:off_2C7BB98
//
// Resolved target: calc_default_sizeof_ldbl
// Target address:  0x609130
// GOT/IAT slot:    0x2C7BB98
// Slot symbol:     off_2C7BB98
// Target type:     <no type info>
// ============================================================

void .calc_default_sizeof_ldbl(/* see target signature */)
{
    // Tail-call to calc_default_sizeof_ldbl via GOT/IAT indirection
    return calc_default_sizeof_ldbl(/* forwarded args */);
}

