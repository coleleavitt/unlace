__int64 __fastcall sub_676C20(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rax

  if ( (*(_BYTE *)(a1 + 32) & 2) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 24) - a2;
    if ( v6 < 0 )
      v6 = a2 - *(_QWORD *)(a1 + 24);
    if ( v6 > (__int64)&loc_800000 )
    {
      *(_QWORD *)(a1 + 24) = a2;
      callui(27, a2, (int)&callui, a4, a5, a6);
    }
  }
  return *(unsigned __int8 *)(a1 + 36);
}
