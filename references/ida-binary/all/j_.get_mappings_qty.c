// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34A890
// Name:            j_.get_mappings_qty
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x34A890 jmp     _get_mappings_qty
//
// Resolved target: .get_mappings_qty
// Target address:  0x11B6F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.get_mappings_qty(/* see target signature */)
{
    // Tail-call to .get_mappings_qty via direct jump indirection
    return .get_mappings_qty(/* forwarded args */);
}

