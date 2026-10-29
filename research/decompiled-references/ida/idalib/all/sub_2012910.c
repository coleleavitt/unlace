_BYTE *__fastcall sub_2012910(_BYTE *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rdx

  if ( *a1 == 40 )
  {
    v1 = -32 - 32LL * (unsigned int)sub_20906A0();
  }
  else
  {
    v1 = -32;
    if ( *a1 != 85 )
      v1 = -96;
  }
  if ( (char)a1[7] < 0 )
  {
    v2 = sub_20C9AA0(a1);
    v4 = v2 + v3;
    if ( (char)a1[7] >= 0 )
    {
      if ( !(unsigned int)(v4 >> 4) )
        return &a1[v1];
    }
    else
    {
      if ( !(unsigned int)((v4 - sub_20C9AA0(a1)) >> 4) )
        return &a1[v1];
      if ( (char)a1[7] < 0 )
      {
        v5 = *(_DWORD *)(sub_20C9AA0(a1) + 8);
        if ( (char)a1[7] >= 0 )
          BUG();
        v6 = sub_20C9AA0(a1);
        v1 -= 32LL * (unsigned int)(*(_DWORD *)(v6 + v7 - 4) - v5);
        return &a1[v1];
      }
    }
    BUG();
  }
  return &a1[v1];
}
