// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6F0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A6F0 jmp     cs:off_4B9B60
//
// Resolved target: qvsnprintf
// Target address:  0x4BC568
// GOT/IAT slot:    0x4B9B60
// Slot symbol:     off_4B9B60
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

