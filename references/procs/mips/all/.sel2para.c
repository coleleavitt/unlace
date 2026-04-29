// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19400
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19400 jmp     cs:off_751E8
//
// Resolved target: sel2para
// Target address:  0x75A38
// GOT/IAT slot:    0x751E8
// Slot symbol:     off_751E8
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

