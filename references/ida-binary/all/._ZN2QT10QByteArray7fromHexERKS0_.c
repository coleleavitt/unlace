// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A330
// Name:            ._ZN2QT10QByteArray7fromHexERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A330 jmp     cs:_ZN2QT10QByteArray7fromHexERKS0__ptr
//
// Resolved target: _ZN2QT10QByteArray7fromHexERKS0_
// Target address:  0x8D8DE8
// GOT/IAT slot:    0x8A3E38
// Slot symbol:     _ZN2QT10QByteArray7fromHexERKS0__ptr
// Target type:     _QWORD(QT::QByteArray *__hidden this, const QT::QByteArray *)
// ============================================================

/* see target sig */ ._ZN2QT10QByteArray7fromHexERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT10QByteArray7fromHexERKS0_ via GOT/IAT indirection
    return _ZN2QT10QByteArray7fromHexERKS0_(/* forwarded args */);
}

