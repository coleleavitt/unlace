// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1220
// Name:            .read_ioports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1220 jmp     cs:off_50F8
//
// Resolved target: read_ioports
// Target address:  0x5268
// GOT/IAT slot:    0x50F8
// Slot symbol:     off_50F8
// Target type:     <no type info>
// ============================================================

void .read_ioports(/* see target signature */)
{
    // Tail-call to read_ioports via GOT/IAT indirection
    return read_ioports(/* forwarded args */);
}

