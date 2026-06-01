__int64 __fastcall sub_B75130(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 *i; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 *j; // rax
  __int64 v25; // rcx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v2 = sub_B8C3D0(a1);
  v3 = *(__int64 **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( *(_QWORD *)v2 < v4 )
  {
    v23 = *(__int64 **)v2;
    while ( *(_WORD *)(*v23 + 36) != 376 )
    {
      if ( (__int64 *)v4 == ++v23 )
        goto LABEL_9;
    }
    if ( (__int64 *)v4 == v23 )
      goto LABEL_9;
    return 1;
  }
  if ( v3 != (__int64 *)v4 )
  {
    if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 376 )
    {
      for ( i = (__int64 *)(v4 + 8); v3 != i; ++i )
      {
        v6 = *i;
        if ( *(_WORD *)(v6 + 36) == 376 )
          return 1;
      }
      goto LABEL_9;
    }
    return 1;
  }
LABEL_9:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = sub_B8C3D0(a1);
  v8 = *(__int64 **)v7;
  v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
  if ( *(_QWORD *)v7 >= v9 )
  {
    if ( v8 != (__int64 *)v9 )
    {
      if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 378 )
        return 5;
      for ( j = (__int64 *)(v9 + 8); v8 != j; ++j )
      {
        v25 = *j;
        if ( *(_WORD *)(v25 + 36) == 378 )
          return 5;
      }
    }
  }
  else
  {
    v10 = *(__int64 **)v7;
    while ( *(_WORD *)(*v10 + 36) != 378 )
    {
      if ( (__int64 *)v9 == ++v10 )
        goto LABEL_14;
    }
    if ( (__int64 *)v9 != v10 )
      return 5;
  }
LABEL_14:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v11 = sub_B8C3D0(a1);
  v12 = *(_QWORD *)v11;
  v13 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8);
  if ( *(_QWORD *)v11 >= v13 )
  {
    if ( v12 == v13 )
      goto LABEL_19;
    while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 157 )
    {
      v13 += 8LL;
      if ( v12 == v13 )
        goto LABEL_19;
    }
    return 3;
  }
  v14 = *(_QWORD *)v11;
  while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 157 )
  {
    v14 += 8;
    if ( v13 == v14 )
      goto LABEL_19;
  }
  if ( v13 != v14 )
    return 3;
LABEL_19:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v15 = sub_B8C3D0(a1);
  v16 = *(_QWORD *)v15;
  v17 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
  if ( *(_QWORD *)v15 < v17 )
  {
    v18 = *(_QWORD *)v15;
    while ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 158 )
    {
      v18 += 8;
      if ( v17 == v18 )
        goto LABEL_24;
    }
    if ( v17 == v18 )
      goto LABEL_24;
    return 2;
  }
  if ( v16 != v17 )
  {
    while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 158 )
    {
      v17 += 8LL;
      if ( v16 == v17 )
        goto LABEL_24;
    }
    return 2;
  }
LABEL_24:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v19 = sub_B8C3D0(a1);
  v20 = *(_QWORD *)v19;
  v21 = *(_QWORD *)v19 + 8LL * *(unsigned int *)(v19 + 8);
  if ( *(_QWORD *)v19 < v21 )
  {
    v22 = *(_QWORD *)v19;
    while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 377 )
    {
      v22 += 8;
      if ( v21 == v22 )
        return 0;
    }
    if ( v21 == v22 )
      return 0;
    return 4;
  }
  if ( v20 == v21 )
    return 0;
  while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 377 )
  {
    v21 += 8LL;
    if ( v20 == v21 )
      return 0;
  }
  return 4;
}
