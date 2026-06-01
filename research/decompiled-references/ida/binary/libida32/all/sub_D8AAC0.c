void __fastcall sub_D8AAC0(__int64 a1)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r13
  _QWORD *v4; // rdx
  _QWORD *v5; // r15
  _QWORD *i; // r14
  __int64 v7; // rbx
  __int64 v8; // rdx
  void (__fastcall *v9)(_QWORD, __int64); // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rdx
  int v15; // r14d
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // r13
  void **v19; // r15
  void **v20; // rbx
  void **v21; // rax
  void **v22; // rbx
  __int64 v23; // rdx
  int v24; // ebx
  unsigned int v25; // eax
  _QWORD *v26; // rdi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *k; // rdx
  _QWORD *j; // rax
  unsigned __int64 v35; // [rsp+8h] [rbp-50h]
  void **v36; // [rsp+8h] [rbp-50h]
  __m128 v37[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 8) )
    sub_D8AA50(v37, *(_QWORD **)a1, (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16)), a1, 0);
  else
    sub_D8AA50(
      v37,
      (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16)),
      (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16)),
      a1,
      1);
  v2 = v37[0].m128_u64[1];
  v3 = v37[0].m128_u64[0];
  v4 = (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16));
  sub_D8AA50(v37, v4, v4, a1, 1);
  v35 = v37[0].m128_u64[0];
  if ( v37[0].m128_u64[0] != v3 )
  {
    while ( 1 )
    {
LABEL_4:
      v5 = *(_QWORD **)(v3 + 8);
      for ( i = &v5[*(unsigned int *)(v3 + 16)]; i != v5; *(_QWORD *)(v7 + 8) = 0 )
      {
        while ( 1 )
        {
          v7 = *v5;
          v8 = *(_QWORD *)(*v5 + 32LL);
          v9 = *(void (__fastcall **)(_QWORD, __int64))(v8 + 72);
          if ( v9 )
            v9(*v5, v7 + *(unsigned int *)(v8 + 24) + 40);
          v10 = *(_QWORD *)(v7 + 8);
          *(_BYTE *)(v7 + 27) = 0;
          if ( v10 )
            break;
          if ( i == ++v5 )
            goto LABEL_12;
        }
        do
        {
          *(_QWORD *)(v10 + 32) = 0;
          v10 = *(_QWORD *)(v10 + 16);
        }
        while ( v10 );
        ++v5;
      }
LABEL_12:
      v11 = v3 + 80;
      if ( v3 + 80 == v2 )
        goto LABEL_40;
      v12 = *(_QWORD *)(v3 + 80);
      if ( v12 == -4096 || v12 == -8192 )
      {
        v13 = (__int64 *)(v3 + 160);
        while ( 1 )
        {
          v3 = (unsigned __int64)v13;
          if ( v13 == (__int64 *)v2 )
            break;
          v14 = *v13;
          v13 += 10;
          if ( v14 != -4096 && v14 != -8192 )
          {
            if ( v35 != v3 )
              goto LABEL_4;
            goto LABEL_20;
          }
        }
LABEL_40:
        v3 = v2;
        if ( v35 == v2 )
          break;
      }
      else
      {
        v3 += 80LL;
        if ( v35 == v11 )
          break;
      }
    }
  }
LABEL_20:
  v15 = *(_DWORD *)(a1 + 8);
  if ( !v15 && !*(_DWORD *)(a1 + 12) )
    return;
  v16 = *(_QWORD *)a1;
  v17 = 4 * v15;
  if ( (unsigned int)(4 * v15) < 0x40 )
    v17 = 64;
  v18 = v16 + 80LL * *(unsigned int *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 16) <= v17 )
  {
    for ( ; v16 != v18; v16 += 80 )
    {
      if ( *(_QWORD *)v16 != -4096 )
      {
        if ( *(_QWORD *)v16 != -8192 )
        {
          v19 = *(void ***)(v16 + 8);
          v20 = &v19[*(unsigned int *)(v16 + 16)];
          if ( v19 != v20 )
          {
            do
            {
              while ( *--v20 )
              {
                operator delete[](*v20);
                if ( v19 == v20 )
                  goto LABEL_31;
              }
            }
            while ( v19 != v20 );
LABEL_31:
            v20 = *(void ***)(v16 + 8);
          }
          if ( v20 != (void **)(v16 + 24) )
            free(v20);
        }
        *(_QWORD *)v16 = -4096;
      }
    }
LABEL_36:
    *(_QWORD *)(a1 + 8) = 0;
    return;
  }
  do
  {
    while ( *(_QWORD *)v16 == -8192 )
    {
LABEL_49:
      v16 += 80;
      if ( v16 == v18 )
        goto LABEL_56;
    }
    if ( *(_QWORD *)v16 != -4096 )
    {
      v21 = *(void ***)(v16 + 8);
      v22 = &v21[*(unsigned int *)(v16 + 16)];
      if ( v21 != v22 )
      {
        do
        {
          while ( *--v22 )
          {
            v36 = v21;
            operator delete[](*v22);
            v21 = v36;
            if ( v36 == v22 )
              goto LABEL_46;
          }
        }
        while ( v21 != v22 );
LABEL_46:
        v22 = *(void ***)(v16 + 8);
      }
      if ( v22 != (void **)(v16 + 24) )
        free(v22);
      goto LABEL_49;
    }
    v16 += 80;
  }
  while ( v16 != v18 );
LABEL_56:
  v23 = *(unsigned int *)(a1 + 16);
  if ( !v15 )
  {
    if ( (_DWORD)v23 )
    {
      operator delete();
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      return;
    }
    goto LABEL_36;
  }
  v24 = 64;
  if ( v15 != 1 )
  {
    _BitScanReverse(&v25, v15 - 1);
    v24 = 1 << (33 - (v25 ^ 0x1F));
    if ( v24 < 64 )
      v24 = 64;
  }
  v26 = *(_QWORD **)a1;
  if ( (_DWORD)v23 == v24 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &v26[10 * v23]; j != v26; v26 += 10 )
      *v26 = -4096;
  }
  else
  {
    operator delete();
    v27 = ((((((((4 * v24 / 3u + 1) | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 2)
             | (4 * v24 / 3u + 1)
             | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 4)
           | (((4 * v24 / 3u + 1) | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 2)
           | (4 * v24 / 3u + 1)
           | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 8)
         | (((((4 * v24 / 3u + 1) | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 2)
           | (4 * v24 / 3u + 1)
           | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 4)
         | (((4 * v24 / 3u + 1) | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 2)
         | (4 * v24 / 3u + 1)
         | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 16;
    v28 = (v27
         | (((((((4 * v24 / 3u + 1) | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 2)
             | (4 * v24 / 3u + 1)
             | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 4)
           | (((4 * v24 / 3u + 1) | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 2)
           | (4 * v24 / 3u + 1)
           | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 8)
         | (((((4 * v24 / 3u + 1) | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 2)
           | (4 * v24 / 3u + 1)
           | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 4)
         | (((4 * v24 / 3u + 1) | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1)) >> 2)
         | (4 * v24 / 3u + 1)
         | ((unsigned __int64)(4 * v24 / 3u + 1) >> 1))
        + 1;
    *(_DWORD *)(a1 + 16) = v28;
    v31 = (_QWORD *)sub_220C370(80 * v28, 8, v27, 2863311531LL, v29, v30);
    v32 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v31;
    for ( k = &v31[10 * v32]; k != v31; v31 += 10 )
      *v31 = -4096;
  }
}

