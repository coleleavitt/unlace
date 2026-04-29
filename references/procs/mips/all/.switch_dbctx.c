// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19640
// Name:            .switch_dbctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19640 jmp     cs:off_75308
//
// Resolved target: switch_dbctx
// Target address:  0x75B58
// GOT/IAT slot:    0x75308
// Slot symbol:     off_75308
// Target type:     <no type info>
// ============================================================

void .switch_dbctx(/* see target signature */)
{
    // Tail-call to switch_dbctx via GOT/IAT indirection
    return switch_dbctx(/* forwarded args */);
}

