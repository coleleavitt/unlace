// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119F10
// Name:            ._ZN2QT17QAbstractItemView11eventFilterEPNS_7QObjectEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119F10 jmp     cs:_ZN2QT17QAbstractItemView11eventFilterEPNS_7QObjectEPNS_6QEventE_ptr
//
// Resolved target: _ZN2QT17QAbstractItemView11eventFilterEPNS_7QObjectEPNS_6QEventE
// Target address:  0x8D8B68
// GOT/IAT slot:    0x8A3C28
// Slot symbol:     _ZN2QT17QAbstractItemView11eventFilterEPNS_7QObjectEPNS_6QEventE_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this, QT::QObject *, QT::QEvent *)
// ============================================================

/* see target sig */ ._ZN2QT17QAbstractItemView11eventFilterEPNS_7QObjectEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT17QAbstractItemView11eventFilterEPNS_7QObjectEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT17QAbstractItemView11eventFilterEPNS_7QObjectEPNS_6QEventE(/* forwarded args */);
}

