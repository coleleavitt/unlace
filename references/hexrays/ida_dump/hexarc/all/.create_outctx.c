// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29F10
// Name:            .create_outctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29F10 jmp     cs:off_4B9770
//
// Resolved target: create_outctx
// Target address:  0x4BC168
// GOT/IAT slot:    0x4B9770
// Slot symbol:     off_4B9770
// Target type:     <no type info>
// ============================================================

void .create_outctx(/* see target signature */)
{
    // Tail-call to create_outctx via GOT/IAT indirection
    return create_outctx(/* forwarded args */);
}

