// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            ._ZNSs4_Rep10_M_destroyERKSaIcE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_13098
//
// Resolved target: _ZNSs4_Rep10_M_destroyERKSaIcE
// Target address:  0x13330
// GOT/IAT slot:    0x13098
// Slot symbol:     off_13098
// Target type:     <no type info>
// ============================================================

void ._ZNSs4_Rep10_M_destroyERKSaIcE(/* see target signature */)
{
    // Tail-call to _ZNSs4_Rep10_M_destroyERKSaIcE via GOT/IAT indirection
    return _ZNSs4_Rep10_M_destroyERKSaIcE(/* forwarded args */);
}

