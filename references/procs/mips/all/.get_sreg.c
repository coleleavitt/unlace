// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197B0
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x197B0 jmp     cs:off_753C0
//
// Resolved target: get_sreg
// Target address:  0x75C10
// GOT/IAT slot:    0x753C0
// Slot symbol:     off_753C0
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

