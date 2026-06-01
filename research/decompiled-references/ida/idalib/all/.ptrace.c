// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7970
// Name:            .ptrace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7970 jmp     cs:off_2C794A0
//
// Resolved target: ptrace
// Target address:  0x2D11440
// GOT/IAT slot:    0x2C794A0
// Slot symbol:     off_2C794A0
// Target type:     __int64(enum __ptrace_request request, ...)
// ============================================================

/* see target sig */ .ptrace(/* see target signature */)
{
    // Tail-call to ptrace via GOT/IAT indirection
    return ptrace(/* forwarded args */);
}

