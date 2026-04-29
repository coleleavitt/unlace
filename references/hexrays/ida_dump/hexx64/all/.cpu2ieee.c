// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C000
// Name:            .cpu2ieee
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C000 jmp     cs:off_4ED7E8
//
// Resolved target: cpu2ieee
// Target address:  0x4F1AF8
// GOT/IAT slot:    0x4ED7E8
// Slot symbol:     off_4ED7E8
// Target type:     <no type info>
// ============================================================

void .cpu2ieee(/* see target signature */)
{
    // Tail-call to cpu2ieee via GOT/IAT indirection
    return cpu2ieee(/* forwarded args */);
}

