// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113AC0
// Name:            .rangeset_t_intersect
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113AC0 jmp     cs:rangeset_t_intersect_ptr
//
// Resolved target: rangeset_t_intersect
// Target address:  0x8D4C00
// GOT/IAT slot:    0x8A0A00
// Slot symbol:     rangeset_t_intersect_ptr
// Target type:     <no type info>
// ============================================================

void .rangeset_t_intersect(/* see target signature */)
{
    // Tail-call to rangeset_t_intersect via GOT/IAT indirection
    return rangeset_t_intersect(/* forwarded args */);
}

