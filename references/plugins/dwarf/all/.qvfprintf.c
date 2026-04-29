// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA030
// Name:            .qvfprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA030 jmp     cs:off_CA000
//
// Resolved target: qvfprintf
// Target address:  0xD0920
// GOT/IAT slot:    0xCA000
// Slot symbol:     off_CA000
// Target type:     <no type info>
// ============================================================

void .qvfprintf(/* see target signature */)
{
    // Tail-call to qvfprintf via GOT/IAT indirection
    return qvfprintf(/* forwarded args */);
}

