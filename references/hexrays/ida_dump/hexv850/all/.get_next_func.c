// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA60
// Name:            .get_next_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA60 jmp     cs:off_4C0518
//
// Resolved target: get_next_func
// Target address:  0x4C34F8
// GOT/IAT slot:    0x4C0518
// Slot symbol:     off_4C0518
// Target type:     <no type info>
// ============================================================

void .get_next_func(/* see target signature */)
{
    // Tail-call to get_next_func via GOT/IAT indirection
    return get_next_func(/* forwarded args */);
}

