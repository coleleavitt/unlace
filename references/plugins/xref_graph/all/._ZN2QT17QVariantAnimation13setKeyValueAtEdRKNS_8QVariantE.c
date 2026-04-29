// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16B20
// Name:            ._ZN2QT17QVariantAnimation13setKeyValueAtEdRKNS_8QVariantE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16B20 jmp     cs:off_4F578
//
// Resolved target: _ZN2QT17QVariantAnimation13setKeyValueAtEdRKNS_8QVariantE
// Target address:  0x507C0
// GOT/IAT slot:    0x4F578
// Slot symbol:     off_4F578
// Target type:     _QWORD(QT::QVariantAnimation *__hidden this, double, const QT::QVariant *)
// ============================================================

/* see target sig */ ._ZN2QT17QVariantAnimation13setKeyValueAtEdRKNS_8QVariantE(/* see target signature */)
{
    // Tail-call to _ZN2QT17QVariantAnimation13setKeyValueAtEdRKNS_8QVariantE via GOT/IAT indirection
    return _ZN2QT17QVariantAnimation13setKeyValueAtEdRKNS_8QVariantE(/* forwarded args */);
}

