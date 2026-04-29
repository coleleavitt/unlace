// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8630
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8630 jmp     cs:off_2A300
//
// Resolved target: qvsnprintf
// Target address:  0x2BD10
// GOT/IAT slot:    0x2A300
// Slot symbol:     off_2A300
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

