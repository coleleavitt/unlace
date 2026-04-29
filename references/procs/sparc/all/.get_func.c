// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7360
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7360 jmp     cs:off_19198
//
// Resolved target: get_func
// Target address:  0x196C8
// GOT/IAT slot:    0x19198
// Slot symbol:     off_19198
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

