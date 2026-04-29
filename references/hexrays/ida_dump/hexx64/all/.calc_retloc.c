// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C6F0
// Name:            .calc_retloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C6F0 jmp     cs:off_4EDB60
//
// Resolved target: calc_retloc
// Target address:  0x4F1E90
// GOT/IAT slot:    0x4EDB60
// Slot symbol:     off_4EDB60
// Target type:     <no type info>
// ============================================================

void .calc_retloc(/* see target signature */)
{
    // Tail-call to calc_retloc via GOT/IAT indirection
    return calc_retloc(/* forwarded args */);
}

