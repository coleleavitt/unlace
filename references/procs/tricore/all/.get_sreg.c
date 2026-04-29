// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64E0
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64E0 jmp     cs:off_24258
//
// Resolved target: get_sreg
// Target address:  0x26028
// GOT/IAT slot:    0x24258
// Slot symbol:     off_24258
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

