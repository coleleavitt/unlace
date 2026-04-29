// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA430
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA430 jmp     cs:off_35200
//
// Resolved target: getseg
// Target address:  0x35850
// GOT/IAT slot:    0x35200
// Slot symbol:     off_35200
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

