// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EE70
// Name:            .qmkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EE70 jmp     cs:off_4E9F20
//
// Resolved target: qmkdir
// Target address:  0x4EC970
// GOT/IAT slot:    0x4E9F20
// Slot symbol:     off_4E9F20
// Target type:     <no type info>
// ============================================================

void .qmkdir(/* see target signature */)
{
    // Tail-call to qmkdir via GOT/IAT indirection
    return qmkdir(/* forwarded args */);
}

