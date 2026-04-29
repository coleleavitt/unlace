// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A50
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A50 jmp     cs:off_75510
//
// Resolved target: set_immd
// Target address:  0x75D70
// GOT/IAT slot:    0x75510
// Slot symbol:     off_75510
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

