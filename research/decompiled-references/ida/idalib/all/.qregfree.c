// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD70
// Name:            .qregfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD70 jmp     cs:off_2C7BEA0
//
// Resolved target: qregfree
// Target address:  0x89FC20
// GOT/IAT slot:    0x2C7BEA0
// Slot symbol:     off_2C7BEA0
// Target type:     <no type info>
// ============================================================

void .qregfree(/* see target signature */)
{
    // Tail-call to qregfree via GOT/IAT indirection
    return qregfree(/* forwarded args */);
}

