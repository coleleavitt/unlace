bool __fastcall sub_1035910(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = sub_10AFEA0(a1, *a2, a2[1]);
  *(_DWORD *)(a1 + 512) = v2;
  return v2 != -1;
}
