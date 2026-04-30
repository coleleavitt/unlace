// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AE40
// Name:            ._ZN2QT16QCoreApplication19setOrganizationNameERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AE40 jmp     cs:_ZN2QT16QCoreApplication19setOrganizationNameERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT16QCoreApplication19setOrganizationNameERKNS_7QStringE
// Target address:  0x8D9530
// GOT/IAT slot:    0x8A43C0
// Slot symbol:     _ZN2QT16QCoreApplication19setOrganizationNameERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QCoreApplication *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT16QCoreApplication19setOrganizationNameERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT16QCoreApplication19setOrganizationNameERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT16QCoreApplication19setOrganizationNameERKNS_7QStringE(/* forwarded args */);
}

