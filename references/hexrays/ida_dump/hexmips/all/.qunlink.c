// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B2F0
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B2F0 jmp     cs:off_4CD960
//
// Resolved target: qunlink
// Target address:  0x4D0380
// GOT/IAT slot:    0x4CD960
// Slot symbol:     off_4CD960
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

