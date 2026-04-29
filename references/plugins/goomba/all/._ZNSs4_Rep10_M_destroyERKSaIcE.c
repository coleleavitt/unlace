// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4480
// Name:            ._ZNSs4_Rep10_M_destroyERKSaIcE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4480 jmp     cs:off_4E228
//
// Resolved target: _ZNSs4_Rep10_M_destroyERKSaIcE
// Target address:  0x4F838
// GOT/IAT slot:    0x4E228
// Slot symbol:     off_4E228
// Target type:     <no type info>
// ============================================================

void ._ZNSs4_Rep10_M_destroyERKSaIcE(/* see target signature */)
{
    // Tail-call to _ZNSs4_Rep10_M_destroyERKSaIcE via GOT/IAT indirection
    return _ZNSs4_Rep10_M_destroyERKSaIcE(/* forwarded args */);
}

