// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140B0
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140B0 jmp     cs:get_sreg_ptr
//
// Resolved target: get_sreg
// Target address:  0x8D4FD8
// GOT/IAT slot:    0x8A0CF8
// Slot symbol:     get_sreg_ptr
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

