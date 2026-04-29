// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2150
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2150 jmp     cs:off_8090
//
// Resolved target: qlseek
// Target address:  0x8250
// GOT/IAT slot:    0x8090
// Slot symbol:     off_8090
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

