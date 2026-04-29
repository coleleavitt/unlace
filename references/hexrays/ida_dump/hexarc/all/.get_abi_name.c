// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29BD0
// Name:            .get_abi_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29BD0 jmp     cs:off_4B95D0
//
// Resolved target: get_abi_name
// Target address:  0x4BBFC0
// GOT/IAT slot:    0x4B95D0
// Slot symbol:     off_4B95D0
// Target type:     <no type info>
// ============================================================

void .get_abi_name(/* see target signature */)
{
    // Tail-call to get_abi_name via GOT/IAT indirection
    return get_abi_name(/* forwarded args */);
}

