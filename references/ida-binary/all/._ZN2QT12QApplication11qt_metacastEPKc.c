// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115080
// Name:            ._ZN2QT12QApplication11qt_metacastEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115080 jmp     cs:_ZN2QT12QApplication11qt_metacastEPKc_ptr
//
// Resolved target: _ZN2QT12QApplication11qt_metacastEPKc
// Target address:  0x8D5A18
// GOT/IAT slot:    0x8A14E0
// Slot symbol:     _ZN2QT12QApplication11qt_metacastEPKc_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication11qt_metacastEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication11qt_metacastEPKc via GOT/IAT indirection
    return _ZN2QT12QApplication11qt_metacastEPKc(/* forwarded args */);
}

