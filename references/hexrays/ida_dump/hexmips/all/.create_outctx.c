// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF10
// Name:            .create_outctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF10 jmp     cs:off_4CD770
//
// Resolved target: create_outctx
// Target address:  0x4D0188
// GOT/IAT slot:    0x4CD770
// Slot symbol:     off_4CD770
// Target type:     <no type info>
// ============================================================

void .create_outctx(/* see target signature */)
{
    // Tail-call to create_outctx via GOT/IAT indirection
    return create_outctx(/* forwarded args */);
}

