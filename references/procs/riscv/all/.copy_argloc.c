// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3F0
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3F0 jmp     cs:off_351E0
//
// Resolved target: copy_argloc
// Target address:  0x35830
// GOT/IAT slot:    0x351E0
// Slot symbol:     off_351E0
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

