// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117180
// Name:            ._ZN2QT8QToolBar12addSeparatorEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117180 jmp     cs:_ZN2QT8QToolBar12addSeparatorEv_ptr
//
// Resolved target: _ZN2QT8QToolBar12addSeparatorEv
// Target address:  0x8D6ED0
// GOT/IAT slot:    0x8A2560
// Slot symbol:     _ZN2QT8QToolBar12addSeparatorEv_ptr
// Target type:     _QWORD(QT::QToolBar *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QToolBar12addSeparatorEv(/* see target signature */)
{
    // Tail-call to _ZN2QT8QToolBar12addSeparatorEv via GOT/IAT indirection
    return _ZN2QT8QToolBar12addSeparatorEv(/* forwarded args */);
}

