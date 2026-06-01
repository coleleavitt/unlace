// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x289F00
// Name:            j_.get_func_qty
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x289F00 jmp     _get_func_qty
//
// Resolved target: .get_func_qty
// Target address:  0x111400
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.get_func_qty(/* see target signature */)
{
    // Tail-call to .get_func_qty via direct jump indirection
    return .get_func_qty(/* forwarded args */);
}

