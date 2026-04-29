// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A690
// Name:            .linearray_t_down
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A690 jmp     cs:off_4B9B30
//
// Resolved target: linearray_t_down
// Target address:  0x4BC538
// GOT/IAT slot:    0x4B9B30
// Slot symbol:     off_4B9B30
// Target type:     <no type info>
// ============================================================

void .linearray_t_down(/* see target signature */)
{
    // Tail-call to linearray_t_down via GOT/IAT indirection
    return linearray_t_down(/* forwarded args */);
}

