// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA700
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA700 jmp     cs:off_35368
//
// Resolved target: qvsnprintf
// Target address:  0x359B8
// GOT/IAT slot:    0x35368
// Slot symbol:     off_35368
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

