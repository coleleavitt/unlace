unsigned __int64 __fastcall sub_522FB0(_QWORD *a1)
{
  bool v1; // zf
  unsigned __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // rbp
  size_t v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rbp
  _QWORD *v19; // rbp
  __int64 v20; // r14
  __int128 v21; // xmm0
  __int64 v22; // rax
  size_t v23; // r14
  __int64 v24; // rax
  size_t v25; // r14
  void *v26; // rax
  void *v27; // rax
  __int64 v28; // r14
  __int64 i; // rbp
  __int64 v30; // r15
  void *v31; // rdi
  __int64 v32; // rax
  void *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  int v38; // eax
  __int64 v40; // rax
  void **v41; // rbp
  void *v42; // r14
  void **v43; // r15
  void *v44; // rdi
  _DWORD *v45; // rax
  void *v46; // rdi
  __int64 v47; // [rsp+0h] [rbp-58h]
  __int64 v48; // [rsp+0h] [rbp-58h]
  unsigned __int64 v49; // [rsp+8h] [rbp-50h]
  __int64 v50; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v51; // [rsp+18h] [rbp-40h]

  v1 = a1[1] == -1;
  v51 = __readfsqword(0x28u);
  if ( !v1 )
  {
    v3 = a1[3];
    v4 = a1[2];
    if ( v3 )
      goto LABEL_3;
LABEL_54:
    v11 = 0;
    v6 = 0;
    goto LABEL_11;
  }
  sub_7BF040(a1 + 1, *a1, "$ scriptsnippets", 0);
  v3 = a1[3];
  v4 = a1[2];
  if ( !v3 )
    goto LABEL_54;
LABEL_3:
  v5 = 0;
  v6 = 0;
  do
  {
    if ( *(_QWORD *)(v4 + 72 * v5 + 56) != -1 )
    {
      if ( v6 != v5 )
      {
        sub_522F20((__int64 *)(v4 + 72 * v6), (_QWORD *)(v4 + 72 * v5));
        v7 = *a1;
        v50 = *(_QWORD *)(a1[2] + v8 + 56) + 1LL;
        sub_7BE7C0(a1 + 1, v7, v6, &v50, v9, v10);
        v4 = a1[2];
      }
      ++v6;
    }
    ++v5;
  }
  while ( v3 != v5 );
  if ( v6 < v3 )
  {
    v41 = (void **)(v4 + 72 * v3);
    v42 = (void *)(v4 + 72 * v6);
    if ( 72 * v3 != 72 * v6 )
    {
      v43 = (void **)(v4 + 72 * v6);
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
        v43 += 9;
      }
      while ( v41 != v43 );
      v4 = a1[2];
    }
    memmove(v42, v41, v4 + 72LL * a1[3] - (_QWORD)v41);
    v4 = a1[2];
    v11 = a1[3] - 0x8E38E38E38E38E39LL * ((__int64)(72 * (v3 - v6)) >> 3);
    a1[3] = v11;
  }
  else
  {
    v11 = a1[3];
  }
LABEL_11:
  v12 = a1[11];
  v13 = 72LL * a1[12];
  v14 = 0x8E38E38E38E38E39LL * (v13 >> 3);
  v49 = v14;
  if ( v14 )
  {
    v15 = 9 * v11;
    v16 = 0;
    v17 = v14 + v11;
    v18 = 8 * v15;
    if ( a1[4] < v17 )
    {
      v48 = 72LL * a1[12];
      v40 = qvector_reserve(a1 + 2, v4, v17, 72);
      v13 = v48;
      a1[2] = v40;
      v4 = v40;
      v16 = 72LL * a1[3] - v18;
    }
    v19 = (_QWORD *)(v4 + v18);
    v20 = v12 + v13;
    v47 = v12 + v13;
    memmove((char *)v19 + v13, v19, v16);
    if ( v12 != v20 )
    {
      v21 = 0;
      do
      {
        *v19 = 0;
        *(_OWORD *)(v19 + 1) = v21;
        v25 = *(_QWORD *)(v12 + 8);
        if ( v25 )
        {
          v26 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 8));
          v19[2] = v25;
          *v19 = v26;
          memcpy(v26, *(const void **)v12, v25);
          v19[1] = v25;
          v21 = 0;
        }
        v22 = *(_QWORD *)(v12 + 24);
        v19[3] = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 12);
        v19[4] = 0;
        *(_OWORD *)(v19 + 5) = v21;
        v23 = *(_QWORD *)(v12 + 40);
        if ( v23 )
        {
          v27 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 40));
          v19[4] = v27;
          v19[6] = v23;
          memcpy(v27, *(const void **)(v12 + 32), v23);
          v19[5] = v23;
          v21 = 0;
        }
        v24 = *(_QWORD *)(v12 + 56);
        v19 += 9;
        v12 += 72;
        *(v19 - 2) = v24;
        *((_BYTE *)v19 - 8) = *(_BYTE *)(v12 - 8);
      }
      while ( v47 != v12 );
    }
    a1[3] += v49;
    v12 = a1[11];
  }
  if ( v12 )
  {
    v28 = a1[12];
    if ( v28 )
    {
      for ( i = 0; i != v28; ++i )
      {
        v30 = v12 + 72 * i;
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
        v12 = a1[11];
      }
    }
    a1[12] = 0;
    qfree((void *)v12);
    a1[11] = 0;
    a1[13] = 0;
  }
  while ( v6 < a1[3] )
  {
    v34 = *a1;
    v35 = a1[2] + 72 * v6;
    v36 = v6++;
    v50 = *(_QWORD *)(v35 + 56) + 1LL;
    sub_7BE7C0(a1 + 1, v34, v36, &v50, 8, 65);
  }
  if ( v6 < v3 )
  {
    do
    {
      v37 = v6++;
      sub_7BE850(a1 + 1, *a1, v37, 65);
    }
    while ( v3 != v6 );
  }
  v38 = 1;
  if ( !a1[3] )
  {
    sub_5213B0(a1);
    v38 = 3;
  }
  *((_DWORD *)a1 + 16) = v38;
  return v51 - __readfsqword(0x28u);
}
