unsigned __int64 __fastcall sub_50AF90(_QWORD *a1)
{
  bool v1; // zf
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  size_t v17; // rax
  __int64 v18; // r10
  _QWORD *v19; // rbp
  __int64 v20; // r15
  const char *v21; // rsi
  __int128 v22; // xmm0
  __int64 v23; // rax
  size_t v24; // r15
  int v25; // eax
  size_t v26; // r15
  void *v27; // rax
  void *v28; // rax
  __int64 i; // r15
  __int64 v30; // rbp
  void *v31; // rdi
  __int64 v32; // rax
  void *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v40; // rax
  void **v41; // r14
  void *v42; // r15
  void **v43; // rbp
  void *v44; // rdi
  _DWORD *v45; // rax
  void *v46; // rdi
  __int64 v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+10h] [rbp-58h]
  __int64 v51; // [rsp+18h] [rbp-50h]
  int v52; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v53; // [rsp+28h] [rbp-40h]

  v1 = *((_DWORD *)a1 + 2) == -1;
  v53 = __readfsqword(0x28u);
  if ( !v1 )
  {
    v3 = a1[3];
    v4 = a1[2];
    if ( v3 )
      goto LABEL_3;
LABEL_54:
    v12 = 0;
    v6 = 0;
    goto LABEL_11;
  }
  sub_79BC40(a1 + 1, *a1, "$ scriptsnippets", 0);
  v3 = a1[3];
  v4 = a1[2];
  if ( !v3 )
    goto LABEL_54;
LABEL_3:
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = v4 + (v5 << 6);
    if ( *(_DWORD *)(v7 + 56) != -1 )
    {
      if ( v6 != v5 )
      {
        sub_50AF10((__int64 *)(v4 + (v6 << 6)), (_QWORD *)v7);
        v8 = *a1;
        v52 = *(_DWORD *)(a1[2] + v9 + 56) + 1;
        sub_79B440(a1 + 1, v8, (unsigned int)v6, &v52, v10, v11);
        v4 = a1[2];
      }
      ++v6;
    }
    ++v5;
  }
  while ( v3 != v5 );
  if ( v6 < v3 )
  {
    v41 = (void **)(v4 + (v3 << 6));
    v42 = (void *)(v4 + (v6 << 6));
    if ( v3 << 6 != v6 << 6 )
    {
      v43 = (void **)(v4 + (v6 << 6));
      do
      {
        v44 = v43[4];
        if ( v44 )
        {
          v43[5] = nullptr;
          qfree(v44);
        }
        v45 = v43[3];
        if ( v45 )
          --v45[3];
        v46 = *v43;
        if ( *v43 )
        {
          v43[1] = nullptr;
          qfree(v46);
        }
        v43 += 8;
      }
      while ( v41 != v43 );
      v4 = a1[2];
    }
    memmove(v42, v41, v4 + (a1[3] << 6) - (_QWORD)v41);
    v4 = a1[2];
    v12 = a1[3] - ((__int64)((v3 - v6) << 6) >> 6);
    a1[3] = v12;
  }
  else
  {
    v12 = a1[3];
  }
LABEL_11:
  v13 = a1[11];
  v14 = a1[12] << 6;
  v50 = v14 >> 6;
  if ( v14 >> 6 )
  {
    v15 = v12;
    v16 = (v14 >> 6) + v12;
    v17 = 0;
    v18 = v15 << 6;
    if ( a1[4] < v16 )
    {
      v51 = a1[12] << 6;
      v49 = v18;
      v40 = qvector_reserve(a1 + 2, v4, v16, 64);
      v18 = v49;
      v14 = v51;
      a1[2] = v40;
      v4 = v40;
      v17 = (a1[3] << 6) - v49;
    }
    v19 = (_QWORD *)(v18 + v4);
    v20 = v13 + v14;
    v21 = (const char *)v19;
    v47 = v13 + v14;
    memmove((char *)v19 + v14, v19, v17);
    if ( v13 != v20 )
    {
      v22 = 0;
      do
      {
        *v19 = 0;
        *(_OWORD *)(v19 + 1) = v22;
        v26 = *(_QWORD *)(v13 + 8);
        if ( v26 )
        {
          v27 = (void *)qalloc_or_throw(*(_QWORD *)(v13 + 8), v21);
          v19[2] = v26;
          *v19 = v27;
          v21 = *(const char **)v13;
          memcpy(v27, *(const void **)v13, v26);
          v19[1] = v26;
          v22 = 0;
        }
        v23 = *(_QWORD *)(v13 + 24);
        v19[3] = v23;
        if ( v23 )
          ++*(_DWORD *)(v23 + 12);
        v19[4] = 0;
        *(_OWORD *)(v19 + 5) = v22;
        v24 = *(_QWORD *)(v13 + 40);
        if ( v24 )
        {
          v28 = (void *)qalloc_or_throw(*(_QWORD *)(v13 + 40), v21);
          v19[4] = v28;
          v19[6] = v24;
          v21 = *(const char **)(v13 + 32);
          memcpy(v28, v21, v24);
          v19[5] = v24;
          v22 = 0;
        }
        v25 = *(_DWORD *)(v13 + 56);
        v19 += 8;
        v13 += 64;
        *((_DWORD *)v19 - 2) = v25;
        *((_BYTE *)v19 - 4) = *(_BYTE *)(v13 - 4);
      }
      while ( v47 != v13 );
    }
    a1[3] += v50;
    v13 = a1[11];
  }
  if ( v13 )
  {
    v48 = a1[12];
    if ( v48 )
    {
      for ( i = 0; i != v48; ++i )
      {
        v30 = v13 + (i << 6);
        v31 = *(void **)(v30 + 32);
        if ( v31 )
        {
          *(_QWORD *)(v30 + 40) = 0;
          qfree(v31);
        }
        v32 = *(_QWORD *)(v30 + 24);
        if ( v32 )
          --*(_DWORD *)(v32 + 12);
        v33 = *(void **)v30;
        if ( *(_QWORD *)v30 )
        {
          *(_QWORD *)(v30 + 8) = 0;
          qfree(v33);
        }
        v13 = a1[11];
      }
    }
    a1[12] = 0;
    qfree((void *)v13);
    a1[11] = 0;
    a1[13] = 0;
  }
  while ( v6 < a1[3] )
  {
    v34 = *a1;
    v35 = (unsigned int)v6;
    v36 = *(_DWORD *)(a1[2] + (v6++ << 6) + 56);
    v52 = v36 + 1;
    sub_79B440(a1 + 1, v34, v35, &v52, 4, 65);
  }
  if ( v6 < v3 )
  {
    do
    {
      v37 = (unsigned int)v6++;
      sub_79B4D0(a1 + 1, *a1, v37, 65);
    }
    while ( v3 != v6 );
  }
  v38 = 1;
  if ( !a1[3] )
  {
    sub_5093E0(a1);
    v38 = 3;
  }
  *((_DWORD *)a1 + 16) = v38;
  return v53 - __readfsqword(0x28u);
}

