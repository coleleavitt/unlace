// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x174E0
// Name:            ._ZN2QT7QObject11qt_metacastEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x174E0 jmp     cs:off_4FA58
//
// Resolved target: _ZN2QT7QObject11qt_metacastEPKc
// Target address:  0x51078
// GOT/IAT slot:    0x4FA58
// Slot symbol:     off_4FA58
// Target type:     _QWORD(QT::QObject *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject11qt_metacastEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject11qt_metacastEPKc via GOT/IAT indirection
    return _ZN2QT7QObject11qt_metacastEPKc(/* forwarded args */);
}

