// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4310
// Name:            .fopenRB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4310 jmp     cs:off_4E170
//
// Resolved target: fopenRB
// Target address:  0x4F778
// GOT/IAT slot:    0x4E170
// Slot symbol:     off_4E170
// Target type:     <no type info>
// ============================================================

void .fopenRB(/* see target signature */)
{
    // Tail-call to fopenRB via GOT/IAT indirection
    return fopenRB(/* forwarded args */);
}

