// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4A50
// Name:            ._ZNSs4_Rep9_S_createEmmRKSaIcE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4A50 jmp     cs:off_4E510
//
// Resolved target: _ZNSs4_Rep9_S_createEmmRKSaIcE
// Target address:  0x4FB48
// GOT/IAT slot:    0x4E510
// Slot symbol:     off_4E510
// Target type:     <no type info>
// ============================================================

void ._ZNSs4_Rep9_S_createEmmRKSaIcE(/* see target signature */)
{
    // Tail-call to _ZNSs4_Rep9_S_createEmmRKSaIcE via GOT/IAT indirection
    return _ZNSs4_Rep9_S_createEmmRKSaIcE(/* forwarded args */);
}

