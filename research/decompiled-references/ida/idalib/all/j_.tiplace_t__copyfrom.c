// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55A590
// Name:            j_.tiplace_t__copyfrom
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x55A590 jmp     _tiplace_t__copyfrom
//
// Resolved target: .tiplace_t__copyfrom
// Target address:  0x2AB380
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__copyfrom(/* see target signature */)
{
    // Tail-call to .tiplace_t__copyfrom via direct jump indirection
    return .tiplace_t__copyfrom(/* forwarded args */);
}

