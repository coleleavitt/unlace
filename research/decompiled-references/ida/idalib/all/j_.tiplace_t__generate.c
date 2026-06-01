// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x560C30
// Name:            j_.tiplace_t__generate
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x560C30 jmp     _tiplace_t__generate
//
// Resolved target: .tiplace_t__generate
// Target address:  0x2A9FF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__generate(/* see target signature */)
{
    // Tail-call to .tiplace_t__generate via direct jump indirection
    return .tiplace_t__generate(/* forwarded args */);
}

