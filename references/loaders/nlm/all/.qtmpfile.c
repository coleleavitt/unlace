// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2340
// Name:            .qtmpfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2340 jmp     cs:off_8188
//
// Resolved target: qtmpfile
// Target address:  0x8878
// GOT/IAT slot:    0x8188
// Slot symbol:     off_8188
// Target type:     <no type info>
// ============================================================

void .qtmpfile(/* see target signature */)
{
    // Tail-call to qtmpfile via GOT/IAT indirection
    return qtmpfile(/* forwarded args */);
}

