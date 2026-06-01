// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD70
// Name:            .rangeset_t_has_common2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD70 jmp     cs:off_2C7B6A0
//
// Resolved target: rangeset_t_has_common2
// Target address:  0x847500
// GOT/IAT slot:    0x2C7B6A0
// Slot symbol:     off_2C7B6A0
// Target type:     <no type info>
// ============================================================

void .rangeset_t_has_common2(/* see target signature */)
{
    // Tail-call to rangeset_t_has_common2 via GOT/IAT indirection
    return rangeset_t_has_common2(/* forwarded args */);
}

