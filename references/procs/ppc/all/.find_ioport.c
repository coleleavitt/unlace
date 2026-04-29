// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B80
// Name:            .find_ioport
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B80 jmp     cs:off_955A8
//
// Resolved target: find_ioport
// Target address:  0x95FE8
// GOT/IAT slot:    0x955A8
// Slot symbol:     off_955A8
// Target type:     <no type info>
// ============================================================

void .find_ioport(/* see target signature */)
{
    // Tail-call to find_ioport via GOT/IAT indirection
    return find_ioport(/* forwarded args */);
}

