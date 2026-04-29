// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3520
// Name:            .qregfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3520 jmp     cs:off_20278
//
// Resolved target: qregfree
// Target address:  0x21BA8
// GOT/IAT slot:    0x20278
// Slot symbol:     off_20278
// Target type:     <no type info>
// ============================================================

void .qregfree(/* see target signature */)
{
    // Tail-call to qregfree via GOT/IAT indirection
    return qregfree(/* forwarded args */);
}

