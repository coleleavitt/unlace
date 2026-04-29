// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29D10
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29D10 jmp     cs:off_4B9670
//
// Resolved target: copy_argloc
// Target address:  0x4BC068
// GOT/IAT slot:    0x4B9670
// Slot symbol:     off_4B9670
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

