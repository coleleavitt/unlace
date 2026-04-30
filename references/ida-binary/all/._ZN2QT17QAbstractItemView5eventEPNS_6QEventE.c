// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A1E0
// Name:            ._ZN2QT17QAbstractItemView5eventEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A1E0 jmp     cs:_ZN2QT17QAbstractItemView5eventEPNS_6QEventE_ptr
//
// Resolved target: _ZN2QT17QAbstractItemView5eventEPNS_6QEventE
// Target address:  0x8D8D38
// GOT/IAT slot:    0x8A3D90
// Slot symbol:     _ZN2QT17QAbstractItemView5eventEPNS_6QEventE_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this, QT::QEvent *)
// ============================================================

/* see target sig */ ._ZN2QT17QAbstractItemView5eventEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT17QAbstractItemView5eventEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT17QAbstractItemView5eventEPNS_6QEventE(/* forwarded args */);
}

