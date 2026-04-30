// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112510
// Name:            ._ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112510 jmp     cs:_ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE_ptr
//
// Resolved target: _ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE
// Target address:  0x8D3E20
// GOT/IAT slot:    0x89FF28
// Slot symbol:     _ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE(/* forwarded args */);
}

