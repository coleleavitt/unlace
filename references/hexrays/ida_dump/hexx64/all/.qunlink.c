// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C3B0
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C3B0 jmp     cs:off_4ED9C0
//
// Resolved target: qunlink
// Target address:  0x4F1CE0
// GOT/IAT slot:    0x4ED9C0
// Slot symbol:     off_4ED9C0
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

