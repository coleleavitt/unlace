// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA150
// Name:            .get_dbctx_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA150 jmp     cs:off_2C7A890
//
// Resolved target: get_dbctx_qty
// Target address:  0x3FA7D0
// GOT/IAT slot:    0x2C7A890
// Slot symbol:     off_2C7A890
// Target type:     <no type info>
// ============================================================

void .get_dbctx_qty(/* see target signature */)
{
    // Tail-call to get_dbctx_qty via GOT/IAT indirection
    return get_dbctx_qty(/* forwarded args */);
}

