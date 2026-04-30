// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150B0
// Name:            ._ZNSaIcED2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150B0 jmp     cs:_ZNSaIcED2Ev_ptr
//
// Resolved target: _ZNSaIcED2Ev
// Target address:  0x8D5A30
// GOT/IAT slot:    0x8A14F8
// Slot symbol:     _ZNSaIcED2Ev_ptr
// Target type:     <no type info>
// ============================================================

void ._ZNSaIcED2Ev(/* see target signature */)
{
    // Tail-call to _ZNSaIcED2Ev via GOT/IAT indirection
    return _ZNSaIcED2Ev(/* forwarded args */);
}

