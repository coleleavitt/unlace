// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B430
// Name:            .qfindfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B430 jmp     cs:off_4BFA00
//
// Resolved target: qfindfirst
// Target address:  0x4C2EF8
// GOT/IAT slot:    0x4BFA00
// Slot symbol:     off_4BFA00
// Target type:     <no type info>
// ============================================================

void .qfindfirst(/* see target signature */)
{
    // Tail-call to qfindfirst via GOT/IAT indirection
    return qfindfirst(/* forwarded args */);
}

