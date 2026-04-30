// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116860
// Name:            .read_ioports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116860 jmp     cs:read_ioports_ptr
//
// Resolved target: read_ioports
// Target address:  0x8D6930
// GOT/IAT slot:    0x8A20D0
// Slot symbol:     read_ioports_ptr
// Target type:     <no type info>
// ============================================================

void .read_ioports(/* see target signature */)
{
    // Tail-call to read_ioports via GOT/IAT indirection
    return read_ioports(/* forwarded args */);
}

