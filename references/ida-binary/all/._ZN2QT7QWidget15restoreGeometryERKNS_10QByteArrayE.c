// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1155C0
// Name:            ._ZN2QT7QWidget15restoreGeometryERKNS_10QByteArrayE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1155C0 jmp     cs:_ZN2QT7QWidget15restoreGeometryERKNS_10QByteArrayE_ptr
//
// Resolved target: _ZN2QT7QWidget15restoreGeometryERKNS_10QByteArrayE
// Target address:  0x8D5D60
// GOT/IAT slot:    0x8A1780
// Slot symbol:     _ZN2QT7QWidget15restoreGeometryERKNS_10QByteArrayE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, const QT::QByteArray *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget15restoreGeometryERKNS_10QByteArrayE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget15restoreGeometryERKNS_10QByteArrayE via GOT/IAT indirection
    return _ZN2QT7QWidget15restoreGeometryERKNS_10QByteArrayE(/* forwarded args */);
}

