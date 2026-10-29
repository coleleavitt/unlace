// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB190
// Name:            .cliopts_t_find_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB190 jmp     cs:off_2C7B0B0
//
// Resolved target: cliopts_t_find_long
// Target address:  0x828D00
// GOT/IAT slot:    0x2C7B0B0
// Slot symbol:     off_2C7B0B0
// Target type:     <no type info>
// ============================================================

void .cliopts_t_find_long(/* see target signature */)
{
    // Tail-call to cliopts_t_find_long via GOT/IAT indirection
    return cliopts_t_find_long(/* forwarded args */);
}

