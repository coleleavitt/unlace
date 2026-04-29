// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x205A0
// Name:            .get_abi_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x205A0 jmp     cs:off_952B8
//
// Resolved target: get_abi_name
// Target address:  0x95CF0
// GOT/IAT slot:    0x952B8
// Slot symbol:     off_952B8
// Target type:     <no type info>
// ============================================================

void .get_abi_name(/* see target signature */)
{
    // Tail-call to get_abi_name via GOT/IAT indirection
    return get_abi_name(/* forwarded args */);
}

