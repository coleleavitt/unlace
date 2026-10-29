// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113BC0
// Name:            .cpu2ieee
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113BC0 jmp     cs:cpu2ieee_ptr
//
// Resolved target: cpu2ieee
// Target address:  0x8D4CB0
// GOT/IAT slot:    0x8A0A80
// Slot symbol:     cpu2ieee_ptr
// Target type:     <no type info>
// ============================================================

void .cpu2ieee(/* see target signature */)
{
    // Tail-call to cpu2ieee via GOT/IAT indirection
    return cpu2ieee(/* forwarded args */);
}

