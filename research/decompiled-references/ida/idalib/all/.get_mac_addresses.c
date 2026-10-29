// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE30
// Name:            .get_mac_addresses
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE30 jmp     cs:off_2C7AF00
//
// Resolved target: get_mac_addresses
// Target address:  0x838080
// GOT/IAT slot:    0x2C7AF00
// Slot symbol:     off_2C7AF00
// Target type:     <no type info>
// ============================================================

void .get_mac_addresses(/* see target signature */)
{
    // Tail-call to get_mac_addresses via GOT/IAT indirection
    return get_mac_addresses(/* forwarded args */);
}

