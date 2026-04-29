// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x194A0
// Name:            .get_abi_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x194A0 jmp     cs:off_75238
//
// Resolved target: get_abi_name
// Target address:  0x75A88
// GOT/IAT slot:    0x75238
// Slot symbol:     off_75238
// Target type:     <no type info>
// ============================================================

void .get_abi_name(/* see target signature */)
{
    // Tail-call to get_abi_name via GOT/IAT indirection
    return get_abi_name(/* forwarded args */);
}

