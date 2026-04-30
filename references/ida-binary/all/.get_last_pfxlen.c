// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ACE0
// Name:            .get_last_pfxlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ACE0 jmp     cs:get_last_pfxlen_ptr
//
// Resolved target: get_last_pfxlen
// Target address:  0x8D9450
// GOT/IAT slot:    0x8A4310
// Slot symbol:     get_last_pfxlen_ptr
// Target type:     <no type info>
// ============================================================

void .get_last_pfxlen(/* see target signature */)
{
    // Tail-call to get_last_pfxlen via GOT/IAT indirection
    return get_last_pfxlen(/* forwarded args */);
}

