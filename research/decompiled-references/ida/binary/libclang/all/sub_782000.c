__int64 __fastcall sub_782000(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 1;
  v1 = sub_79A2B0(a1);
  v2 = *(_QWORD **)v1;
  v3 = *(_QWORD *)v1 + 8LL * *(unsigned int *)(v1 + 8);
  if ( (unsigned __int64)v2 >= v3 )
  {
    if ( v2 == (_QWORD *)v3 )
      goto LABEL_11;
    while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 203 )
    {
      v3 += 8LL;
      if ( v2 == (_QWORD *)v3 )
        goto LABEL_11;
    }
    v4 = v2;
  }
  else
  {
    v4 = v2;
    while ( *(_WORD *)(*v4 + 32LL) != 203 )
    {
      if ( (_QWORD *)v3 == ++v4 )
        goto LABEL_11;
    }
  }
  if ( v4 != (_QWORD *)v3 )
  {
    v5 = *v2;
    if ( *(_WORD *)(*v2 + 32LL) != 203 )
    {
      v6 = v2 + 1;
      do
        v5 = *v6++;
      while ( *(_WORD *)(v5 + 32) != 203 );
    }
    v7 = 0;
    if ( *(_DWORD *)(v5 + 36) )
      return v7;
  }
LABEL_11:
  v7 = *(_BYTE *)(a1 + 29) & 1;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v8 = sub_79A2B0(a1);
    v9 = *(_QWORD *)v8;
    v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
    if ( v9 < v10 )
    {
      while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 210 )
      {
        v9 += 8LL;
        if ( v10 == v9 )
          return v7;
      }
    }
    else
    {
      if ( v9 == v10 )
        return v7;
      while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 210 )
      {
        v10 += 8LL;
        if ( v9 == v10 )
          return v7;
      }
    }
    LOBYTE(v7) = v10 == v9;
    return v7;
  }
  return 1;
}

