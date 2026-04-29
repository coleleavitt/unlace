// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2210
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2210 jmp     cs:off_B0F0
//
// Resolved target: qalloc
// Target address:  0xB398
// GOT/IAT slot:    0xB0F0
// Slot symbol:     off_B0F0
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

