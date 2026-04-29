// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A060
// Name:            .qvfprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A060 jmp     cs:off_4DA018
//
// Resolved target: qvfprintf
// Target address:  0x4DC9E8
// GOT/IAT slot:    0x4DA018
// Slot symbol:     off_4DA018
// Target type:     <no type info>
// ============================================================

void .qvfprintf(/* see target signature */)
{
    // Tail-call to qvfprintf via GOT/IAT indirection
    return qvfprintf(/* forwarded args */);
}

