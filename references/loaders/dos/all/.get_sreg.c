// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2360
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2360 jmp     cs:off_B198
//
// Resolved target: get_sreg
// Target address:  0xB630
// GOT/IAT slot:    0xB198
// Slot symbol:     off_B198
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

