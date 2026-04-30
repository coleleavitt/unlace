// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116C60
// Name:            ._ZNSaIcEC1ERKS_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116C60 jmp     cs:_ZNSaIcEC1ERKS__ptr
//
// Resolved target: _ZNSaIcEC1ERKS_
// Target address:  0x8D6BA0
// GOT/IAT slot:    0x8A22D0
// Slot symbol:     _ZNSaIcEC1ERKS__ptr
// Target type:     <no type info>
// ============================================================

void ._ZNSaIcEC1ERKS_(/* see target signature */)
{
    // Tail-call to _ZNSaIcEC1ERKS_ via GOT/IAT indirection
    return _ZNSaIcEC1ERKS_(/* forwarded args */);
}

