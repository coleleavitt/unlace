// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115850
// Name:            .get_sreg_range_num
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115850 jmp     cs:get_sreg_range_num_ptr
//
// Resolved target: get_sreg_range_num
// Target address:  0x8D5EE0
// GOT/IAT slot:    0x8A18C8
// Slot symbol:     get_sreg_range_num_ptr
// Target type:     <no type info>
// ============================================================

void .get_sreg_range_num(/* see target signature */)
{
    // Tail-call to get_sreg_range_num via GOT/IAT indirection
    return get_sreg_range_num(/* forwarded args */);
}

