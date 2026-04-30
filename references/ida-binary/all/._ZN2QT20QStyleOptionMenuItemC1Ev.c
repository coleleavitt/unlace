// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1157A0
// Name:            ._ZN2QT20QStyleOptionMenuItemC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1157A0 jmp     cs:_ZN2QT20QStyleOptionMenuItemC1Ev_ptr
//
// Resolved target: _ZN2QT20QStyleOptionMenuItemC1Ev
// Target address:  0x8D5E78
// GOT/IAT slot:    0x8A1870
// Slot symbol:     _ZN2QT20QStyleOptionMenuItemC1Ev_ptr
// Target type:     _QWORD(QT::QStyleOptionMenuItem *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT20QStyleOptionMenuItemC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT20QStyleOptionMenuItemC1Ev via GOT/IAT indirection
    return _ZN2QT20QStyleOptionMenuItemC1Ev(/* forwarded args */);
}

