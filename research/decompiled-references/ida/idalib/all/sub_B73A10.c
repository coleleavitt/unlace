bool __fastcall sub_B73A10(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __int64 *v6; // rdx
  __int64 *v7; // r12
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 *i; // rax
  char v12; // al
  __int64 *j; // r12
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v1 + 17) & 4) != 0 )
    return 1;
  v3 = sub_F57E80(v1);
  if ( v3 && (*(_QWORD *)(v3 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v3 + 17) & 4) == 0 )
    return 1;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v4 = sub_B8C3D0(a1);
    v5 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      v6 = *(__int64 **)sub_B8C3D0(a1);
    else
      v6 = nullptr;
  }
  else
  {
    v5 = 0;
    v6 = nullptr;
  }
  while ( 1 )
  {
    v7 = v6;
    if ( (unsigned __int64)v6 < v5 )
    {
      v8 = v6;
      while ( *(_WORD *)(*v8 + 36) != 126 )
      {
        if ( (__int64 *)v5 == ++v8 )
          goto LABEL_13;
      }
      if ( (__int64 *)v5 == v8 )
        goto LABEL_13;
      goto LABEL_19;
    }
    if ( v6 == (__int64 *)v5 )
      return 0;
    if ( *(_WORD *)(*(_QWORD *)v5 + 36LL) != 126 )
      break;
LABEL_19:
    v9 = *v6;
    v10 = v6 + 1;
    for ( i = v6 + 1; *(_WORD *)(v9 + 36) != 126; ++i )
      v9 = *i;
    v12 = sub_B08AF0(v9);
    v6 = v10;
    if ( v12 )
    {
      if ( (unsigned __int64)v7 <= v5 )
      {
        if ( v7 != (__int64 *)v5 )
          goto LABEL_24;
        return 0;
      }
LABEL_14:
      while ( *(_WORD *)(*(_QWORD *)v5 + 36LL) != 126 )
      {
        v5 += 8LL;
        if ( v7 == (__int64 *)v5 )
          return 0;
      }
      return v7 != (__int64 *)v5;
    }
  }
  v15 = (__int64 *)(v5 + 8);
  while ( v15 != v6 )
  {
    v16 = *v15++;
    if ( *(_WORD *)(v16 + 36) == 126 )
      goto LABEL_19;
  }
LABEL_13:
  if ( (unsigned __int64)v6 > v5 )
    goto LABEL_14;
LABEL_24:
  if ( *(_WORD *)(*v7 + 36) != 126 )
  {
    for ( j = v7 + 1; j != (__int64 *)v5; ++j )
    {
      v14 = *j;
      if ( *(_WORD *)(v14 + 36) == 126 )
        return 1;
    }
    return 0;
  }
  return 1;
}
