// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EA90
// Name:            .qpipe_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EA90 jmp     cs:off_4E9D30
//
// Resolved target: qpipe_close
// Target address:  0x4EC770
// GOT/IAT slot:    0x4E9D30
// Slot symbol:     off_4E9D30
// Target type:     <no type info>
// ============================================================

void .qpipe_close(/* see target signature */)
{
    // Tail-call to qpipe_close via GOT/IAT indirection
    return qpipe_close(/* forwarded args */);
}

