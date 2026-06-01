bool __fastcall sub_781EA0(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx

  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
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
      if ( *(_DWORD *)(v5 + 36) )
        return 0;
    }
LABEL_11:
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    {
      v7 = sub_79A2B0(a1);
      v8 = *(_QWORD *)v7;
      v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
      if ( v8 < v9 )
      {
        while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 210 )
        {
          v8 += 8LL;
          if ( v9 == v8 )
            return 0;
        }
      }
      else
      {
        if ( v8 == v9 )
          return 0;
        while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 210 )
        {
          v9 += 8LL;
          if ( v8 == v9 )
            return 0;
        }
      }
      return v8 != v9;
    }
    return 0;
  }
  return 0;
}

