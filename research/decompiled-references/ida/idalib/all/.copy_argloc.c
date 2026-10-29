// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE50
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE50 jmp     cs:off_2C7AF10
//
// Resolved target: copy_argloc
// Target address:  0x6B2340
// GOT/IAT slot:    0x2C7AF10
// Slot symbol:     off_2C7AF10
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

