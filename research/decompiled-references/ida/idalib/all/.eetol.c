// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD650
// Name:            .eetol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD650 jmp     cs:off_2C7C310
//
// Resolved target: eetol
// Target address:  0x831800
// GOT/IAT slot:    0x2C7C310
// Slot symbol:     off_2C7C310
// Target type:     <no type info>
// ============================================================

void .eetol(/* see target signature */)
{
    // Tail-call to eetol via GOT/IAT indirection
    return eetol(/* forwarded args */);
}

