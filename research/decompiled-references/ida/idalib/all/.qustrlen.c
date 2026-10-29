// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE80
// Name:            .qustrlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE80 jmp     cs:off_2C7AF28
//
// Resolved target: qustrlen
// Target address:  0x82CF50
// GOT/IAT slot:    0x2C7AF28
// Slot symbol:     off_2C7AF28
// Target type:     <no type info>
// ============================================================

void .qustrlen(/* see target signature */)
{
    // Tail-call to qustrlen via GOT/IAT indirection
    return qustrlen(/* forwarded args */);
}

