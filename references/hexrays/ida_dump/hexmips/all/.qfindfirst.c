// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B430
// Name:            .qfindfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B430 jmp     cs:off_4CDA00
//
// Resolved target: qfindfirst
// Target address:  0x4D0420
// GOT/IAT slot:    0x4CDA00
// Slot symbol:     off_4CDA00
// Target type:     <no type info>
// ============================================================

void .qfindfirst(/* see target signature */)
{
    // Tail-call to qfindfirst via GOT/IAT indirection
    return qfindfirst(/* forwarded args */);
}

