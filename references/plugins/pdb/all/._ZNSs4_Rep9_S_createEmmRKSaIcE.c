// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DC10
// Name:            ._ZNSs4_Rep9_S_createEmmRKSaIcE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DC10 jmp     cs:off_B35F0
//
// Resolved target: _ZNSs4_Rep9_S_createEmmRKSaIcE
// Target address:  0xB3DC8
// GOT/IAT slot:    0xB35F0
// Slot symbol:     off_B35F0
// Target type:     <no type info>
// ============================================================

void ._ZNSs4_Rep9_S_createEmmRKSaIcE(/* see target signature */)
{
    // Tail-call to _ZNSs4_Rep9_S_createEmmRKSaIcE via GOT/IAT indirection
    return _ZNSs4_Rep9_S_createEmmRKSaIcE(/* forwarded args */);
}

