// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x510400
// Name:            j_._ZN2QT7QDialog9showEventEPNS_10QShowEventE
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x510400 jmp     __ZN2QT7QDialog9showEventEPNS_10QShowEventE
//
// Resolved target: ._ZN2QT7QDialog9showEventEPNS_10QShowEventE
// Target address:  0x1133F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64(void)
// ============================================================

/* see target sig */ j_._ZN2QT7QDialog9showEventEPNS_10QShowEventE(/* see target signature */)
{
    // Tail-call to ._ZN2QT7QDialog9showEventEPNS_10QShowEventE via direct jump indirection
    return ._ZN2QT7QDialog9showEventEPNS_10QShowEventE(/* forwarded args */);
}

