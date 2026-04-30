// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112A50
// Name:            ._ZN2QT11QMessageBox11qt_metacastEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112A50 jmp     cs:_ZN2QT11QMessageBox11qt_metacastEPKc_ptr
//
// Resolved target: _ZN2QT11QMessageBox11qt_metacastEPKc
// Target address:  0x8D4150
// GOT/IAT slot:    0x8A01C8
// Slot symbol:     _ZN2QT11QMessageBox11qt_metacastEPKc_ptr
// Target type:     _QWORD(QT::QMessageBox *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZN2QT11QMessageBox11qt_metacastEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMessageBox11qt_metacastEPKc via GOT/IAT indirection
    return _ZN2QT11QMessageBox11qt_metacastEPKc(/* forwarded args */);
}

