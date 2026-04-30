// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114960
// Name:            ._ZN2QT15QGuiApplication17keyboardModifiersEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114960 jmp     cs:_ZN2QT15QGuiApplication17keyboardModifiersEv_ptr
//
// Resolved target: _ZN2QT15QGuiApplication17keyboardModifiersEv
// Target address:  0x8D55A0
// GOT/IAT slot:    0x8A1150
// Slot symbol:     _ZN2QT15QGuiApplication17keyboardModifiersEv_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication17keyboardModifiersEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication17keyboardModifiersEv via GOT/IAT indirection
    return _ZN2QT15QGuiApplication17keyboardModifiersEv(/* forwarded args */);
}

