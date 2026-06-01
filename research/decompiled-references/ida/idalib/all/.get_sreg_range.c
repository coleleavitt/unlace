// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8430
// Name:            .get_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8430 jmp     cs:off_2C79A00
//
// Resolved target: get_sreg_range
// Target address:  0x518DF0
// GOT/IAT slot:    0x2C79A00
// Slot symbol:     off_2C79A00
// Target type:     <no type info>
// ============================================================

void .get_sreg_range(/* see target signature */)
{
    // Tail-call to get_sreg_range via GOT/IAT indirection
    return get_sreg_range(/* forwarded args */);
}

