// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA420
// Name:            .qrmdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA420 jmp     cs:off_2C7A9F8
//
// Resolved target: qrmdir
// Target address:  0x83EAE0
// GOT/IAT slot:    0x2C7A9F8
// Slot symbol:     off_2C7A9F8
// Target type:     <no type info>
// ============================================================

void .qrmdir(/* see target signature */)
{
    // Tail-call to qrmdir via GOT/IAT indirection
    return qrmdir(/* forwarded args */);
}

