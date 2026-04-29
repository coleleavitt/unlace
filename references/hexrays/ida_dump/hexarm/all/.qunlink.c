// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E330
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E330 jmp     cs:off_4E9980
//
// Resolved target: qunlink
// Target address:  0x4EC3A0
// GOT/IAT slot:    0x4E9980
// Slot symbol:     off_4E9980
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

