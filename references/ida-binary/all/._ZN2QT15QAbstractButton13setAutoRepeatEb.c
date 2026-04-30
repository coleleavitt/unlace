// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115440
// Name:            ._ZN2QT15QAbstractButton13setAutoRepeatEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115440 jmp     cs:_ZN2QT15QAbstractButton13setAutoRepeatEb_ptr
//
// Resolved target: _ZN2QT15QAbstractButton13setAutoRepeatEb
// Target address:  0x8D5C88
// GOT/IAT slot:    0x8A16C0
// Slot symbol:     _ZN2QT15QAbstractButton13setAutoRepeatEb_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton13setAutoRepeatEb(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton13setAutoRepeatEb via GOT/IAT indirection
    return _ZN2QT15QAbstractButton13setAutoRepeatEb(/* forwarded args */);
}

