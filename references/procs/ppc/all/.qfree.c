// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F50
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F50 jmp     cs:off_95790
//
// Resolved target: qfree
// Target address:  0x961E8
// GOT/IAT slot:    0x95790
// Slot symbol:     off_95790
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

