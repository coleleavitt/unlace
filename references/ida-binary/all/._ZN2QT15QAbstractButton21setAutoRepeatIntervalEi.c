// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1143A0
// Name:            ._ZN2QT15QAbstractButton21setAutoRepeatIntervalEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1143A0 jmp     cs:_ZN2QT15QAbstractButton21setAutoRepeatIntervalEi_ptr
//
// Resolved target: _ZN2QT15QAbstractButton21setAutoRepeatIntervalEi
// Target address:  0x8D51A0
// GOT/IAT slot:    0x8A0E70
// Slot symbol:     _ZN2QT15QAbstractButton21setAutoRepeatIntervalEi_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton21setAutoRepeatIntervalEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton21setAutoRepeatIntervalEi via GOT/IAT indirection
    return _ZN2QT15QAbstractButton21setAutoRepeatIntervalEi(/* forwarded args */);
}

