// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3490
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3490 jmp     cs:off_28230
//
// Resolved target: qunlink
// Target address:  0x286E0
// GOT/IAT slot:    0x28230
// Slot symbol:     off_28230
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

