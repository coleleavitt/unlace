// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90B0
// Name:            .append_abi_opts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90B0 jmp     cs:off_89040
//
// Resolved target: append_abi_opts
// Target address:  0x8C340
// GOT/IAT slot:    0x89040
// Slot symbol:     off_89040
// Target type:     <no type info>
// ============================================================

void .append_abi_opts(/* see target signature */)
{
    // Tail-call to append_abi_opts via GOT/IAT indirection
    return append_abi_opts(/* forwarded args */);
}

