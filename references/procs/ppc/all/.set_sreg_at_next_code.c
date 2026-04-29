// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20230
// Name:            .set_sreg_at_next_code
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20230 jmp     cs:off_95100
//
// Resolved target: set_sreg_at_next_code
// Target address:  0x95B38
// GOT/IAT slot:    0x95100
// Slot symbol:     off_95100
// Target type:     <no type info>
// ============================================================

void .set_sreg_at_next_code(/* see target signature */)
{
    // Tail-call to set_sreg_at_next_code via GOT/IAT indirection
    return set_sreg_at_next_code(/* forwarded args */);
}

