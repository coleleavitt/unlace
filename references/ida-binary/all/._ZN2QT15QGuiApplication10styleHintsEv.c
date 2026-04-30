// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113720
// Name:            ._ZN2QT15QGuiApplication10styleHintsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113720 jmp     cs:_ZN2QT15QGuiApplication10styleHintsEv_ptr
//
// Resolved target: _ZN2QT15QGuiApplication10styleHintsEv
// Target address:  0x8D49A8
// GOT/IAT slot:    0x8A0830
// Slot symbol:     _ZN2QT15QGuiApplication10styleHintsEv_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication10styleHintsEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication10styleHintsEv via GOT/IAT indirection
    return _ZN2QT15QGuiApplication10styleHintsEv(/* forwarded args */);
}

