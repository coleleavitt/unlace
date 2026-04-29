// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B720
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B720 jmp     cs:off_4C0B78
//
// Resolved target: qvsnprintf
// Target address:  0x4C3B78
// GOT/IAT slot:    0x4C0B78
// Slot symbol:     off_4C0B78
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

