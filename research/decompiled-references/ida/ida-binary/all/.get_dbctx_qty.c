// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115DB0
// Name:            .get_dbctx_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115DB0 jmp     cs:get_dbctx_qty_ptr
//
// Resolved target: get_dbctx_qty
// Target address:  0x8D6248
// GOT/IAT slot:    0x8A1B78
// Slot symbol:     get_dbctx_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_dbctx_qty(/* see target signature */)
{
    // Tail-call to get_dbctx_qty via GOT/IAT indirection
    return get_dbctx_qty(/* forwarded args */);
}

