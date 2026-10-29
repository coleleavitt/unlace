// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB2E0
// Name:            .btoa32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB2E0 jmp     cs:off_2C7B158
//
// Resolved target: btoa32
// Target address:  0x588F30
// GOT/IAT slot:    0x2C7B158
// Slot symbol:     off_2C7B158
// Target type:     <no type info>
// ============================================================

void .btoa32(/* see target signature */)
{
    // Tail-call to btoa32 via GOT/IAT indirection
    return btoa32(/* forwarded args */);
}

