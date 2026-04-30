// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B360
// Name:            ._ZN2QT10QByteArray5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B360 jmp     cs:_ZN2QT10QByteArray5clearEv_ptr
//
// Resolved target: _ZN2QT10QByteArray5clearEv
// Target address:  0x8D9838
// GOT/IAT slot:    0x8A4650
// Slot symbol:     _ZN2QT10QByteArray5clearEv_ptr
// Target type:     _QWORD(QT::QByteArray *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT10QByteArray5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT10QByteArray5clearEv via GOT/IAT indirection
    return _ZN2QT10QByteArray5clearEv(/* forwarded args */);
}

