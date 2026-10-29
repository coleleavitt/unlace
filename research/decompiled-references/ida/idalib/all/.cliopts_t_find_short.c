// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8640
// Name:            .cliopts_t_find_short
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8640 jmp     cs:off_2C79B08
//
// Resolved target: cliopts_t_find_short
// Target address:  0x828CC0
// GOT/IAT slot:    0x2C79B08
// Slot symbol:     off_2C79B08
// Target type:     <no type info>
// ============================================================

void .cliopts_t_find_short(/* see target signature */)
{
    // Tail-call to cliopts_t_find_short via GOT/IAT indirection
    return cliopts_t_find_short(/* forwarded args */);
}

