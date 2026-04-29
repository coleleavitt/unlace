_BOOL8 __fastcall sub_EE80(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  int v5; // eax
  int v6; // edx
  int v7; // edx

  v3 = *(_BYTE *)(a3 + 1);
  if ( v3 == 4 )
  {
    v5 = *(unsigned __int16 *)(a3 + 6);
    if ( (_WORD)v5 == 1 )
      return 1;
  }
  else
  {
    if ( v3 != 1 )
      return 1;
    v5 = *(unsigned __int16 *)(a3 + 6);
    if ( (_WORD)v5 == 1 )
      return 1;
  }
  v6 = *(_DWORD *)(a1 + 592);
  if ( v6 == 1 )
  {
    v7 = 7;
    return v5 != v7;
  }
  if ( v6 != 2 )
    return 1;
  v7 = 15;
  return v5 != v7;
}
