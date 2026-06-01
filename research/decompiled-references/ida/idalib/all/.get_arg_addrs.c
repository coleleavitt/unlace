// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7610
// Name:            .get_arg_addrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7610 jmp     cs:off_2C792F0
//
// Resolved target: get_arg_addrs
// Target address:  0x60C300
// GOT/IAT slot:    0x2C792F0
// Slot symbol:     off_2C792F0
// Target type:     <no type info>
// ============================================================

void .get_arg_addrs(/* see target signature */)
{
    // Tail-call to get_arg_addrs via GOT/IAT indirection
    return get_arg_addrs(/* forwarded args */);
}

