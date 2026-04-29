// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D4E0
// Name:            ._ZNSs4_Rep10_M_destroyERKSaIcE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D4E0 jmp     cs:off_B3258
//
// Resolved target: _ZNSs4_Rep10_M_destroyERKSaIcE
// Target address:  0xB39F8
// GOT/IAT slot:    0xB3258
// Slot symbol:     off_B3258
// Target type:     <no type info>
// ============================================================

void ._ZNSs4_Rep10_M_destroyERKSaIcE(/* see target signature */)
{
    // Tail-call to _ZNSs4_Rep10_M_destroyERKSaIcE via GOT/IAT indirection
    return _ZNSs4_Rep10_M_destroyERKSaIcE(/* forwarded args */);
}

