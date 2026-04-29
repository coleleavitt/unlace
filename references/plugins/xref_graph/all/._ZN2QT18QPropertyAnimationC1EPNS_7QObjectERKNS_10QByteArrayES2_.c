// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16A70
// Name:            ._ZN2QT18QPropertyAnimationC1EPNS_7QObjectERKNS_10QByteArrayES2_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16A70 jmp     cs:off_4F520
//
// Resolved target: _ZN2QT18QPropertyAnimationC1EPNS_7QObjectERKNS_10QByteArrayES2_
// Target address:  0x50750
// GOT/IAT slot:    0x4F520
// Slot symbol:     off_4F520
// Target type:     _QWORD(QT::QPropertyAnimation *__hidden this, QT::QObject *, const QT::QByteArray *, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT18QPropertyAnimationC1EPNS_7QObjectERKNS_10QByteArrayES2_(/* see target signature */)
{
    // Tail-call to _ZN2QT18QPropertyAnimationC1EPNS_7QObjectERKNS_10QByteArrayES2_ via GOT/IAT indirection
    return _ZN2QT18QPropertyAnimationC1EPNS_7QObjectERKNS_10QByteArrayES2_(/* forwarded args */);
}

