// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111C00
// Name:            .rangeset_t_has_common
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111C00 jmp     cs:rangeset_t_has_common_ptr
//
// Resolved target: rangeset_t_has_common
// Target address:  0x8D3840
// GOT/IAT slot:    0x89FAA0
// Slot symbol:     rangeset_t_has_common_ptr
// Target type:     <no type info>
// ============================================================

void .rangeset_t_has_common(/* see target signature */)
{
    // Tail-call to rangeset_t_has_common via GOT/IAT indirection
    return rangeset_t_has_common(/* forwarded args */);
}

