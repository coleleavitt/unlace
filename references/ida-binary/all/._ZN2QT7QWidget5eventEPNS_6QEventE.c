// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A700
// Name:            ._ZN2QT7QWidget5eventEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A700 jmp     cs:_ZN2QT7QWidget5eventEPNS_6QEventE_ptr
//
// Resolved target: _ZN2QT7QWidget5eventEPNS_6QEventE
// Target address:  0x8D9088
// GOT/IAT slot:    0x8A4020
// Slot symbol:     _ZN2QT7QWidget5eventEPNS_6QEventE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QEvent *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget5eventEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget5eventEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT7QWidget5eventEPNS_6QEventE(/* forwarded args */);
}

