// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119280
// Name:            ._ZN2QT15QtSharedPointer20ExternalRefCountData9getAndRefEPKNS_7QObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119280 jmp     cs:_ZN2QT15QtSharedPointer20ExternalRefCountData9getAndRefEPKNS_7QObjectE_ptr
//
// Resolved target: _ZN2QT15QtSharedPointer20ExternalRefCountData9getAndRefEPKNS_7QObjectE
// Target address:  0x8D8358
// GOT/IAT slot:    0x8A35E0
// Slot symbol:     _ZN2QT15QtSharedPointer20ExternalRefCountData9getAndRefEPKNS_7QObjectE_ptr
// Target type:     _QWORD(QT::QtSharedPointer::ExternalRefCountData *__hidden this, const QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT15QtSharedPointer20ExternalRefCountData9getAndRefEPKNS_7QObjectE(/* see target signature */)
{
    // Tail-call to _ZN2QT15QtSharedPointer20ExternalRefCountData9getAndRefEPKNS_7QObjectE via GOT/IAT indirection
    return _ZN2QT15QtSharedPointer20ExternalRefCountData9getAndRefEPKNS_7QObjectE(/* forwarded args */);
}

