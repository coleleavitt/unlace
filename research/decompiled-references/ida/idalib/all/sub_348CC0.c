// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x348CC0
// Name:            sub_348CC0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x348CC0 jmp     sub_348620
//
// Resolved target: sub_348620
// Target address:  0x348620
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_348CC0(/* see target signature */)
{
    // Tail-call to sub_348620 via direct jump indirection
    return sub_348620(/* forwarded args */);
}

