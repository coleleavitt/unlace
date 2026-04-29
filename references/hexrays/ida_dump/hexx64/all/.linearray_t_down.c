// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C780
// Name:            .linearray_t_down
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C780 jmp     cs:off_4EDBA8
//
// Resolved target: linearray_t_down
// Target address:  0x4F1ED8
// GOT/IAT slot:    0x4EDBA8
// Slot symbol:     off_4EDBA8
// Target type:     <no type info>
// ============================================================

void .linearray_t_down(/* see target signature */)
{
    // Tail-call to linearray_t_down via GOT/IAT indirection
    return linearray_t_down(/* forwarded args */);
}

