// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33C0
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33C0 jmp     cs:off_201C8
//
// Resolved target: qunlink
// Target address:  0x21AE8
// GOT/IAT slot:    0x201C8
// Slot symbol:     off_201C8
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

