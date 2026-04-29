// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CB50
// Name:            .qpipe_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CB50 jmp     cs:off_4EDD90
//
// Resolved target: qpipe_close
// Target address:  0x4F20D0
// GOT/IAT slot:    0x4EDD90
// Slot symbol:     off_4EDD90
// Target type:     <no type info>
// ============================================================

void .qpipe_close(/* see target signature */)
{
    // Tail-call to qpipe_close via GOT/IAT indirection
    return qpipe_close(/* forwarded args */);
}

