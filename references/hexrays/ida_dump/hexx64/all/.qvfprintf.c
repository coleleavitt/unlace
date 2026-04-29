// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B060
// Name:            .qvfprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B060 jmp     cs:off_4ED018
//
// Resolved target: qvfprintf
// Target address:  0x4F1308
// GOT/IAT slot:    0x4ED018
// Slot symbol:     off_4ED018
// Target type:     <no type info>
// ============================================================

void .qvfprintf(/* see target signature */)
{
    // Tail-call to qvfprintf via GOT/IAT indirection
    return qvfprintf(/* forwarded args */);
}

