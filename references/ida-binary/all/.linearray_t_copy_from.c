// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116CE0
// Name:            .linearray_t_copy_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116CE0 jmp     cs:linearray_t_copy_from_ptr
//
// Resolved target: linearray_t_copy_from
// Target address:  0x8D6BF8
// GOT/IAT slot:    0x8A2310
// Slot symbol:     linearray_t_copy_from_ptr
// Target type:     <no type info>
// ============================================================

void .linearray_t_copy_from(/* see target signature */)
{
    // Tail-call to linearray_t_copy_from via GOT/IAT indirection
    return linearray_t_copy_from(/* forwarded args */);
}

