// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1F0
// Name:            ._ZNSs4_Rep9_S_createEmmRKSaIcE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1F0 jmp     cs:off_480F8
//
// Resolved target: _ZNSs4_Rep9_S_createEmmRKSaIcE
// Target address:  0x48458
// GOT/IAT slot:    0x480F8
// Slot symbol:     off_480F8
// Target type:     <no type info>
// ============================================================

void ._ZNSs4_Rep9_S_createEmmRKSaIcE(/* see target signature */)
{
    // Tail-call to _ZNSs4_Rep9_S_createEmmRKSaIcE via GOT/IAT indirection
    return _ZNSs4_Rep9_S_createEmmRKSaIcE(/* forwarded args */);
}

