// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BD90
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BD90 jmp     cs:qlseek_ptr
//
// Resolved target: qlseek
// Target address:  0x8D9EA8
// GOT/IAT slot:    0x8A4B68
// Slot symbol:     qlseek_ptr
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

