// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91F0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91F0 jmp     cs:off_260E0
//
// Resolved target: get_func
// Target address:  0x263F0
// GOT/IAT slot:    0x260E0
// Slot symbol:     off_260E0
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

