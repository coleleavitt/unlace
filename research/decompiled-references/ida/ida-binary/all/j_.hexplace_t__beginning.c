// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8080
// Name:            j_.hexplace_t__beginning
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C8080 jmp     _hexplace_t__beginning
//
// Resolved target: .hexplace_t__beginning
// Target address:  0x116920
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__beginning(/* see target signature */)
{
    // Tail-call to .hexplace_t__beginning via direct jump indirection
    return .hexplace_t__beginning(/* forwarded args */);
}

