// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2E0
// Name:            ._ZNSs4_Rep10_M_destroyERKSaIcE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2E0 jmp     cs:off_48170
//
// Resolved target: _ZNSs4_Rep10_M_destroyERKSaIcE
// Target address:  0x484B0
// GOT/IAT slot:    0x48170
// Slot symbol:     off_48170
// Target type:     <no type info>
// ============================================================

void ._ZNSs4_Rep10_M_destroyERKSaIcE(/* see target signature */)
{
    // Tail-call to _ZNSs4_Rep10_M_destroyERKSaIcE via GOT/IAT indirection
    return _ZNSs4_Rep10_M_destroyERKSaIcE(/* forwarded args */);
}

