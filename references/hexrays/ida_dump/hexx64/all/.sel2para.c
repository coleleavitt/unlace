// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA70
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA70 jmp     cs:off_4ED520
//
// Resolved target: sel2para
// Target address:  0x4F1820
// GOT/IAT slot:    0x4ED520
// Slot symbol:     off_4ED520
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

