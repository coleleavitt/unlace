// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B2F0
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B2F0 jmp     cs:off_4DA960
//
// Resolved target: qunlink
// Target address:  0x4DD360
// GOT/IAT slot:    0x4DA960
// Slot symbol:     off_4DA960
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

