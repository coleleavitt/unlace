_QWORD *__fastcall sub_9B91F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  unsigned __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  bool v11; // al
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v2 = sub_B68690(a2);
  v3 = *(__int64 **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( (unsigned __int64)v3 < v4 )
  {
    v12 = v3;
    while ( *(_WORD *)(*v12 + 36) != 172 )
    {
      if ( (__int64 *)v4 == ++v12 )
        goto LABEL_8;
    }
    if ( (__int64 *)v4 != v12 )
      goto LABEL_10;
LABEL_8:
    a1[2] = 0;
    *a1 = "mutex";
    a1[1] = 5;
    return a1;
  }
  if ( v3 == (__int64 *)v4 )
    goto LABEL_8;
  if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 172 )
  {
    v5 = (__int64 *)(v4 + 8);
    while ( v3 != v5 )
    {
      v6 = *v5++;
      if ( *(_WORD *)(v6 + 36) == 172 )
        goto LABEL_10;
    }
    goto LABEL_8;
  }
LABEL_10:
  while ( 1 )
  {
    v8 = *v3;
    if ( *(_WORD *)(*v3 + 36) == 172 )
      break;
    ++v3;
  }
  v9 = *(_QWORD *)(v8 + 48);
  v10 = *(unsigned int *)(v8 + 40);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_12;
  v13 = sub_B68690(a2);
  v14 = *(_QWORD *)v13;
  v15 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
  if ( *(_QWORD *)v13 < v15 )
  {
    v17 = *(_QWORD *)v13;
    while ( 1 )
    {
      v14 = v17;
      if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 342 )
        goto LABEL_30;
      v17 += 8;
      if ( v15 == v17 )
        goto LABEL_12;
    }
  }
  if ( v14 != v15 )
  {
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 342 )
    {
      v16 = v15 + 8;
      do
      {
        v15 = v16;
        if ( v14 == v16 )
          goto LABEL_12;
        v16 += 8LL;
      }
      while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 342 );
    }
LABEL_30:
    v11 = v14 != v15;
    goto LABEL_13;
  }
LABEL_12:
  v11 = 0;
LABEL_13:
  *a1 = v9;
  a1[1] = v10;
  *((_BYTE *)a1 + 16) = v11;
  return a1;
}

