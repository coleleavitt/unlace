__int16 __fastcall sub_1FC8C30(_DWORD *a1, __int64 a2)
{
  int v2; // eax

  LOWORD(v2) = sub_1FC8A00((__int64)a1, a2);
  if ( (*(_DWORD *)a2 & 0x200000) == 0 && (*(_BYTE *)(a2 + 2) & 0x10) == 0 )
  {
    v2 = *(_DWORD *)(*(_QWORD *)a1 + 3580LL);
    a1[57] = v2;
  }
  a1[56] = 243;
  return v2;
}
