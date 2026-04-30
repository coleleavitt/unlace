// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119670
// Name:            ._ZN2QT12QStyleOptionC1Eii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119670 jmp     cs:_ZN2QT12QStyleOptionC1Eii_ptr
//
// Resolved target: _ZN2QT12QStyleOptionC1Eii
// Target address:  0x8D8630
// GOT/IAT slot:    0x8A37D8
// Slot symbol:     _ZN2QT12QStyleOptionC1Eii_ptr
// Target type:     _QWORD(QT::QStyleOption *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT12QStyleOptionC1Eii(/* see target signature */)
{
    // Tail-call to _ZN2QT12QStyleOptionC1Eii via GOT/IAT indirection
    return _ZN2QT12QStyleOptionC1Eii(/* forwarded args */);
}

