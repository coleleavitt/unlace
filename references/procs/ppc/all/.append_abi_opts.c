// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20110
// Name:            .append_abi_opts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20110 jmp     cs:off_95070
//
// Resolved target: append_abi_opts
// Target address:  0x95AA0
// GOT/IAT slot:    0x95070
// Slot symbol:     off_95070
// Target type:     <no type info>
// ============================================================

void .append_abi_opts(/* see target signature */)
{
    // Tail-call to append_abi_opts via GOT/IAT indirection
    return append_abi_opts(/* forwarded args */);
}

