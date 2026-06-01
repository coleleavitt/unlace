// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC6D0
// Name:            .btoa64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC6D0 jmp     cs:off_2C7BB50
//
// Resolved target: btoa64
// Target address:  0x5891E0
// GOT/IAT slot:    0x2C7BB50
// Slot symbol:     off_2C7BB50
// Target type:     <no type info>
// ============================================================

void .btoa64(/* see target signature */)
{
    // Tail-call to btoa64 via GOT/IAT indirection
    return btoa64(/* forwarded args */);
}

