// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x280920
// Name:            j_.get_entry_qty
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x280920 jmp     _get_entry_qty
//
// Resolved target: .get_entry_qty
// Target address:  0x119510
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64(void)
// ============================================================

/* see target sig */ j_.get_entry_qty(/* see target signature */)
{
    // Tail-call to .get_entry_qty via direct jump indirection
    return .get_entry_qty(/* forwarded args */);
}

