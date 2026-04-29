// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFC0
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFC0 jmp     cs:off_4ED7C8
//
// Resolved target: qalloc
// Target address:  0x4F1AD8
// GOT/IAT slot:    0x4ED7C8
// Slot symbol:     off_4ED7C8
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

