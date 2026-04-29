bool __fastcall sub_3A3730(__int64 a1, _BYTE *a2)
{
  copy_tinfo_t(a2, *(_QWORD *)(a1 + 32) + 80LL);
  return *a2 != 0;
}
