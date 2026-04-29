// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x53B0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x53B0 jmp     cs:off_1A1C0
//
// Resolved target: qvsnprintf
// Target address:  0x1A548
// GOT/IAT slot:    0x1A1C0
// Slot symbol:     off_1A1C0
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

