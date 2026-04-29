// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4A70
// Name:            .fopenRT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4A70 jmp     cs:off_4E520
//
// Resolved target: fopenRT
// Target address:  0x4FB58
// GOT/IAT slot:    0x4E520
// Slot symbol:     off_4E520
// Target type:     <no type info>
// ============================================================

void .fopenRT(/* see target signature */)
{
    // Tail-call to fopenRT via GOT/IAT indirection
    return fopenRT(/* forwarded args */);
}

