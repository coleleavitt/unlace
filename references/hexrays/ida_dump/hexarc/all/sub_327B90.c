__int64 __fastcall sub_327B90(__int64 a1, int a2, int a3, __int64 a4)
{
  sub_1166E0(a1);
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) = a3;
  return copy_tinfo_t(a1 + 24, a4);
}
