bool __fastcall sub_1A88E20(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rbp
  unsigned __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  size_t v26; // rax

  v6 = a1[1];
  if ( v6 )
    return v6 == a2;
  if ( *(_BYTE *)(a2 + 73) >> 5 )
    return 0;
  v8 = a2;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v9 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
    v13 = *v9;
    v14 = *v9 + 8LL * *((unsigned int *)v9 + 2);
    if ( v13 < v14 )
    {
      v10 = v13;
      while ( 1 )
      {
        a2 = *(_QWORD *)v10;
        if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 303 )
          break;
        v10 += 8;
        if ( v14 == v10 )
          goto LABEL_12;
      }
      if ( v14 == v10 )
        goto LABEL_12;
    }
    else
    {
      if ( v13 == v14 )
      {
LABEL_12:
        if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
          goto LABEL_17;
        v17 = sub_B8C3D0(v8, a2, v13, v10, v11, v12);
        v18 = *v17;
        v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
        if ( v18 >= v19 )
        {
          if ( v18 == v19 )
            goto LABEL_17;
          while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 304 )
          {
            v19 += 8LL;
            if ( v18 == v19 )
              goto LABEL_17;
          }
        }
        else
        {
          v20 = v18;
          while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 304 )
          {
            v20 += 8LL;
            if ( v19 == v20 )
              goto LABEL_17;
          }
          if ( v19 == v20 )
            goto LABEL_17;
        }
        while ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 304 )
          v18 += 8LL;
        v21 = *(_QWORD *)(*(_QWORD *)v18 + 40LL);
LABEL_29:
        v24 = a1[2];
        if ( v24 )
          goto LABEL_31;
        goto LABEL_30;
      }
      if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 303 )
      {
        v15 = (__int64 *)(v14 + 8);
        do
        {
          v10 = (__int64)v15;
          if ( (__int64 *)v13 == v15 )
            goto LABEL_12;
          v16 = *v15++;
        }
        while ( *(_WORD *)(v16 + 36) != 303 );
      }
    }
    v22 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 303 )
    {
      v23 = (__int64 *)(v13 + 8);
      do
        v22 = *v23++;
      while ( *(_WORD *)(v22 + 36) != 303 );
    }
    v21 = *(_QWORD *)(v22 + 40);
    goto LABEL_29;
  }
LABEL_17:
  v21 = a1[2];
  if ( v21 )
    return 0;
LABEL_30:
  v25 = *(_QWORD *)(*a1 + 240LL);
  v26 = j__strlen("NSError");
  v24 = sub_6F3470(v25 + 552, "NSError", v26);
  a1[2] = v24;
LABEL_31:
  if ( v24 == v21 )
  {
    a1[1] = v8;
    return 1;
  }
  return 0;
}
