unsigned __int64 __fastcall sub_12FF0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int16 v5; // cx
  unsigned int v7; // eax

  v1 = *(_DWORD *)(a1 + 96);
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 88);
    v3 = (unsigned int)(v1 - 1);
    v4 = *(_QWORD *)(v2 + 8 * v3);
    v5 = *(_WORD *)(v4 + 16);
    if ( v5 == 98 )
    {
      *(_DWORD *)(a1 + 96) = v3;
      if ( v4 )
        return sub_12E00((_QWORD *)a1, v4, 143);
      if ( v1 == 1 )
        return 0;
      v7 = v1 - 2;
      v4 = *(_QWORD *)(v2 + 8LL * v7);
      LODWORD(v3) = v7;
      v5 = *(_WORD *)(v4 + 16);
    }
    if ( v5 == 143 )
    {
      *(_DWORD *)(a1 + 96) = v3;
      return v4;
    }
  }
  return 0;
}
