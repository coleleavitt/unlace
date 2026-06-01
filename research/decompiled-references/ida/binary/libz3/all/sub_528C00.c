void __fastcall sub_528C00(_QWORD *a1, _QWORD **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v11; // r8
  __int64 *v12; // rsi
  __int64 v13; // rax
  int v14; // edi
  unsigned int v15; // edx
  __int64 *v16; // r10
  __int64 v17; // rdx
  __int64 *v18; // r9
  __int64 *i; // rax
  __int64 v20; // rdx
  unsigned __int8 v21; // bl
  _QWORD *v22; // rsi
  __int64 v23; // rax
  unsigned int v24; // edx
  _QWORD *v25; // r10
  __int64 v26; // rdx
  _QWORD *v27; // r9
  _QWORD *j; // rax
  __int64 v29; // rdx
  unsigned int v30; // ebp
  __int64 **v31; // rax
  _QWORD *v32; // rcx
  __int64 *v33; // r15
  __int64 *v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v39; // [rsp+10h] [rbp-58h]
  _QWORD *v40; // [rsp+18h] [rbp-50h]

  v8 = *a2;
  if ( !*a2 )
    return;
  v9 = *((unsigned int *)v8 - 1);
  if ( &v8[v9] == v8 )
    return;
  v40 = &v8[v9];
  do
  {
    v11 = *v8;
    v12 = *(__int64 **)a3;
    v13 = *(unsigned int *)(a3 + 8);
    v14 = *(_DWORD *)(*v8 + 12LL);
    v15 = v13 - 1;
    v13 *= 8;
    v16 = (__int64 *)(*(_QWORD *)a3 + v13);
    v17 = 8LL * (v14 & v15);
    v18 = (__int64 *)(*(_QWORD *)a3 + v17);
    if ( v17 != v13 )
    {
      for ( i = (__int64 *)(*(_QWORD *)a3 + v17); v16 != i; ++i )
      {
        v20 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( v11 == v20 && *(_DWORD *)(v20 + 12) == v14 )
          {
            v21 = v11 == v20 && *(_DWORD *)(v20 + 12) == v14;
            goto LABEL_11;
          }
        }
        else if ( !v20 )
        {
          goto LABEL_10;
        }
      }
    }
    if ( v12 == v18 )
    {
LABEL_10:
      v21 = 0;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v36 = *v12;
      if ( (unsigned __int64)*v12 > 1 )
        break;
      if ( !v36 )
        goto LABEL_10;
LABEL_30:
      if ( v18 == ++v12 )
        goto LABEL_10;
    }
    if ( v11 != v36 || *(_DWORD *)(v36 + 12) != v14 )
      goto LABEL_30;
    v21 = v11 == v36 && *(_DWORD *)(v36 + 12) == v14;
LABEL_11:
    v22 = *(_QWORD **)a5;
    v23 = *(unsigned int *)(a5 + 8);
    v24 = v23 - 1;
    v23 *= 16;
    v25 = (_QWORD *)(*(_QWORD *)a5 + v23);
    v26 = 16LL * (v14 & v24);
    v27 = (_QWORD *)(*(_QWORD *)a5 + v26);
    if ( v26 != v23 )
    {
      for ( j = (_QWORD *)(*(_QWORD *)a5 + v26); v25 != j; j += 2 )
      {
        v29 = *j;
        if ( *j > 1u )
        {
          if ( *(_DWORD *)(v29 + 12) == v14 && v11 == v29 )
          {
LABEL_26:
            v30 = *((_DWORD *)j + 2);
            goto LABEL_19;
          }
        }
        else if ( !v29 )
        {
          goto LABEL_18;
        }
      }
    }
    for ( ; v27 != v22; v22 += 2 )
    {
      v37 = *v22;
      if ( *v22 > 1u )
      {
        if ( *(_DWORD *)(v37 + 12) == v14 && v11 == v37 )
        {
          j = v22;
          goto LABEL_26;
        }
      }
      else if ( !v37 )
      {
        break;
      }
    }
LABEL_18:
    v30 = -1;
LABEL_19:
    v39 = v8;
    v31 = (__int64 **)sub_63BA90(a1[1], *v8);
    v32 = v39;
    v33 = *v31;
    if ( *v31 )
    {
      v34 = &v33[*((unsigned int *)v33 - 1)];
      if ( v34 != v33 )
      {
        do
        {
          v35 = *v33++;
          sub_528610(a1, v35, a4, v30, v21, a6, a7);
        }
        while ( v33 != v34 );
        v32 = v39;
      }
    }
    v8 = v32 + 1;
  }
  while ( v8 != v40 );
}

