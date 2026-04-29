// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D550
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D550 jmp     cs:off_B3290
//
// Resolved target: qalloc
// Target address:  0xB3A30
// GOT/IAT slot:    0xB3290
// Slot symbol:     off_B3290
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

