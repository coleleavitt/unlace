// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112090
// Name:            ._ZN2QT15QGuiApplication12mouseButtonsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112090 jmp     cs:_ZN2QT15QGuiApplication12mouseButtonsEv_ptr
//
// Resolved target: _ZN2QT15QGuiApplication12mouseButtonsEv
// Target address:  0x8D3B18
// GOT/IAT slot:    0x89FCE8
// Slot symbol:     _ZN2QT15QGuiApplication12mouseButtonsEv_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication12mouseButtonsEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication12mouseButtonsEv via GOT/IAT indirection
    return _ZN2QT15QGuiApplication12mouseButtonsEv(/* forwarded args */);
}

