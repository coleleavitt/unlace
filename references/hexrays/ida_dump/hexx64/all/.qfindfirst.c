// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C500
// Name:            .qfindfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C500 jmp     cs:off_4EDA68
//
// Resolved target: qfindfirst
// Target address:  0x4F1D88
// GOT/IAT slot:    0x4EDA68
// Slot symbol:     off_4EDA68
// Target type:     <no type info>
// ============================================================

void .qfindfirst(/* see target signature */)
{
    // Tail-call to qfindfirst via GOT/IAT indirection
    return qfindfirst(/* forwarded args */);
}

