// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8780
// Name:            .qwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8780 jmp     cs:off_2C79BA8
//
// Resolved target: qwrite
// Target address:  0x83E830
// GOT/IAT slot:    0x2C79BA8
// Slot symbol:     off_2C79BA8
// Target type:     <no type info>
// ============================================================

void .qwrite(/* see target signature */)
{
    // Tail-call to qwrite via GOT/IAT indirection
    return qwrite(/* forwarded args */);
}

