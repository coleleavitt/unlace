// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9050
// Name:            .qustrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9050 jmp     cs:off_2C7A010
//
// Resolved target: qustrncpy
// Target address:  0x82CFA0
// GOT/IAT slot:    0x2C7A010
// Slot symbol:     off_2C7A010
// Target type:     <no type info>
// ============================================================

void .qustrncpy(/* see target signature */)
{
    // Tail-call to qustrncpy via GOT/IAT indirection
    return qustrncpy(/* forwarded args */);
}

