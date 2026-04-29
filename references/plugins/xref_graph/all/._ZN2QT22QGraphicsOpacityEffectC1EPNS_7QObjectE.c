// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17200
// Name:            ._ZN2QT22QGraphicsOpacityEffectC1EPNS_7QObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17200 jmp     cs:off_4F8E8
//
// Resolved target: _ZN2QT22QGraphicsOpacityEffectC1EPNS_7QObjectE
// Target address:  0x50DC8
// GOT/IAT slot:    0x4F8E8
// Slot symbol:     off_4F8E8
// Target type:     _QWORD(QT::QGraphicsOpacityEffect *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT22QGraphicsOpacityEffectC1EPNS_7QObjectE(/* see target signature */)
{
    // Tail-call to _ZN2QT22QGraphicsOpacityEffectC1EPNS_7QObjectE via GOT/IAT indirection
    return _ZN2QT22QGraphicsOpacityEffectC1EPNS_7QObjectE(/* forwarded args */);
}

