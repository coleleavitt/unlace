// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA50
// Name:            .qpipe_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA50 jmp     cs:off_4DAD10
//
// Resolved target: qpipe_close
// Target address:  0x4DD730
// GOT/IAT slot:    0x4DAD10
// Slot symbol:     off_4DAD10
// Target type:     <no type info>
// ============================================================

void .qpipe_close(/* see target signature */)
{
    // Tail-call to qpipe_close via GOT/IAT indirection
    return qpipe_close(/* forwarded args */);
}

