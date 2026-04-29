// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42A0
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42A0 jmp     cs:off_23138
//
// Resolved target: sel2para
// Target address:  0x23558
// GOT/IAT slot:    0x23138
// Slot symbol:     off_23138
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

