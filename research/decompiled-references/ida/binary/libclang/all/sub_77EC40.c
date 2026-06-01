bool __fastcall sub_77EC40(_BYTE *a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  char v5; // si
  __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rax
  _DWORD *v12; // rax
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+8h] [rbp-30h]
  _DWORD *v30; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-20h]

  if ( *(char *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 32LL))(a1) + 84) >= 0 || (a1[29] & 1) == 0 )
    return 0;
  v2 = sub_79A2B0(a1);
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( v3 < v4 )
  {
    while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 367 )
    {
      v3 += 8LL;
      if ( v4 == v3 )
        goto LABEL_26;
    }
  }
  else
  {
    if ( v3 == v4 )
    {
LABEL_26:
      v5 = a1[29];
      goto LABEL_27;
    }
    while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 367 )
    {
      v4 += 8LL;
      if ( v3 == v4 )
        goto LABEL_26;
    }
  }
  v5 = a1[29];
  if ( v3 != v4 )
  {
    if ( (a1[29] & 1) == 0 )
      goto LABEL_68;
    v6 = sub_79A2B0(a1);
    v7 = *(_QWORD **)v6;
    v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
    if ( (unsigned __int64)v7 >= v8 )
    {
      if ( v7 == (_QWORD *)v8 )
        goto LABEL_68;
      while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 367 )
      {
        v8 += 8LL;
        if ( v7 == (_QWORD *)v8 )
          goto LABEL_68;
      }
      v9 = v7;
    }
    else
    {
      v9 = v7;
      while ( *(_WORD *)(*v9 + 32LL) != 367 )
      {
        if ( (_QWORD *)v8 == ++v9 )
          goto LABEL_68;
      }
    }
    if ( v9 != (_QWORD *)v8 )
    {
      v10 = *v7;
      if ( *(_WORD *)(*v7 + 32LL) != 367 )
      {
        v11 = v7 + 1;
        do
          v10 = *v11++;
        while ( *(_WORD *)(v10 + 32) != 367 );
      }
      v12 = *(_DWORD **)(v10 + 40);
      if ( *(_DWORD *)(v10 + 36) != 7 )
        return 0;
      if ( *v12 == 1634100580 && *(_DWORD *)((char *)v12 + 3) == 1953264993 )
      {
        v13 = 0;
        return v13 == 0;
      }
      goto LABEL_21;
    }
LABEL_68:
    BUG();
  }
LABEL_27:
  if ( (v5 & 1) == 0 )
    return 0;
  v14 = sub_79A2B0(a1);
  v15 = *(_QWORD *)v14;
  v16 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
  if ( v15 < v16 )
  {
    while ( *(_WORD *)(*(_QWORD *)v15 + 32LL) != 369 )
    {
      v15 += 8LL;
      if ( v16 == v15 )
        return 0;
    }
  }
  else
  {
    if ( v15 == v16 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v16 + 32LL) != 369 )
    {
      v16 += 8LL;
      if ( v15 == v16 )
        return 0;
    }
  }
  if ( v15 == v16 )
    return 0;
  if ( (a1[29] & 1) == 0 )
    goto LABEL_68;
  v17 = sub_79A2B0(a1);
  v18 = *(_QWORD **)v17;
  v19 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
  if ( (unsigned __int64)v18 < v19 )
  {
    v20 = v18;
    while ( *(_WORD *)(*v20 + 32LL) != 369 )
    {
      if ( (_QWORD *)v19 == ++v20 )
        goto LABEL_68;
    }
    goto LABEL_39;
  }
  if ( v18 == (_QWORD *)v19 )
    goto LABEL_68;
  while ( *(_WORD *)(*(_QWORD *)v19 + 32LL) != 369 )
  {
    v19 += 8LL;
    if ( v18 == (_QWORD *)v19 )
      goto LABEL_68;
  }
  v20 = v18;
LABEL_39:
  if ( v20 == (_QWORD *)v19 )
    goto LABEL_68;
  v21 = *v18;
  if ( *(_WORD *)(*v18 + 32LL) != 369 )
  {
    v22 = v18 + 1;
    do
      v21 = *v22++;
    while ( *(_WORD *)(v21 + 32) != 369 );
  }
  v28 = *(_QWORD *)(v21 + 40);
  v29 = *(unsigned int *)(v21 + 36);
  v23 = sub_25E4D40(&v28, word_3AB7F7A, 6, 0);
  v24 = v29;
  if ( v23 > v29 )
    v23 = v29;
  v25 = v23;
  v30 = (_DWORD *)(v28 + v23);
  v31 = v29 - v23;
  v26 = sub_25E4EC0(&v30, word_3AB7F7A, 6, -1) + 1;
  if ( v26 > v31 )
    v26 = v31;
  v27 = v25 + v31 - v24 + v26;
  if ( v27 > v31 )
    v27 = v31;
  if ( v27 != 7 )
    return 0;
  if ( *v30 == 1634100580 && *(_DWORD *)((char *)v30 + 3) == 1953264993 )
  {
    v13 = 0;
    return v13 == 0;
  }
LABEL_21:
  v13 = 1;
  return v13 == 0;
}

