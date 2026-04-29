// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64C0
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64C0 jmp     cs:off_2D248
//
// Resolved target: qunlink
// Target address:  0x2D748
// GOT/IAT slot:    0x2D248
// Slot symbol:     off_2D248
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

