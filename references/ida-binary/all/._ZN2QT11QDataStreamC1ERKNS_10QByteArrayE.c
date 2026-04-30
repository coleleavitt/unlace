// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1154A0
// Name:            ._ZN2QT11QDataStreamC1ERKNS_10QByteArrayE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1154A0 jmp     cs:_ZN2QT11QDataStreamC1ERKNS_10QByteArrayE_ptr
//
// Resolved target: _ZN2QT11QDataStreamC1ERKNS_10QByteArrayE
// Target address:  0x8D5CC0
// GOT/IAT slot:    0x8A16F0
// Slot symbol:     _ZN2QT11QDataStreamC1ERKNS_10QByteArrayE_ptr
// Target type:     _QWORD(QT::QDataStream *__hidden this, const QT::QByteArray *)
// ============================================================

/* see target sig */ ._ZN2QT11QDataStreamC1ERKNS_10QByteArrayE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDataStreamC1ERKNS_10QByteArrayE via GOT/IAT indirection
    return _ZN2QT11QDataStreamC1ERKNS_10QByteArrayE(/* forwarded args */);
}

