// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1153C0
// Name:            ._ZNSaIcEC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1153C0 jmp     cs:_ZNSaIcEC1Ev_ptr
//
// Resolved target: _ZNSaIcEC1Ev
// Target address:  0x8D5C38
// GOT/IAT slot:    0x8A1680
// Slot symbol:     _ZNSaIcEC1Ev_ptr
// Target type:     <no type info>
// ============================================================

void ._ZNSaIcEC1Ev(/* see target signature */)
{
    // Tail-call to _ZNSaIcEC1Ev via GOT/IAT indirection
    return _ZNSaIcEC1Ev(/* forwarded args */);
}

