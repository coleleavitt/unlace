// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113230
// Name:            ._ZN2QT11QMetaObject8activateEPNS_7QObjectEPKS0_iPPv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113230 jmp     cs:_ZN2QT11QMetaObject8activateEPNS_7QObjectEPKS0_iPPv_ptr
//
// Resolved target: _ZN2QT11QMetaObject8activateEPNS_7QObjectEPKS0_iPPv
// Target address:  0x8D4690
// GOT/IAT slot:    0x8A05B8
// Slot symbol:     _ZN2QT11QMetaObject8activateEPNS_7QObjectEPKS0_iPPv_ptr
// Target type:     _QWORD(QT::QMetaObject *__hidden this, QT::QObject *, const QT::QMetaObject *, int, void **)
// ============================================================

/* see target sig */ ._ZN2QT11QMetaObject8activateEPNS_7QObjectEPKS0_iPPv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMetaObject8activateEPNS_7QObjectEPKS0_iPPv via GOT/IAT indirection
    return _ZN2QT11QMetaObject8activateEPNS_7QObjectEPKS0_iPPv(/* forwarded args */);
}

