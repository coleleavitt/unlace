// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC4A0
// Name:            .linearray_t_beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC4A0 jmp     cs:off_2C7BA38
//
// Resolved target: linearray_t_beginning
// Target address:  0x453800
// GOT/IAT slot:    0x2C7BA38
// Slot symbol:     off_2C7BA38
// Target type:     <no type info>
// ============================================================

void .linearray_t_beginning(/* see target signature */)
{
    // Tail-call to linearray_t_beginning via GOT/IAT indirection
    return linearray_t_beginning(/* forwarded args */);
}

