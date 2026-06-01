// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117E70
// Name:            .linearray_t_down
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117E70 jmp     cs:linearray_t_down_ptr
//
// Resolved target: linearray_t_down
// Target address:  0x8D7728
// GOT/IAT slot:    0x8A2BD8
// Slot symbol:     linearray_t_down_ptr
// Target type:     <no type info>
// ============================================================

void .linearray_t_down(/* see target signature */)
{
    // Tail-call to linearray_t_down via GOT/IAT indirection
    return linearray_t_down(/* forwarded args */);
}

