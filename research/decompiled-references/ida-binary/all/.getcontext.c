// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BBF0
// Name:            .getcontext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BBF0 jmp     cs:getcontext_ptr
//
// Resolved target: getcontext
// Target address:  0x8D9DA8
// GOT/IAT slot:    0x8A4A98
// Slot symbol:     getcontext_ptr
// Target type:     int(ucontext_t *ucp)
// ============================================================

/* see target sig */ .getcontext(/* see target signature */)
{
    // Tail-call to getcontext via GOT/IAT indirection
    return getcontext(/* forwarded args */);
}

