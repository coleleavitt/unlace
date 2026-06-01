// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113A40
// Name:            .rangeset_t_add2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113A40 jmp     cs:rangeset_t_add2_ptr
//
// Resolved target: rangeset_t_add2
// Target address:  0x8D4BB8
// GOT/IAT slot:    0x8A09C0
// Slot symbol:     rangeset_t_add2_ptr
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add2(/* see target signature */)
{
    // Tail-call to rangeset_t_add2 via GOT/IAT indirection
    return rangeset_t_add2(/* forwarded args */);
}

