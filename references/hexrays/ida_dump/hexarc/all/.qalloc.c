// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29F50
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29F50 jmp     cs:off_4B9790
//
// Resolved target: qalloc
// Target address:  0x4BC188
// GOT/IAT slot:    0x4B9790
// Slot symbol:     off_4B9790
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

