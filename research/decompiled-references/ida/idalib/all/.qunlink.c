// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A72C0
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A72C0 jmp     cs:off_2C79148
//
// Resolved target: qunlink
// Target address:  0x83F240
// GOT/IAT slot:    0x2C79148
// Slot symbol:     off_2C79148
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

