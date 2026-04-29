// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C030
// Name:            .switch_dbctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C030 jmp     cs:off_4ED800
//
// Resolved target: switch_dbctx
// Target address:  0x4F1B10
// GOT/IAT slot:    0x4ED800
// Slot symbol:     off_4ED800
// Target type:     <no type info>
// ============================================================

void .switch_dbctx(/* see target signature */)
{
    // Tail-call to switch_dbctx via GOT/IAT indirection
    return switch_dbctx(/* forwarded args */);
}

