// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1133F0
// Name:            ._ZN2QT7QDialog9showEventEPNS_10QShowEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1133F0 jmp     cs:_ZN2QT7QDialog9showEventEPNS_10QShowEventE_ptr
//
// Resolved target: _ZN2QT7QDialog9showEventEPNS_10QShowEventE
// Target address:  0x8D47C0
// GOT/IAT slot:    0x8A0698
// Slot symbol:     _ZN2QT7QDialog9showEventEPNS_10QShowEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QDialog9showEventEPNS_10QShowEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QDialog9showEventEPNS_10QShowEventE via GOT/IAT indirection
    return _ZN2QT7QDialog9showEventEPNS_10QShowEventE(/* forwarded args */);
}

