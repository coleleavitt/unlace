// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1181A0
// Name:            ._ZN2QT7QWidget5raiseEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1181A0 jmp     cs:_ZN2QT7QWidget5raiseEv_ptr
//
// Resolved target: _ZN2QT7QWidget5raiseEv
// Target address:  0x8D7920
// GOT/IAT slot:    0x8A2D70
// Slot symbol:     _ZN2QT7QWidget5raiseEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget5raiseEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget5raiseEv via GOT/IAT indirection
    return _ZN2QT7QWidget5raiseEv(/* forwarded args */);
}

