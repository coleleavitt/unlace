// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAB0
// Name:            .get_next_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAB0 jmp     cs:off_4ED540
//
// Resolved target: get_next_func
// Target address:  0x4F1840
// GOT/IAT slot:    0x4ED540
// Slot symbol:     off_4ED540
// Target type:     <no type info>
// ============================================================

void .get_next_func(/* see target signature */)
{
    // Tail-call to get_next_func via GOT/IAT indirection
    return get_next_func(/* forwarded args */);
}

