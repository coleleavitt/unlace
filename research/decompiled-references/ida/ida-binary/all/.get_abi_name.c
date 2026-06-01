// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113430
// Name:            .get_abi_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113430 jmp     cs:get_abi_name_ptr
//
// Resolved target: get_abi_name
// Target address:  0x8D47E0
// GOT/IAT slot:    0x8A06B8
// Slot symbol:     get_abi_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_abi_name(/* see target signature */)
{
    // Tail-call to get_abi_name via GOT/IAT indirection
    return get_abi_name(/* forwarded args */);
}

