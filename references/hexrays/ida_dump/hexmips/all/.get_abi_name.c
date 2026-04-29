// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD0
// Name:            .get_abi_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD0 jmp     cs:off_4CD5D0
//
// Resolved target: get_abi_name
// Target address:  0x4CFFE0
// GOT/IAT slot:    0x4CD5D0
// Slot symbol:     off_4CD5D0
// Target type:     <no type info>
// ============================================================

void .get_abi_name(/* see target signature */)
{
    // Tail-call to get_abi_name via GOT/IAT indirection
    return get_abi_name(/* forwarded args */);
}

