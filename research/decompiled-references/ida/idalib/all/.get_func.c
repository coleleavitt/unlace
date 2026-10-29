// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8BD0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8BD0 jmp     cs:off_2C79DD0
//
// Resolved target: get_func
// Target address:  0x5CA230
// GOT/IAT slot:    0x2C79DD0
// Slot symbol:     off_2C79DD0
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

