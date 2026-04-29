// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B250
// Name:            .get_prev_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B250 jmp     cs:off_4DA910
//
// Resolved target: get_prev_func
// Target address:  0x4DD310
// GOT/IAT slot:    0x4DA910
// Slot symbol:     off_4DA910
// Target type:     <no type info>
// ============================================================

void .get_prev_func(/* see target signature */)
{
    // Tail-call to get_prev_func via GOT/IAT indirection
    return get_prev_func(/* forwarded args */);
}

