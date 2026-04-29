// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45A0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45A0 jmp     cs:off_232B8
//
// Resolved target: qvsnprintf
// Target address:  0x236D8
// GOT/IAT slot:    0x232B8
// Slot symbol:     off_232B8
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

