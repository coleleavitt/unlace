// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2150
// Name:            .fopenRB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2150 jmp     cs:off_A090
//
// Resolved target: fopenRB
// Target address:  0xA2C0
// GOT/IAT slot:    0xA090
// Slot symbol:     off_A090
// Target type:     <no type info>
// ============================================================

void .fopenRB(/* see target signature */)
{
    // Tail-call to fopenRB via GOT/IAT indirection
    return fopenRB(/* forwarded args */);
}

