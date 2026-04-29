// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C050
// Name:            .bitcount
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C050 jmp     cs:off_4CE010
//
// Resolved target: bitcount
// Target address:  0x4D0A60
// GOT/IAT slot:    0x4CE010
// Slot symbol:     off_4CE010
// Target type:     <no type info>
// ============================================================

void .bitcount(/* see target signature */)
{
    // Tail-call to bitcount via GOT/IAT indirection
    return bitcount(/* forwarded args */);
}

