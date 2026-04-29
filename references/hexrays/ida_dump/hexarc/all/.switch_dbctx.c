// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29FB0
// Name:            .switch_dbctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29FB0 jmp     cs:off_4B97C0
//
// Resolved target: switch_dbctx
// Target address:  0x4BC1B8
// GOT/IAT slot:    0x4B97C0
// Slot symbol:     off_4B97C0
// Target type:     <no type info>
// ============================================================

void .switch_dbctx(/* see target signature */)
{
    // Tail-call to switch_dbctx via GOT/IAT indirection
    return switch_dbctx(/* forwarded args */);
}

