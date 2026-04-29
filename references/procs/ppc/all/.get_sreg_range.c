// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20890
// Name:            .get_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20890 jmp     cs:off_95430
//
// Resolved target: get_sreg_range
// Target address:  0x95E68
// GOT/IAT slot:    0x95430
// Slot symbol:     off_95430
// Target type:     <no type info>
// ============================================================

void .get_sreg_range(/* see target signature */)
{
    // Tail-call to get_sreg_range via GOT/IAT indirection
    return get_sreg_range(/* forwarded args */);
}

