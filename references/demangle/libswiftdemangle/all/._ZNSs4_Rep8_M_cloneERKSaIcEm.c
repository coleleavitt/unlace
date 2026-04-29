// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2A0
// Name:            ._ZNSs4_Rep8_M_cloneERKSaIcEm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2A0 jmp     cs:off_48150
//
// Resolved target: _ZNSs4_Rep8_M_cloneERKSaIcEm
// Target address:  0x48498
// GOT/IAT slot:    0x48150
// Slot symbol:     off_48150
// Target type:     <no type info>
// ============================================================

void ._ZNSs4_Rep8_M_cloneERKSaIcEm(/* see target signature */)
{
    // Tail-call to _ZNSs4_Rep8_M_cloneERKSaIcEm via GOT/IAT indirection
    return _ZNSs4_Rep8_M_cloneERKSaIcEm(/* forwarded args */);
}

