// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43E0
// Name:            ._ZNSs4_Rep10_M_destroyERKSaIcE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43E0 jmp     cs:off_281D8
//
// Resolved target: _ZNSs4_Rep10_M_destroyERKSaIcE
// Target address:  0x29B70
// GOT/IAT slot:    0x281D8
// Slot symbol:     off_281D8
// Target type:     <no type info>
// ============================================================

void ._ZNSs4_Rep10_M_destroyERKSaIcE(/* see target signature */)
{
    // Tail-call to _ZNSs4_Rep10_M_destroyERKSaIcE via GOT/IAT indirection
    return _ZNSs4_Rep10_M_destroyERKSaIcE(/* forwarded args */);
}

