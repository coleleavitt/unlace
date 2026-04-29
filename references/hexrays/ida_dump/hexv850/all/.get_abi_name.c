// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD0
// Name:            .get_abi_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD0 jmp     cs:off_4C05D0
//
// Resolved target: get_abi_name
// Target address:  0x4C35B8
// GOT/IAT slot:    0x4C05D0
// Slot symbol:     off_4C05D0
// Target type:     <no type info>
// ============================================================

void .get_abi_name(/* see target signature */)
{
    // Tail-call to get_abi_name via GOT/IAT indirection
    return get_abi_name(/* forwarded args */);
}

