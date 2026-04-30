// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114280
// Name:            ._ZN2QT16QCoreApplication21setOrganizationDomainERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114280 jmp     cs:_ZN2QT16QCoreApplication21setOrganizationDomainERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT16QCoreApplication21setOrganizationDomainERKNS_7QStringE
// Target address:  0x8D50E8
// GOT/IAT slot:    0x8A0DE0
// Slot symbol:     _ZN2QT16QCoreApplication21setOrganizationDomainERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QCoreApplication *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT16QCoreApplication21setOrganizationDomainERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT16QCoreApplication21setOrganizationDomainERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT16QCoreApplication21setOrganizationDomainERKNS_7QStringE(/* forwarded args */);
}

