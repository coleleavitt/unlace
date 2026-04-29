// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AFC0
// Name:            .switch_dbctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AFC0 jmp     cs:off_4DA7C8
//
// Resolved target: switch_dbctx
// Target address:  0x4DD1C0
// GOT/IAT slot:    0x4DA7C8
// Slot symbol:     off_4DA7C8
// Target type:     <no type info>
// ============================================================

void .switch_dbctx(/* see target signature */)
{
    // Tail-call to switch_dbctx via GOT/IAT indirection
    return switch_dbctx(/* forwarded args */);
}

