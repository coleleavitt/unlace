// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118360
// Name:            .verify_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118360 jmp     cs:verify_argloc_ptr
//
// Resolved target: verify_argloc
// Target address:  0x8D7A20
// GOT/IAT slot:    0x8A2E50
// Slot symbol:     verify_argloc_ptr
// Target type:     <no type info>
// ============================================================

void .verify_argloc(/* see target signature */)
{
    // Tail-call to verify_argloc via GOT/IAT indirection
    return verify_argloc(/* forwarded args */);
}

