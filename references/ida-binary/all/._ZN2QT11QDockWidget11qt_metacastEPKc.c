// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114800
// Name:            ._ZN2QT11QDockWidget11qt_metacastEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114800 jmp     cs:_ZN2QT11QDockWidget11qt_metacastEPKc_ptr
//
// Resolved target: _ZN2QT11QDockWidget11qt_metacastEPKc
// Target address:  0x8D5478
// GOT/IAT slot:    0x8A10A0
// Slot symbol:     _ZN2QT11QDockWidget11qt_metacastEPKc_ptr
// Target type:     _QWORD(QT::QDockWidget *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZN2QT11QDockWidget11qt_metacastEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDockWidget11qt_metacastEPKc via GOT/IAT indirection
    return _ZN2QT11QDockWidget11qt_metacastEPKc(/* forwarded args */);
}

