// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1167D0
// Name:            ._ZN2QT5QIconC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1167D0 jmp     cs:_ZN2QT5QIconC1Ev_ptr
//
// Resolved target: _ZN2QT5QIconC1Ev
// Target address:  0x8D68D0
// GOT/IAT slot:    0x8A2088
// Slot symbol:     _ZN2QT5QIconC1Ev_ptr
// Target type:     _QWORD(QT::QIcon *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QIconC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT5QIconC1Ev via GOT/IAT indirection
    return _ZN2QT5QIconC1Ev(/* forwarded args */);
}

