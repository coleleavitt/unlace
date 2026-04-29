// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD80
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAD80 jmp     cs:off_CA6A8
//
// Resolved target: qfree
// Target address:  0xD1010
// GOT/IAT slot:    0xCA6A8
// Slot symbol:     off_CA6A8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

