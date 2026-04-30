// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111A70
// Name:            ._ZN2QT7QDialog11qt_metacastEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111A70 jmp     cs:_ZN2QT7QDialog11qt_metacastEPKc_ptr
//
// Resolved target: _ZN2QT7QDialog11qt_metacastEPKc
// Target address:  0x8D3750
// GOT/IAT slot:    0x89F9D8
// Slot symbol:     _ZN2QT7QDialog11qt_metacastEPKc_ptr
// Target type:     _QWORD(QT::QDialog *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZN2QT7QDialog11qt_metacastEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT7QDialog11qt_metacastEPKc via GOT/IAT indirection
    return _ZN2QT7QDialog11qt_metacastEPKc(/* forwarded args */);
}

