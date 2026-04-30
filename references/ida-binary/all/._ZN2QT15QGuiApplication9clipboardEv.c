// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114C00
// Name:            ._ZN2QT15QGuiApplication9clipboardEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114C00 jmp     cs:_ZN2QT15QGuiApplication9clipboardEv_ptr
//
// Resolved target: _ZN2QT15QGuiApplication9clipboardEv
// Target address:  0x8D5770
// GOT/IAT slot:    0x8A12A0
// Slot symbol:     _ZN2QT15QGuiApplication9clipboardEv_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication9clipboardEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication9clipboardEv via GOT/IAT indirection
    return _ZN2QT15QGuiApplication9clipboardEv(/* forwarded args */);
}

