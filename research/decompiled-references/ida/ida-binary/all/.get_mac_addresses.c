// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117420
// Name:            .get_mac_addresses
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117420 jmp     cs:get_mac_addresses_ptr
//
// Resolved target: get_mac_addresses
// Target address:  0x8D7098
// GOT/IAT slot:    0x8A26B0
// Slot symbol:     get_mac_addresses_ptr
// Target type:     <no type info>
// ============================================================

void .get_mac_addresses(/* see target signature */)
{
    // Tail-call to get_mac_addresses via GOT/IAT indirection
    return get_mac_addresses(/* forwarded args */);
}

