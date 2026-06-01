void __fastcall sub_DAE800(__int64 a1)
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
  __int64 v18; // r15
  __int64 v19; // r13
  void **v20; // r15
  void **v21; // rbx
  void **v22; // rax
  void **v23; // rbx
  __int64 v24; // rdx
  int v25; // ebx
  unsigned int v26; // eax
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *k; // rdx
  _QWORD *j; // rax
  unsigned __int64 v36; // [rsp+8h] [rbp-50h]
  void **v37; // [rsp+8h] [rbp-50h]
  __m128 v38[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 8) )
    sub_DAE790(v38, *(_QWORD **)a1, (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16)), a1, 0);
  else
    sub_DAE790(
      v38,
      (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16)),
      (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16)),
      a1,
      1);
  v2 = v38[0].m128_u64[1];
  v3 = v38[0].m128_u64[0];
  v4 = (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16));
  sub_DAE790(v38, v4, v4, a1, 1);
  v36 = v38[0].m128_u64[0];
  if ( v38[0].m128_u64[0] != v3 )
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
            if ( v36 != v3 )
              goto LABEL_4;
            goto LABEL_20;
          }
        }
LABEL_40:
        v3 = v2;
        if ( v36 == v2 )
          break;
      }
      else
      {
        v3 += 80LL;
        if ( v36 == v11 )
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
  v18 = 80LL * *(unsigned int *)(a1 + 16);
  if ( (unsigned int)(4 * v15) < 0x40 )
    v17 = 64;
  v19 = v16 + v18;
  if ( *(_DWORD *)(a1 + 16) <= v17 )
  {
    for ( ; v16 != v19; v16 += 80 )
    {
      if ( *(_QWORD *)v16 != -4096 )
      {
        if ( *(_QWORD *)v16 != -8192 )
        {
          v20 = *(void ***)(v16 + 8);
          v21 = &v20[*(unsigned int *)(v16 + 16)];
          if ( v20 != v21 )
          {
            do
            {
              while ( *--v21 )
              {
                operator delete[](*v21);
                if ( v20 == v21 )
                  goto LABEL_31;
              }
            }
            while ( v20 != v21 );
LABEL_31:
            v21 = *(void ***)(v16 + 8);
          }
          if ( v21 != (void **)(v16 + 24) )
            free(v21);
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
      if ( v16 == v19 )
        goto LABEL_56;
    }
    if ( *(_QWORD *)v16 != -4096 )
    {
      v22 = *(void ***)(v16 + 8);
      v23 = &v22[*(unsigned int *)(v16 + 16)];
      if ( v22 != v23 )
      {
        do
        {
          while ( *--v23 )
          {
            v37 = v22;
            operator delete[](*v23);
            v22 = v37;
            if ( v37 == v23 )
              goto LABEL_46;
          }
        }
        while ( v22 != v23 );
LABEL_46:
        v23 = *(void ***)(v16 + 8);
      }
      if ( v23 != (void **)(v16 + 24) )
        free(v23);
      goto LABEL_49;
    }
    v16 += 80;
  }
  while ( v16 != v19 );
LABEL_56:
  v24 = *(unsigned int *)(a1 + 16);
  if ( !v15 )
  {
    if ( (_DWORD)v24 )
    {
      operator delete(*(_QWORD *)a1, v18, 8);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      return;
    }
    goto LABEL_36;
  }
  v25 = 64;
  if ( v15 != 1 )
  {
    _BitScanReverse(&v26, v15 - 1);
    v25 = 1 << (33 - (v26 ^ 0x1F));
    if ( v25 < 64 )
      v25 = 64;
  }
  v27 = *(_QWORD **)a1;
  if ( (_DWORD)v24 == v25 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &v27[10 * v24]; j != v27; v27 += 10 )
      *v27 = -4096;
  }
  else
  {
    operator delete(v27, v18, 8);
    v28 = ((((((((4 * v25 / 3u + 1) | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 2)
             | (4 * v25 / 3u + 1)
             | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 4)
           | (((4 * v25 / 3u + 1) | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 2)
           | (4 * v25 / 3u + 1)
           | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 8)
         | (((((4 * v25 / 3u + 1) | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 2)
           | (4 * v25 / 3u + 1)
           | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 4)
         | (((4 * v25 / 3u + 1) | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 2)
         | (4 * v25 / 3u + 1)
         | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 16;
    v29 = (v28
         | (((((((4 * v25 / 3u + 1) | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 2)
             | (4 * v25 / 3u + 1)
             | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 4)
           | (((4 * v25 / 3u + 1) | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 2)
           | (4 * v25 / 3u + 1)
           | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 8)
         | (((((4 * v25 / 3u + 1) | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 2)
           | (4 * v25 / 3u + 1)
           | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 4)
         | (((4 * v25 / 3u + 1) | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1)) >> 2)
         | (4 * v25 / 3u + 1)
         | ((unsigned __int64)(4 * v25 / 3u + 1) >> 1))
        + 1;
    *(_DWORD *)(a1 + 16) = v29;
    v32 = (_QWORD *)sub_22300B0(80 * v29, 8, v28, 2863311531LL, v30, v31);
    v33 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v32;
    for ( k = &v32[10 * v33]; k != v32; v32 += 10 )
      *v32 = -4096;
  }
}
