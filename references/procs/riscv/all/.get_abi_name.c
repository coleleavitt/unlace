// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3B0
// Name:            .get_abi_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3B0 jmp     cs:off_351C0
//
// Resolved target: get_abi_name
// Target address:  0x35810
// GOT/IAT slot:    0x351C0
// Slot symbol:     off_351C0
// Target type:     <no type info>
// ============================================================

void .get_abi_name(/* see target signature */)
{
    // Tail-call to get_abi_name via GOT/IAT indirection
    return get_abi_name(/* forwarded args */);
}

