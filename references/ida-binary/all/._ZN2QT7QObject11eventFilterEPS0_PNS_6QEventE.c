// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1175A0
// Name:            ._ZN2QT7QObject11eventFilterEPS0_PNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1175A0 jmp     cs:_ZN2QT7QObject11eventFilterEPS0_PNS_6QEventE_ptr
//
// Resolved target: _ZN2QT7QObject11eventFilterEPS0_PNS_6QEventE
// Target address:  0x8D7188
// GOT/IAT slot:    0x8A2770
// Slot symbol:     _ZN2QT7QObject11eventFilterEPS0_PNS_6QEventE_ptr
// Target type:     _QWORD(QT::QObject *__hidden this, QT::QObject *, QT::QEvent *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject11eventFilterEPS0_PNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject11eventFilterEPS0_PNS_6QEventE via GOT/IAT indirection
    return _ZN2QT7QObject11eventFilterEPS0_PNS_6QEventE(/* forwarded args */);
}

