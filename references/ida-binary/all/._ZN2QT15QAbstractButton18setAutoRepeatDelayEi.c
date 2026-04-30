// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116E10
// Name:            ._ZN2QT15QAbstractButton18setAutoRepeatDelayEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116E10 jmp     cs:_ZN2QT15QAbstractButton18setAutoRepeatDelayEi_ptr
//
// Resolved target: _ZN2QT15QAbstractButton18setAutoRepeatDelayEi
// Target address:  0x8D6CA0
// GOT/IAT slot:    0x8A23A8
// Slot symbol:     _ZN2QT15QAbstractButton18setAutoRepeatDelayEi_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton18setAutoRepeatDelayEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton18setAutoRepeatDelayEi via GOT/IAT indirection
    return _ZN2QT15QAbstractButton18setAutoRepeatDelayEi(/* forwarded args */);
}

