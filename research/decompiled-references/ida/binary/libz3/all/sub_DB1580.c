__int64 __fastcall sub_DB1580(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  int v5; // eax
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // rdx

  if ( !*(_WORD *)(a2 + 4) )
  {
    v2 = 0;
    if ( (*(_BYTE *)(a2 + 30) & 1) != 0 )
      return v2;
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 36LL) )
  {
    if ( v3 )
      goto LABEL_8;
LABEL_34:
    v2 = 1;
    v5 = -1;
    if ( *(_DWORD *)(a1 + 16) == -1 )
      return v2;
    goto LABEL_9;
  }
  if ( !v3 )
    goto LABEL_34;
  v2 = *(_BYTE *)(v3 + 18) & 1;
  if ( (*(_BYTE *)(v3 + 18) & 1) != 0 )
    return v2;
LABEL_8:
  v5 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == *(_DWORD *)(a1 + 16) && *(_DWORD *)(v3 + 4) > 1u )
    return 1;
LABEL_9:
  v6 = *(_DWORD **)(a1 + 24);
  if ( !v6 )
    return 0;
  v7 = 4LL * (unsigned int)*(v6 - 1);
  v8 = &v6[(unsigned __int64)v7 / 4];
  v9 = v7 >> 2;
  v10 = v7 >> 4;
  if ( v10 )
  {
    v11 = &v6[4 * v10];
    while ( v5 != *v6 )
    {
      if ( v5 == v6[1] )
      {
        ++v6;
        LOBYTE(v6) = v8 != v6;
        return (unsigned int)v6;
      }
      if ( v5 == v6[2] )
      {
        v12 = v6 + 2;
        LOBYTE(v12) = v8 != v12;
        return (unsigned int)v12;
      }
      if ( v5 == v6[3] )
      {
        v13 = v6 + 3;
        LOBYTE(v13) = v8 != v13;
        return (unsigned int)v13;
      }
      v6 += 4;
      if ( v6 == v11 )
      {
        v9 = v8 - v6;
        goto LABEL_25;
      }
    }
    goto LABEL_17;
  }
LABEL_25:
  if ( v9 == 2 )
    goto LABEL_29;
  if ( v9 != 3 )
  {
    if ( v9 == 1 )
      goto LABEL_31;
    return 0;
  }
  if ( v5 == *v6 )
    goto LABEL_17;
  ++v6;
LABEL_29:
  if ( v5 != *v6 )
  {
    ++v6;
LABEL_31:
    LOBYTE(v5) = *v6 == v5;
    LOBYTE(v6) = v8 != v6;
    return v5 & (unsigned int)v6;
  }
LABEL_17:
  LOBYTE(v6) = v8 != v6;
  return (unsigned int)v6;
}

