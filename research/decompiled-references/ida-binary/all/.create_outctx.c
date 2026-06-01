// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116340
// Name:            .create_outctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116340 jmp     cs:create_outctx_ptr
//
// Resolved target: create_outctx
// Target address:  0x8D65D0
// GOT/IAT slot:    0x8A1E40
// Slot symbol:     create_outctx_ptr
// Target type:     <no type info>
// ============================================================

void .create_outctx(/* see target signature */)
{
    // Tail-call to create_outctx via GOT/IAT indirection
    return create_outctx(/* forwarded args */);
}

