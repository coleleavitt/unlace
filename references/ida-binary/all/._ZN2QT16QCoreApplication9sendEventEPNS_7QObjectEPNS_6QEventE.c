// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111E40
// Name:            ._ZN2QT16QCoreApplication9sendEventEPNS_7QObjectEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111E40 jmp     cs:_ZN2QT16QCoreApplication9sendEventEPNS_7QObjectEPNS_6QEventE_ptr
//
// Resolved target: _ZN2QT16QCoreApplication9sendEventEPNS_7QObjectEPNS_6QEventE
// Target address:  0x8D39C0
// GOT/IAT slot:    0x89FBC0
// Slot symbol:     _ZN2QT16QCoreApplication9sendEventEPNS_7QObjectEPNS_6QEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT16QCoreApplication9sendEventEPNS_7QObjectEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT16QCoreApplication9sendEventEPNS_7QObjectEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT16QCoreApplication9sendEventEPNS_7QObjectEPNS_6QEventE(/* forwarded args */);
}

