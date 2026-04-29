// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22E0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22E0 jmp     cs:off_8158
//
// Resolved target: qfree
// Target address:  0x8350
// GOT/IAT slot:    0x8158
// Slot symbol:     off_8158
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

