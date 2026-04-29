// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17570
// Name:            ._ZN2QT7QWidget11qt_metacastEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17570 jmp     cs:off_4FAA0
//
// Resolved target: _ZN2QT7QWidget11qt_metacastEPKc
// Target address:  0x51130
// GOT/IAT slot:    0x4FAA0
// Slot symbol:     off_4FAA0
// Target type:     _QWORD(QT::QWidget *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget11qt_metacastEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget11qt_metacastEPKc via GOT/IAT indirection
    return _ZN2QT7QWidget11qt_metacastEPKc(/* forwarded args */);
}

