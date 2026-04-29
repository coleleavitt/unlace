__int64 __fastcall sub_3E5480(_DWORD *a1, unsigned int a2)
{
  int v2; // edx
  int v3; // eax
  unsigned int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  if ( a2 > 0x1F )
  {
    v5 = a2 - 32;
    if ( v5 > 0x1F )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      v6 = a1[121];
      v7 = a1[152];
      v8 = a1[20];
      if ( v6 >= v7 )
        return v7 + v8 * (31 - v5);
      else
        return v5 * v8 + v6;
    }
  }
  else
  {
    v2 = a1[120];
    v3 = a1[89];
    if ( v2 <= v3 )
      return v2 + a1[20] * (31 - a2);
    else
      return a1[20] * a2 + v3;
  }
}
