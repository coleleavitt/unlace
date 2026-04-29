// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_8160
//
// Resolved target: qvsnprintf
// Target address:  0x83C0
// GOT/IAT slot:    0x8160
// Slot symbol:     off_8160
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

