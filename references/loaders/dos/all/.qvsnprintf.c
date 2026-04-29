// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2440
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2440 jmp     cs:off_B208
//
// Resolved target: qvsnprintf
// Target address:  0xB6A0
// GOT/IAT slot:    0xB208
// Slot symbol:     off_B208
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

