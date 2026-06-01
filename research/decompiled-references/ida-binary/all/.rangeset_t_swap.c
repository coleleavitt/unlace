// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119900
// Name:            .rangeset_t_swap
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119900 jmp     cs:rangeset_t_swap_ptr
//
// Resolved target: rangeset_t_swap
// Target address:  0x8D87B0
// GOT/IAT slot:    0x8A3920
// Slot symbol:     rangeset_t_swap_ptr
// Target type:     <no type info>
// ============================================================

void .rangeset_t_swap(/* see target signature */)
{
    // Tail-call to rangeset_t_swap via GOT/IAT indirection
    return rangeset_t_swap(/* forwarded args */);
}

