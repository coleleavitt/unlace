// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD560
// Name:            .linearray_t_up
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD560 jmp     cs:off_2C7C298
//
// Resolved target: linearray_t_up
// Target address:  0x453A90
// GOT/IAT slot:    0x2C7C298
// Slot symbol:     off_2C7C298
// Target type:     <no type info>
// ============================================================

void .linearray_t_up(/* see target signature */)
{
    // Tail-call to linearray_t_up via GOT/IAT indirection
    return linearray_t_up(/* forwarded args */);
}

