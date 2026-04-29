// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61E0
// Name:            .rangeset_t_add2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61E0 jmp     cs:off_8D0D8
//
// Resolved target: rangeset_t_add2
// Target address:  0x8D658
// GOT/IAT slot:    0x8D0D8
// Slot symbol:     off_8D0D8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add2(/* see target signature */)
{
    // Tail-call to rangeset_t_add2 via GOT/IAT indirection
    return rangeset_t_add2(/* forwarded args */);
}

