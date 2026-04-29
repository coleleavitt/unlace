// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DFE0
// Name:            .switch_dbctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DFE0 jmp     cs:off_4E97D8
//
// Resolved target: switch_dbctx
// Target address:  0x4EC1F0
// GOT/IAT slot:    0x4E97D8
// Slot symbol:     off_4E97D8
// Target type:     <no type info>
// ============================================================

void .switch_dbctx(/* see target signature */)
{
    // Tail-call to switch_dbctx via GOT/IAT indirection
    return switch_dbctx(/* forwarded args */);
}

