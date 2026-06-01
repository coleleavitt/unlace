// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x560920
// Name:            j_.tiplace_t__prev
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x560920 jmp     _tiplace_t__prev
//
// Resolved target: .tiplace_t__prev
// Target address:  0x2A84C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__prev(/* see target signature */)
{
    // Tail-call to .tiplace_t__prev via direct jump indirection
    return .tiplace_t__prev(/* forwarded args */);
}

