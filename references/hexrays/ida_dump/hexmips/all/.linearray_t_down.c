// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6C0
// Name:            .linearray_t_down
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6C0 jmp     cs:off_4CDB48
//
// Resolved target: linearray_t_down
// Target address:  0x4D0570
// GOT/IAT slot:    0x4CDB48
// Slot symbol:     off_4CDB48
// Target type:     <no type info>
// ============================================================

void .linearray_t_down(/* see target signature */)
{
    // Tail-call to linearray_t_down via GOT/IAT indirection
    return linearray_t_down(/* forwarded args */);
}

