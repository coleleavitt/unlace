// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20920
// Name:            .set_auto_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20920 jmp     cs:off_95478
//
// Resolved target: set_auto_spd
// Target address:  0x95EB0
// GOT/IAT slot:    0x95478
// Slot symbol:     off_95478
// Target type:     <no type info>
// ============================================================

void .set_auto_spd(/* see target signature */)
{
    // Tail-call to set_auto_spd via GOT/IAT indirection
    return set_auto_spd(/* forwarded args */);
}

