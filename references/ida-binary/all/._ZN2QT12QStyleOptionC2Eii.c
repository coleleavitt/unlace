// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1156B0
// Name:            ._ZN2QT12QStyleOptionC2Eii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1156B0 jmp     cs:_ZN2QT12QStyleOptionC2Eii_ptr
//
// Resolved target: _ZN2QT12QStyleOptionC2Eii
// Target address:  0x8D5DE0
// GOT/IAT slot:    0x8A17F8
// Slot symbol:     _ZN2QT12QStyleOptionC2Eii_ptr
// Target type:     _QWORD(QT::QStyleOption *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT12QStyleOptionC2Eii(/* see target signature */)
{
    // Tail-call to _ZN2QT12QStyleOptionC2Eii via GOT/IAT indirection
    return _ZN2QT12QStyleOptionC2Eii(/* forwarded args */);
}

