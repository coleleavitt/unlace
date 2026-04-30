// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1177B0
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1177B0 jmp     cs:rangeset_t_add_ptr
//
// Resolved target: rangeset_t_add
// Target address:  0x8D72D0
// GOT/IAT slot:    0x8A2878
// Slot symbol:     rangeset_t_add_ptr
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

