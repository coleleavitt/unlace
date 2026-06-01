// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116750
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116750 jmp     cs:qlread_ptr
//
// Resolved target: qlread
// Target address:  0x8D6860
// GOT/IAT slot:    0x8A2048
// Slot symbol:     qlread_ptr
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

