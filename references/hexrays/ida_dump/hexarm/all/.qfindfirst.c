// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E470
// Name:            .qfindfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E470 jmp     cs:off_4E9A20
//
// Resolved target: qfindfirst
// Target address:  0x4EC440
// GOT/IAT slot:    0x4E9A20
// Slot symbol:     off_4E9A20
// Target type:     <no type info>
// ============================================================

void .qfindfirst(/* see target signature */)
{
    // Tail-call to qfindfirst via GOT/IAT indirection
    return qfindfirst(/* forwarded args */);
}

