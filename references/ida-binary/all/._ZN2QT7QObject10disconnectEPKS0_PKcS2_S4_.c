// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B050
// Name:            ._ZN2QT7QObject10disconnectEPKS0_PKcS2_S4_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B050 jmp     cs:_ZN2QT7QObject10disconnectEPKS0_PKcS2_S4__ptr
//
// Resolved target: _ZN2QT7QObject10disconnectEPKS0_PKcS2_S4_
// Target address:  0x8D9658
// GOT/IAT slot:    0x8A44C8
// Slot symbol:     _ZN2QT7QObject10disconnectEPKS0_PKcS2_S4__ptr
// Target type:     _QWORD(QT::QObject *__hidden this, const QT::QObject *, const char *, const QT::QObject *, const char *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject10disconnectEPKS0_PKcS2_S4_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject10disconnectEPKS0_PKcS2_S4_ via GOT/IAT indirection
    return _ZN2QT7QObject10disconnectEPKS0_PKcS2_S4_(/* forwarded args */);
}

