__int64 __fastcall sub_77B3E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax

  if ( ((*(_BYTE *)(a1 + 96) >> 3) & 3) == 2 )
    return 2;
  if ( (*(_BYTE *)(a1 + 96) & 8) != 0 )
    return 1;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v3 = sub_79A2B0(a1);
    v4 = *(_QWORD *)v3;
    v5 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
    if ( v4 < v5 )
    {
      while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 429 )
      {
        v4 += 8LL;
        if ( v5 == v4 )
          goto LABEL_4;
      }
    }
    else
    {
      if ( v4 == v5 )
        goto LABEL_4;
      while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 429 )
      {
        v5 += 8LL;
        if ( v4 == v5 )
          goto LABEL_4;
      }
    }
    if ( v4 != v5 )
      goto LABEL_15;
  }
LABEL_4:
  v1 = sub_798D40(a1);
  if ( (*(_BYTE *)(*(_QWORD *)(v1 + 2160) + 68LL) & 4) == 0
    || !*(_BYTE *)(*(_QWORD *)(v1 + 17288) + 273LL)
    || (*(_BYTE *)(a1 + 29) & 1) == 0 )
  {
    return 0;
  }
  v6 = sub_79A2B0(a1);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  if ( v7 < v8 )
  {
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 289 )
    {
      v7 += 8LL;
      if ( v8 == v7 )
        return 0;
    }
LABEL_28:
    if ( v7 == v8 )
      return 0;
LABEL_15:
    if ( *(_DWORD *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 152LL) > 0xB532B7Fu )
      return 2;
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    {
      v9 = sub_79A2B0(a1);
      v10 = *(_QWORD *)v9;
      v11 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
      if ( v10 < v11 )
      {
        while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 289 )
        {
          v10 += 8LL;
          if ( v11 == v10 )
            return 1;
        }
      }
      else
      {
        if ( v10 == v11 )
          return 1;
        while ( *(_WORD *)(*(_QWORD *)v11 + 32LL) != 289 )
        {
          v11 += 8LL;
          if ( v10 == v11 )
            return 1;
        }
      }
      if ( v10 != v11 )
        return 2;
    }
    return 1;
  }
  if ( v7 != v8 )
  {
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 289 )
    {
      v8 += 8LL;
      if ( v7 == v8 )
        return 0;
    }
    goto LABEL_28;
  }
  return 0;
}

