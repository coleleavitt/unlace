// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B440
// Name:            ._ZN2QT7QObject11qt_metacastEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B440 jmp     cs:_ZN2QT7QObject11qt_metacastEPKc_ptr
//
// Resolved target: _ZN2QT7QObject11qt_metacastEPKc
// Target address:  0x8D9900
// GOT/IAT slot:    0x8A46C0
// Slot symbol:     _ZN2QT7QObject11qt_metacastEPKc_ptr
// Target type:     _QWORD(QT::QObject *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject11qt_metacastEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject11qt_metacastEPKc via GOT/IAT indirection
    return _ZN2QT7QObject11qt_metacastEPKc(/* forwarded args */);
}

