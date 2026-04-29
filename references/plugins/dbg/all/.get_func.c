// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32E0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32E0 jmp     cs:off_13158
//
// Resolved target: get_func
// Target address:  0x134D8
// GOT/IAT slot:    0x13158
// Slot symbol:     off_13158
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

