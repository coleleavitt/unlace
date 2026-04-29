// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA30
// Name:            .qpipe_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA30 jmp     cs:off_4B9D00
//
// Resolved target: qpipe_close
// Target address:  0x4BC720
// GOT/IAT slot:    0x4B9D00
// Slot symbol:     off_4B9D00
// Target type:     <no type info>
// ============================================================

void .qpipe_close(/* see target signature */)
{
    // Tail-call to qpipe_close via GOT/IAT indirection
    return qpipe_close(/* forwarded args */);
}

