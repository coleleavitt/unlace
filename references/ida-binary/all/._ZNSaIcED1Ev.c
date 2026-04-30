// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111180
// Name:            ._ZNSaIcED1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111180 jmp     cs:_ZNSaIcED1Ev_ptr
//
// Resolved target: _ZNSaIcED1Ev
// Target address:  0x8D3168
// GOT/IAT slot:    0x89F560
// Slot symbol:     _ZNSaIcED1Ev_ptr
// Target type:     <no type info>
// ============================================================

void ._ZNSaIcED1Ev(/* see target signature */)
{
    // Tail-call to _ZNSaIcED1Ev via GOT/IAT indirection
    return _ZNSaIcED1Ev(/* forwarded args */);
}

