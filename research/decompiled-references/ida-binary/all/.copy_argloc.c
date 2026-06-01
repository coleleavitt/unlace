// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117450
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117450 jmp     cs:copy_argloc_ptr
//
// Resolved target: copy_argloc
// Target address:  0x8D70B8
// GOT/IAT slot:    0x8A26C8
// Slot symbol:     copy_argloc_ptr
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

