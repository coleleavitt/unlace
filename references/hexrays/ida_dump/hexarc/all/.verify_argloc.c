// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29CC0
// Name:            .verify_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29CC0 jmp     cs:off_4B9648
//
// Resolved target: verify_argloc
// Target address:  0x4BC040
// GOT/IAT slot:    0x4B9648
// Slot symbol:     off_4B9648
// Target type:     <no type info>
// ============================================================

void .verify_argloc(/* see target signature */)
{
    // Tail-call to verify_argloc via GOT/IAT indirection
    return verify_argloc(/* forwarded args */);
}

