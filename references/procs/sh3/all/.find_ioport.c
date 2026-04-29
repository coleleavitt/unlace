// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5540
// Name:            .find_ioport
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5540 jmp     cs:off_15288
//
// Resolved target: find_ioport
// Target address:  0x16320
// GOT/IAT slot:    0x15288
// Slot symbol:     off_15288
// Target type:     <no type info>
// ============================================================

void .find_ioport(/* see target signature */)
{
    // Tail-call to find_ioport via GOT/IAT indirection
    return find_ioport(/* forwarded args */);
}

