// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6040
// Name:            .qvfprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6040 jmp     cs:off_2D008
//
// Resolved target: qvfprintf
// Target address:  0x2D508
// GOT/IAT slot:    0x2D008
// Slot symbol:     off_2D008
// Target type:     <no type info>
// ============================================================

void .qvfprintf(/* see target signature */)
{
    // Tail-call to qvfprintf via GOT/IAT indirection
    return qvfprintf(/* forwarded args */);
}

