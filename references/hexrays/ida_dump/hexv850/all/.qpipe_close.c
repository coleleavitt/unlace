// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA60
// Name:            .qpipe_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA60 jmp     cs:off_4C0D18
//
// Resolved target: qpipe_close
// Target address:  0x4C3D30
// GOT/IAT slot:    0x4C0D18
// Slot symbol:     off_4C0D18
// Target type:     <no type info>
// ============================================================

void .qpipe_close(/* see target signature */)
{
    // Tail-call to qpipe_close via GOT/IAT indirection
    return qpipe_close(/* forwarded args */);
}

