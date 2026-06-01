// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115190
// Name:            .switch_dbctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115190 jmp     cs:switch_dbctx_ptr
//
// Resolved target: switch_dbctx
// Target address:  0x8D5AB8
// GOT/IAT slot:    0x8A1568
// Slot symbol:     switch_dbctx_ptr
// Target type:     <no type info>
// ============================================================

void .switch_dbctx(/* see target signature */)
{
    // Tail-call to switch_dbctx via GOT/IAT indirection
    return switch_dbctx(/* forwarded args */);
}

