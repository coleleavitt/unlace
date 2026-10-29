// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5FB580
// Name:            j_.vcred_write
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x5FB580 jmp     _vcred_write
//
// Resolved target: .vcred_write
// Target address:  0x2A7FD0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.vcred_write(/* see target signature */)
{
    // Tail-call to .vcred_write via direct jump indirection
    return .vcred_write(/* forwarded args */);
}

