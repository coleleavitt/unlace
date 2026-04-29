// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9400
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9400 jmp     cs:off_891E8
//
// Resolved target: qlseek
// Target address:  0x8C4E8
// GOT/IAT slot:    0x891E8
// Slot symbol:     off_891E8
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

