// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3610
// Name:            .qtmpfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3610 jmp     cs:off_202F0
//
// Resolved target: qtmpfile
// Target address:  0x21C28
// GOT/IAT slot:    0x202F0
// Slot symbol:     off_202F0
// Target type:     <no type info>
// ============================================================

void .qtmpfile(/* see target signature */)
{
    // Tail-call to qtmpfile via GOT/IAT indirection
    return qtmpfile(/* forwarded args */);
}

