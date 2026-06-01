// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9040
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9040 jmp     cs:off_2C7A008
//
// Resolved target: get_sreg
// Target address:  0x518860
// GOT/IAT slot:    0x2C7A008
// Slot symbol:     off_2C7A008
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

