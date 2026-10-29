// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A90E0
// Name:            .eadd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A90E0 jmp     cs:off_2C7A058
//
// Resolved target: eadd
// Target address:  0x831080
// GOT/IAT slot:    0x2C7A058
// Slot symbol:     off_2C7A058
// Target type:     <no type info>
// ============================================================

void .eadd(/* see target signature */)
{
    // Tail-call to eadd via GOT/IAT indirection
    return eadd(/* forwarded args */);
}

