// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116EC0
// Name:            ._ZN2QT9QLineEdit21setClearButtonEnabledEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116EC0 jmp     cs:_ZN2QT9QLineEdit21setClearButtonEnabledEb_ptr
//
// Resolved target: _ZN2QT9QLineEdit21setClearButtonEnabledEb
// Target address:  0x8D6D08
// GOT/IAT slot:    0x8A2400
// Slot symbol:     _ZN2QT9QLineEdit21setClearButtonEnabledEb_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit21setClearButtonEnabledEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit21setClearButtonEnabledEb via GOT/IAT indirection
    return _ZN2QT9QLineEdit21setClearButtonEnabledEb(/* forwarded args */);
}

