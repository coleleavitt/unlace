// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1172F0
// Name:            ._ZNSaIcEC2ERKS_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1172F0 jmp     cs:_ZNSaIcEC2ERKS__ptr
//
// Resolved target: _ZNSaIcEC2ERKS_
// Target address:  0x8D6FD0
// GOT/IAT slot:    0x8A2618
// Slot symbol:     _ZNSaIcEC2ERKS__ptr
// Target type:     <no type info>
// ============================================================

void ._ZNSaIcEC2ERKS_(/* see target signature */)
{
    // Tail-call to _ZNSaIcEC2ERKS_ via GOT/IAT indirection
    return _ZNSaIcEC2ERKS_(/* forwarded args */);
}

