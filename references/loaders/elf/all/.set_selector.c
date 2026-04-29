// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9730
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9730 jmp     cs:off_89380
//
// Resolved target: set_selector
// Target address:  0x8C690
// GOT/IAT slot:    0x89380
// Slot symbol:     off_89380
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

