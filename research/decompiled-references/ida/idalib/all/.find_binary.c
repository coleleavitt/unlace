// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A94F0
// Name:            .find_binary
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A94F0 jmp     cs:off_2C7A260
//
// Resolved target: find_binary
// Target address:  0x67C670
// GOT/IAT slot:    0x2C7A260
// Slot symbol:     off_2C7A260
// Target type:     <no type info>
// ============================================================

void .find_binary(/* see target signature */)
{
    // Tail-call to find_binary via GOT/IAT indirection
    return find_binary(/* forwarded args */);
}

