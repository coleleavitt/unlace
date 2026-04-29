// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF10
// Name:            .create_outctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF10 jmp     cs:off_4DA770
//
// Resolved target: create_outctx
// Target address:  0x4DD168
// GOT/IAT slot:    0x4DA770
// Slot symbol:     off_4DA770
// Target type:     <no type info>
// ============================================================

void .create_outctx(/* see target signature */)
{
    // Tail-call to create_outctx via GOT/IAT indirection
    return create_outctx(/* forwarded args */);
}

