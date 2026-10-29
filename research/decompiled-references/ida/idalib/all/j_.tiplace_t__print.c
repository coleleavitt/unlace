// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x561D60
// Name:            j_.tiplace_t__print
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x561D60 jmp     _tiplace_t__print
//
// Resolved target: .tiplace_t__print
// Target address:  0x2AB6F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__print(/* see target signature */)
{
    // Tail-call to .tiplace_t__print via direct jump indirection
    return .tiplace_t__print(/* forwarded args */);
}

