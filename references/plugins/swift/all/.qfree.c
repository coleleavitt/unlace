// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x48C0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x48C0 jmp     cs:off_28448
//
// Resolved target: qfree
// Target address:  0x29E08
// GOT/IAT slot:    0x28448
// Slot symbol:     off_28448
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

