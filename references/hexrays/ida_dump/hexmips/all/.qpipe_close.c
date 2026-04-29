// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA60
// Name:            .qpipe_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA60 jmp     cs:off_4CDD18
//
// Resolved target: qpipe_close
// Target address:  0x4D0758
// GOT/IAT slot:    0x4CDD18
// Slot symbol:     off_4CDD18
// Target type:     <no type info>
// ============================================================

void .qpipe_close(/* see target signature */)
{
    // Tail-call to qpipe_close via GOT/IAT indirection
    return qpipe_close(/* forwarded args */);
}

