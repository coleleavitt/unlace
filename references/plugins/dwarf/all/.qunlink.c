// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA770
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA770 jmp     cs:off_CA3A0
//
// Resolved target: qunlink
// Target address:  0xD0CD8
// GOT/IAT slot:    0xCA3A0
// Slot symbol:     off_CA3A0
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

