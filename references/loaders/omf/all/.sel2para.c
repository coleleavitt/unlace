// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3250
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3250 jmp     cs:off_14110
//
// Resolved target: sel2para
// Target address:  0x146F8
// GOT/IAT slot:    0x14110
// Slot symbol:     off_14110
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

