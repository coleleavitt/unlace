// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20AD0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20AD0 jmp     cs:off_95550
//
// Resolved target: qvsnprintf
// Target address:  0x95F88
// GOT/IAT slot:    0x95550
// Slot symbol:     off_95550
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

