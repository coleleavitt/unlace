// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_A108
//
// Resolved target: set_name
// Target address:  0xA338
// GOT/IAT slot:    0xA108
// Slot symbol:     off_A108
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

