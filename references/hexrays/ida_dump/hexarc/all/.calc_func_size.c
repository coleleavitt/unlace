// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29E20
// Name:            .calc_func_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29E20 jmp     cs:off_4B96F8
//
// Resolved target: calc_func_size
// Target address:  0x4BC0F0
// GOT/IAT slot:    0x4B96F8
// Slot symbol:     off_4B96F8
// Target type:     <no type info>
// ============================================================

void .calc_func_size(/* see target signature */)
{
    // Tail-call to calc_func_size via GOT/IAT indirection
    return calc_func_size(/* forwarded args */);
}

