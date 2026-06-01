// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116820
// Name:            .qfindfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116820 jmp     cs:qfindfirst_ptr
//
// Resolved target: qfindfirst
// Target address:  0x8D6908
// GOT/IAT slot:    0x8A20B0
// Slot symbol:     qfindfirst_ptr
// Target type:     <no type info>
// ============================================================

void .qfindfirst(/* see target signature */)
{
    // Tail-call to qfindfirst via GOT/IAT indirection
    return qfindfirst(/* forwarded args */);
}

