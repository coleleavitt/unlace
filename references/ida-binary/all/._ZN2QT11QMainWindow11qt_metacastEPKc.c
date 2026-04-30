// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113280
// Name:            ._ZN2QT11QMainWindow11qt_metacastEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113280 jmp     cs:_ZN2QT11QMainWindow11qt_metacastEPKc_ptr
//
// Resolved target: _ZN2QT11QMainWindow11qt_metacastEPKc
// Target address:  0x8D46D0
// GOT/IAT slot:    0x8A05E0
// Slot symbol:     _ZN2QT11QMainWindow11qt_metacastEPKc_ptr
// Target type:     _QWORD(QT::QMainWindow *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZN2QT11QMainWindow11qt_metacastEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMainWindow11qt_metacastEPKc via GOT/IAT indirection
    return _ZN2QT11QMainWindow11qt_metacastEPKc(/* forwarded args */);
}

