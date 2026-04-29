// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_8098
//
// Resolved target: qalloc
// Target address:  0x8778
// GOT/IAT slot:    0x8098
// Slot symbol:     off_8098
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

