// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55A820
// Name:            j_.tiplace_t__beginning
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x55A820 jmp     _tiplace_t__beginning
//
// Resolved target: .tiplace_t__beginning
// Target address:  0x2A7580
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__beginning(/* see target signature */)
{
    // Tail-call to .tiplace_t__beginning via direct jump indirection
    return .tiplace_t__beginning(/* forwarded args */);
}

