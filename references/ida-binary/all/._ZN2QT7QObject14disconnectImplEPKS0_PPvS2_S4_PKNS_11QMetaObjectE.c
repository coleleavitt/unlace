// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118D40
// Name:            ._ZN2QT7QObject14disconnectImplEPKS0_PPvS2_S4_PKNS_11QMetaObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118D40 jmp     cs:_ZN2QT7QObject14disconnectImplEPKS0_PPvS2_S4_PKNS_11QMetaObjectE_ptr
//
// Resolved target: _ZN2QT7QObject14disconnectImplEPKS0_PPvS2_S4_PKNS_11QMetaObjectE
// Target address:  0x8D8000
// GOT/IAT slot:    0x8A3340
// Slot symbol:     _ZN2QT7QObject14disconnectImplEPKS0_PPvS2_S4_PKNS_11QMetaObjectE_ptr
// Target type:     _QWORD(QT::QObject *__hidden this, const QT::QObject *, void **, const QT::QObject *, void **, const QT::QMetaObject *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject14disconnectImplEPKS0_PPvS2_S4_PKNS_11QMetaObjectE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject14disconnectImplEPKS0_PPvS2_S4_PKNS_11QMetaObjectE via GOT/IAT indirection
    return _ZN2QT7QObject14disconnectImplEPKS0_PPvS2_S4_PKNS_11QMetaObjectE(/* forwarded args */);
}

