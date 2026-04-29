// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4A60
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4A60 jmp     cs:off_4E518
//
// Resolved target: qfree
// Target address:  0x4FB50
// GOT/IAT slot:    0x4E518
// Slot symbol:     off_4E518
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

