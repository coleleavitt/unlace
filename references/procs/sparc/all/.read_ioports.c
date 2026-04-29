// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x77B0
// Name:            .read_ioports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x77B0 jmp     cs:off_193C0
//
// Resolved target: read_ioports
// Target address:  0x19908
// GOT/IAT slot:    0x193C0
// Slot symbol:     off_193C0
// Target type:     <no type info>
// ============================================================

void .read_ioports(/* see target signature */)
{
    // Tail-call to read_ioports via GOT/IAT indirection
    return read_ioports(/* forwarded args */);
}

