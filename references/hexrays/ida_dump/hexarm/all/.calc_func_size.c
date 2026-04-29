// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DE40
// Name:            .calc_func_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DE40 jmp     cs:off_4E9708
//
// Resolved target: calc_func_size
// Target address:  0x4EC120
// GOT/IAT slot:    0x4E9708
// Slot symbol:     off_4E9708
// Target type:     <no type info>
// ============================================================

void .calc_func_size(/* see target signature */)
{
    // Tail-call to calc_func_size via GOT/IAT indirection
    return calc_func_size(/* forwarded args */);
}

