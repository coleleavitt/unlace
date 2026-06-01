// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAB90
// Name:            .find_ioport
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAB90 jmp     cs:off_2C7ADB0
//
// Resolved target: find_ioport
// Target address:  0x84A200
// GOT/IAT slot:    0x2C7ADB0
// Slot symbol:     off_2C7ADB0
// Target type:     <no type info>
// ============================================================

void .find_ioport(/* see target signature */)
{
    // Tail-call to find_ioport via GOT/IAT indirection
    return find_ioport(/* forwarded args */);
}

