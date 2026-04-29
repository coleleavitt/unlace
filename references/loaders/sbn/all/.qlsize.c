// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_4088
//
// Resolved target: qlsize
// Target address:  0x4168
// GOT/IAT slot:    0x4088
// Slot symbol:     off_4088
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

