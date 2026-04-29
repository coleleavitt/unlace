// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9360
// Name:            .get_abi_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9360 jmp     cs:off_2E198
//
// Resolved target: get_abi_name
// Target address:  0x2E808
// GOT/IAT slot:    0x2E198
// Slot symbol:     off_2E198
// Target type:     <no type info>
// ============================================================

void .get_abi_name(/* see target signature */)
{
    // Tail-call to get_abi_name via GOT/IAT indirection
    return get_abi_name(/* forwarded args */);
}

