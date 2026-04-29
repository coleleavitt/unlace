// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72F0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72F0 jmp     cs:off_19160
//
// Resolved target: getseg
// Target address:  0x19690
// GOT/IAT slot:    0x19160
// Slot symbol:     off_19160
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

