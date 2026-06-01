__int64 __fastcall sub_513B90(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // edx

  v2 = *(_DWORD **)(a2 + 256);
  v3 = 6;
  if ( v2 )
  {
    v3 = 7;
    if ( v2[26] != -1 && v2[27] != -1 && v2[28] != -1 )
    {
      v3 = 3;
      if ( v2[29] == -1 )
        return 7;
    }
  }
  return v3;
}
