// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC20
// Name:            .get_abi_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC20 jmp     cs:off_4ED5F8
//
// Resolved target: get_abi_name
// Target address:  0x4F1900
// GOT/IAT slot:    0x4ED5F8
// Slot symbol:     off_4ED5F8
// Target type:     <no type info>
// ============================================================

void .get_abi_name(/* see target signature */)
{
    // Tail-call to get_abi_name via GOT/IAT indirection
    return get_abi_name(/* forwarded args */);
}

