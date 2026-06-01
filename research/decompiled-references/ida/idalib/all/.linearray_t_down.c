// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB480
// Name:            .linearray_t_down
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB480 jmp     cs:off_2C7B228
//
// Resolved target: linearray_t_down
// Target address:  0x4539F0
// GOT/IAT slot:    0x2C7B228
// Slot symbol:     off_2C7B228
// Target type:     <no type info>
// ============================================================

void .linearray_t_down(/* see target signature */)
{
    // Tail-call to linearray_t_down via GOT/IAT indirection
    return linearray_t_down(/* forwarded args */);
}

