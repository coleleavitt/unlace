// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7940
// Name:            .qaccess
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7940 jmp     cs:off_2C79488
//
// Resolved target: qaccess
// Target address:  0x83F260
// GOT/IAT slot:    0x2C79488
// Slot symbol:     off_2C79488
// Target type:     <no type info>
// ============================================================

void .qaccess(/* see target signature */)
{
    // Tail-call to qaccess via GOT/IAT indirection
    return qaccess(/* forwarded args */);
}

