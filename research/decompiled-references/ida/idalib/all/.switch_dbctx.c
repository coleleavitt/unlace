// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9AC0
// Name:            .switch_dbctx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9AC0 jmp     cs:off_2C7A548
//
// Resolved target: switch_dbctx
// Target address:  0x3FA700
// GOT/IAT slot:    0x2C7A548
// Slot symbol:     off_2C7A548
// Target type:     <no type info>
// ============================================================

void .switch_dbctx(/* see target signature */)
{
    // Tail-call to switch_dbctx via GOT/IAT indirection
    return switch_dbctx(/* forwarded args */);
}

