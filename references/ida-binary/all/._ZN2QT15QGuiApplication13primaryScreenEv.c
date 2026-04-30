// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111090
// Name:            ._ZN2QT15QGuiApplication13primaryScreenEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111090 jmp     cs:_ZN2QT15QGuiApplication13primaryScreenEv_ptr
//
// Resolved target: _ZN2QT15QGuiApplication13primaryScreenEv
// Target address:  0x8D30E0
// GOT/IAT slot:    0x89F4E8
// Slot symbol:     _ZN2QT15QGuiApplication13primaryScreenEv_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication13primaryScreenEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication13primaryScreenEv via GOT/IAT indirection
    return _ZN2QT15QGuiApplication13primaryScreenEv(/* forwarded args */);
}

