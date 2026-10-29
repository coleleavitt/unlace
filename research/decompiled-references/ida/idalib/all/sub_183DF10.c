bool __fastcall sub_183DF10(__int64 a1, _BYTE *a2)
{
  return (*(_BYTE *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2) + 82) & 0x40) != 0
      && (a2[83] & 2) != 0
      && (a2[28] & 0x7Fu) - 35 <= 3;
}
