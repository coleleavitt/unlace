// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17480
// Name:            ._ZN2QT10QByteArray6appendEc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17480 jmp     cs:off_4FA28
//
// Resolved target: _ZN2QT10QByteArray6appendEc
// Target address:  0x51000
// GOT/IAT slot:    0x4FA28
// Slot symbol:     off_4FA28
// Target type:     _QWORD(QT::QByteArray *__hidden this, char)
// ============================================================

/* see target sig */ ._ZN2QT10QByteArray6appendEc(/* see target signature */)
{
    // Tail-call to _ZN2QT10QByteArray6appendEc via GOT/IAT indirection
    return _ZN2QT10QByteArray6appendEc(/* forwarded args */);
}

