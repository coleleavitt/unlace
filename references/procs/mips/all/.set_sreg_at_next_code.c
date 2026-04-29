// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19190
// Name:            .set_sreg_at_next_code
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19190 jmp     cs:off_750B0
//
// Resolved target: set_sreg_at_next_code
// Target address:  0x75900
// GOT/IAT slot:    0x750B0
// Slot symbol:     off_750B0
// Target type:     <no type info>
// ============================================================

void .set_sreg_at_next_code(/* see target signature */)
{
    // Tail-call to set_sreg_at_next_code via GOT/IAT indirection
    return set_sreg_at_next_code(/* forwarded args */);
}

