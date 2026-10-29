// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111520
// Name:            .uname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111520 jmp     cs:uname_ptr
//
// Resolved target: uname
// Target address:  0x8D33C8
// GOT/IAT slot:    0x89F730
// Slot symbol:     uname_ptr
// Target type:     int(struct utsname *name)
// ============================================================

/* see target sig */ .uname(/* see target signature */)
{
    // Tail-call to uname via GOT/IAT indirection
    return uname(/* forwarded args */);
}

