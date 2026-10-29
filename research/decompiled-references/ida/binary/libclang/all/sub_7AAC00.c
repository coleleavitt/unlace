__int64 __fastcall sub_7AAC00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    v1 = *(_QWORD *)(a1 + 128);
    if ( !v1 )
      return 0;
  }
  v2 = *(_QWORD *)(v1 + 88);
  if ( !v2 )
    return 0;
  v3 = *(_BYTE *)(v2 + 29) & 1;
  if ( (*(_BYTE *)(v2 + 29) & 1) == 0 )
  {
LABEL_4:
    v4 = sub_7A4880(v2);
    if ( v4 && (*(_BYTE *)(v4 + 29) & 1) != 0 )
    {
      v5 = sub_79A2B0(v4);
      v6 = *v5;
      v7 = *v5 + 8LL * *((unsigned int *)v5 + 2);
      if ( v6 < v7 )
      {
        while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 209 )
        {
          v6 += 8LL;
          if ( v7 == v6 )
            return 0;
        }
        LOBYTE(v3) = v7 != v6;
        return v3;
      }
      if ( v6 != v7 )
      {
        while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 209 )
        {
          v7 += 8LL;
          if ( v6 == v7 )
            return 0;
        }
        LOBYTE(v3) = v6 != v7;
        return v3;
      }
    }
    return 0;
  }
  v9 = sub_79A2B0(*(_QWORD *)(v1 + 88));
  v10 = *v9;
  v11 = *v9 + 8LL * *((unsigned int *)v9 + 2);
  if ( v10 < v11 )
  {
    while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 209 )
    {
      v10 += 8LL;
      if ( v11 == v10 )
        goto LABEL_4;
    }
  }
  else
  {
    if ( v10 == v11 )
      goto LABEL_4;
    while ( *(_WORD *)(*(_QWORD *)v11 + 32LL) != 209 )
    {
      v11 += 8LL;
      if ( v10 == v11 )
        goto LABEL_4;
    }
  }
  if ( v10 == v11 )
    goto LABEL_4;
  return v3;
}

