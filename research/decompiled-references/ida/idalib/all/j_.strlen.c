// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x995490
// Name:            j_.strlen
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x995490 jmp     _strlen
//
// Resolved target: .strlen
// Target address:  0x2A81A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ j_.strlen(/* see target signature */)
{
    // Tail-call to .strlen via direct jump indirection
    return .strlen(/* forwarded args */);
}

