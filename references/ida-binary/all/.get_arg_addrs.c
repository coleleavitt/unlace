// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1119C0
// Name:            .get_arg_addrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1119C0 jmp     cs:get_arg_addrs_ptr
//
// Resolved target: get_arg_addrs
// Target address:  0x8D36D8
// GOT/IAT slot:    0x89F980
// Slot symbol:     get_arg_addrs_ptr
// Target type:     <no type info>
// ============================================================

void .get_arg_addrs(/* see target signature */)
{
    // Tail-call to get_arg_addrs via GOT/IAT indirection
    return get_arg_addrs(/* forwarded args */);
}

