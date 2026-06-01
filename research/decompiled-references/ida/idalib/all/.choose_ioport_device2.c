// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7430
// Name:            .choose_ioport_device2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7430 jmp     cs:off_2C79200
//
// Resolved target: choose_ioport_device2
// Target address:  0x84C560
// GOT/IAT slot:    0x2C79200
// Slot symbol:     off_2C79200
// Target type:     <no type info>
// ============================================================

void .choose_ioport_device2(/* see target signature */)
{
    // Tail-call to choose_ioport_device2 via GOT/IAT indirection
    return choose_ioport_device2(/* forwarded args */);
}

