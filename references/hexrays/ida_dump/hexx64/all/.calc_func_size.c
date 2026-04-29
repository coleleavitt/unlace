// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE80
// Name:            .calc_func_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE80 jmp     cs:off_4ED728
//
// Resolved target: calc_func_size
// Target address:  0x4F1A38
// GOT/IAT slot:    0x4ED728
// Slot symbol:     off_4ED728
// Target type:     <no type info>
// ============================================================

void .calc_func_size(/* see target signature */)
{
    // Tail-call to calc_func_size via GOT/IAT indirection
    return calc_func_size(/* forwarded args */);
}

