// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64A0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64A0 jmp     cs:off_24238
//
// Resolved target: set_name
// Target address:  0x26008
// GOT/IAT slot:    0x24238
// Slot symbol:     off_24238
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

