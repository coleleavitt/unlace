// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF00
// Name:            .qpipe_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF00 jmp     cs:off_2C7AF68
//
// Resolved target: qpipe_create
// Target address:  0x83BEB0
// GOT/IAT slot:    0x2C7AF68
// Slot symbol:     off_2C7AF68
// Target type:     <no type info>
// ============================================================

void .qpipe_create(/* see target signature */)
{
    // Tail-call to qpipe_create via GOT/IAT indirection
    return qpipe_create(/* forwarded args */);
}

