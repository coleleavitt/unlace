// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA760
// Name:            .qfindfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA760 jmp     cs:off_2C7AB98
//
// Resolved target: qfindfirst
// Target address:  0x83D650
// GOT/IAT slot:    0x2C7AB98
// Slot symbol:     off_2C7AB98
// Target type:     <no type info>
// ============================================================

void .qfindfirst(/* see target signature */)
{
    // Tail-call to qfindfirst via GOT/IAT indirection
    return qfindfirst(/* forwarded args */);
}

