// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AE80
// Name:            ._ZN2QT13QSignalMapper10setMappingEPNS_7QObjectEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AE80 jmp     cs:_ZN2QT13QSignalMapper10setMappingEPNS_7QObjectEi_ptr
//
// Resolved target: _ZN2QT13QSignalMapper10setMappingEPNS_7QObjectEi
// Target address:  0x8D9550
// GOT/IAT slot:    0x8A43E0
// Slot symbol:     _ZN2QT13QSignalMapper10setMappingEPNS_7QObjectEi_ptr
// Target type:     _QWORD(QT::QSignalMapper *__hidden this, QT::QObject *, int)
// ============================================================

/* see target sig */ ._ZN2QT13QSignalMapper10setMappingEPNS_7QObjectEi(/* see target signature */)
{
    // Tail-call to _ZN2QT13QSignalMapper10setMappingEPNS_7QObjectEi via GOT/IAT indirection
    return _ZN2QT13QSignalMapper10setMappingEPNS_7QObjectEi(/* forwarded args */);
}

