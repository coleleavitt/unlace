// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A79F0
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A79F0 jmp     cs:off_2C794E0
//
// Resolved target: open_linput
// Target address:  0x8372C0
// GOT/IAT slot:    0x2C794E0
// Slot symbol:     off_2C794E0
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}

