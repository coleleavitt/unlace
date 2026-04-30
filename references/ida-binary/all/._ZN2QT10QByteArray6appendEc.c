// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AF20
// Name:            ._ZN2QT10QByteArray6appendEc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AF20 jmp     cs:_ZN2QT10QByteArray6appendEc_ptr
//
// Resolved target: _ZN2QT10QByteArray6appendEc
// Target address:  0x8D95B0
// GOT/IAT slot:    0x8A4430
// Slot symbol:     _ZN2QT10QByteArray6appendEc_ptr
// Target type:     _QWORD(QT::QByteArray *__hidden this, char)
// ============================================================

/* see target sig */ ._ZN2QT10QByteArray6appendEc(/* see target signature */)
{
    // Tail-call to _ZN2QT10QByteArray6appendEc via GOT/IAT indirection
    return _ZN2QT10QByteArray6appendEc(/* forwarded args */);
}

