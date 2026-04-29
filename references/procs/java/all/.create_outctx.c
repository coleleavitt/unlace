// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63C0
// Name:            .create_outctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63C0 jmp     cs:off_2D1C8
//
// Resolved target: create_outctx
// Target address:  0x2D6C8
// GOT/IAT slot:    0x2D1C8
// Slot symbol:     off_2D1C8
// Target type:     <no type info>
// ============================================================

void .create_outctx(/* see target signature */)
{
    // Tail-call to create_outctx via GOT/IAT indirection
    return create_outctx(/* forwarded args */);
}

