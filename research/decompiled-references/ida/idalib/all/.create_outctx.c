// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA4C0
// Name:            .create_outctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA4C0 jmp     cs:off_2C7AA48
//
// Resolved target: create_outctx
// Target address:  0x573310
// GOT/IAT slot:    0x2C7AA48
// Slot symbol:     off_2C7AA48
// Target type:     <no type info>
// ============================================================

void .create_outctx(/* see target signature */)
{
    // Tail-call to create_outctx via GOT/IAT indirection
    return create_outctx(/* forwarded args */);
}

