// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119730
// Name:            .linearray_t_beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119730 jmp     cs:linearray_t_beginning_ptr
//
// Resolved target: linearray_t_beginning
// Target address:  0x8D86B0
// GOT/IAT slot:    0x8A3838
// Slot symbol:     linearray_t_beginning_ptr
// Target type:     <no type info>
// ============================================================

void .linearray_t_beginning(/* see target signature */)
{
    // Tail-call to linearray_t_beginning via GOT/IAT indirection
    return linearray_t_beginning(/* forwarded args */);
}

