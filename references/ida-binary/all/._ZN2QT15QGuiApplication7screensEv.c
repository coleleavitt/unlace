// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112C40
// Name:            ._ZN2QT15QGuiApplication7screensEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112C40 jmp     cs:_ZN2QT15QGuiApplication7screensEv_ptr
//
// Resolved target: _ZN2QT15QGuiApplication7screensEv
// Target address:  0x8D42A8
// GOT/IAT slot:    0x8A02C0
// Slot symbol:     _ZN2QT15QGuiApplication7screensEv_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication7screensEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication7screensEv via GOT/IAT indirection
    return _ZN2QT15QGuiApplication7screensEv(/* forwarded args */);
}

