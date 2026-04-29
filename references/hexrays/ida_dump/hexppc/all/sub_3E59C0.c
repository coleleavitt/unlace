__int64 __fastcall sub_3E59C0(_DWORD *a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  unsigned int v6; // eax
  int v7; // edx
  int v8; // ecx

  if ( a2 > 0x1F )
  {
    v6 = a2 - 35;
    if ( a2 - 35 > 0x1F )
    {
      if ( a2 == 280 )
      {
        return (unsigned int)a1[113];
      }
      else if ( a2 == 83 )
      {
        return (unsigned int)a1[117];
      }
      else if ( a2 - 282 > 0x1F )
      {
        return 0xFFFFFFFFLL;
      }
      else
      {
        return a2 + a1[118] - 282;
      }
    }
    else
    {
      v7 = a1[112];
      v8 = a1[104];
      if ( v7 <= v8 )
        return v7 + 8 * (31 - v6);
      else
        return v8 + 8 * v6;
    }
  }
  else
  {
    v2 = a1[103];
    v3 = a1[88];
    v4 = a1[1102];
    if ( v2 <= v3 )
      return v2 + v4 * (31 - a2);
    else
      return a2 * v4 + v3;
  }
}
