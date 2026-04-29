// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD60
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD60 jmp     cs:off_4ED698
//
// Resolved target: copy_argloc
// Target address:  0x4F19A8
// GOT/IAT slot:    0x4ED698
// Slot symbol:     off_4ED698
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

