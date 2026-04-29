// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DF70
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DF70 jmp     cs:off_4E97A0
//
// Resolved target: qalloc
// Target address:  0x4EC1B8
// GOT/IAT slot:    0x4E97A0
// Slot symbol:     off_4E97A0
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

