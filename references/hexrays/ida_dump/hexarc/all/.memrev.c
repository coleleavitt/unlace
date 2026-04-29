// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA0
// Name:            .memrev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA0 jmp     cs:off_4B9E38
//
// Resolved target: memrev
// Target address:  0x4BC868
// GOT/IAT slot:    0x4B9E38
// Slot symbol:     off_4B9E38
// Target type:     <no type info>
// ============================================================

void .memrev(/* see target signature */)
{
    // Tail-call to memrev via GOT/IAT indirection
    return memrev(/* forwarded args */);
}

