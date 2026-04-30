// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B170
// Name:            .linearray_t_up
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B170 jmp     cs:linearray_t_up_ptr
//
// Resolved target: linearray_t_up
// Target address:  0x8D96F8
// GOT/IAT slot:    0x8A4558
// Slot symbol:     linearray_t_up_ptr
// Target type:     <no type info>
// ============================================================

void .linearray_t_up(/* see target signature */)
{
    // Tail-call to linearray_t_up via GOT/IAT indirection
    return linearray_t_up(/* forwarded args */);
}

