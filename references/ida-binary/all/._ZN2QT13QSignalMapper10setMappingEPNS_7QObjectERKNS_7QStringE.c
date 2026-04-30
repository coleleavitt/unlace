// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111F60
// Name:            ._ZN2QT13QSignalMapper10setMappingEPNS_7QObjectERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111F60 jmp     cs:_ZN2QT13QSignalMapper10setMappingEPNS_7QObjectERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT13QSignalMapper10setMappingEPNS_7QObjectERKNS_7QStringE
// Target address:  0x8D3A58
// GOT/IAT slot:    0x89FC50
// Slot symbol:     _ZN2QT13QSignalMapper10setMappingEPNS_7QObjectERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QSignalMapper *__hidden this, QT::QObject *, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT13QSignalMapper10setMappingEPNS_7QObjectERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QSignalMapper10setMappingEPNS_7QObjectERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT13QSignalMapper10setMappingEPNS_7QObjectERKNS_7QStringE(/* forwarded args */);
}

