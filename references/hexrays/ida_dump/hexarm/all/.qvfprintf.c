// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D060
// Name:            .qvfprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D060 jmp     cs:off_4E9018
//
// Resolved target: qvfprintf
// Target address:  0x4EBA08
// GOT/IAT slot:    0x4E9018
// Slot symbol:     off_4E9018
// Target type:     <no type info>
// ============================================================

void .qvfprintf(/* see target signature */)
{
    // Tail-call to qvfprintf via GOT/IAT indirection
    return qvfprintf(/* forwarded args */);
}

