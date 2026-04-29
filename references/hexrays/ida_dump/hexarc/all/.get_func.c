// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29E50
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29E50 jmp     cs:off_4B9710
//
// Resolved target: get_func
// Target address:  0x4BC108
// GOT/IAT slot:    0x4B9710
// Slot symbol:     off_4B9710
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

