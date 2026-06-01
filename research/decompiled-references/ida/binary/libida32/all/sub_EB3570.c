void __fastcall sub_EB3570(__int64 a1)
{
  __int64 *v2; // r14
  __int64 v3; // rax
  __int64 *v4; // r15
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // r12
  bool v8; // cf
  __int64 v9; // rcx
  unsigned __int64 v10; // r12
  unsigned __int64 i; // rbp
  void *v12; // rdi
  _QWORD *v13; // r12
  _QWORD *v14; // r13
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbp
  void *v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // rdx
  char *v21; // r12
  void *v22; // rdi
  _QWORD *v23; // rbx
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // r12
  _QWORD *v27; // r13
  _QWORD *v28; // rbp
  __int64 v29; // rax
  char *v30; // rbp
  double v31[8]; // [rsp+8h] [rbp-40h] BYREF

  operator delete();
  operator delete();
  v2 = *(__int64 **)(a1 + 768);
  v3 = *(unsigned int *)(a1 + 776);
  v4 = &v2[v3];
  if ( v2 != v4 )
  {
    v5 = *(_QWORD *)(a1 + 768);
    while ( 1 )
    {
      v6 = (unsigned int)(((__int64)v2 - v5) >> 3) >> 7;
      v7 = 4096LL << v6;
      v8 = v6 < 0x1E;
      v9 = *v2;
      if ( !v8 )
        v7 = 0x40000000000LL;
      v10 = v9 + v7;
      if ( v9 == *(_QWORD *)(v5 + 8 * v3 - 8) )
        v10 = *(_QWORD *)(a1 + 752);
      for ( i = ((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 80; i <= v10; i += 80LL )
      {
        while ( 1 )
        {
          v12 = *(void **)(i - 64);
          if ( v12 == (void *)(i - 48) )
            break;
          free(v12);
          i += 80LL;
          if ( v10 < i )
            goto LABEL_10;
        }
      }
LABEL_10:
      if ( v4 == ++v2 )
        break;
      v5 = *(_QWORD *)(a1 + 768);
      v3 = *(unsigned int *)(a1 + 776);
    }
  }
  v13 = *(_QWORD **)(a1 + 816);
  v14 = &v13[2 * *(unsigned int *)(a1 + 824)];
  if ( v13 != v14 )
  {
    do
    {
      v15 = *v13 + v13[1];
      v16 = (*v13 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      while ( 1 )
      {
        v16 += 80LL;
        if ( v15 < v16 )
          break;
        while ( 1 )
        {
          v17 = *(void **)(v16 - 64);
          if ( v17 == (void *)(v16 - 48) )
            break;
          free(v17);
          v16 += 80LL;
          if ( v15 < v16 )
            goto LABEL_17;
        }
      }
LABEL_17:
      v13 += 2;
    }
    while ( v14 != v13 );
    v18 = *(_QWORD *)(a1 + 816);
    v19 = v18 + 16LL * *(unsigned int *)(a1 + 824);
    while ( v19 != v18 )
    {
      v18 += 16;
      operator delete();
    }
  }
  *(_DWORD *)(a1 + 824) = 0;
  v20 = *(unsigned int *)(a1 + 776);
  if ( !(_DWORD)v20 )
    goto LABEL_21;
  v25 = *(_QWORD **)(a1 + 768);
  *(_QWORD *)(a1 + 832) = 0;
  v26 = v25 + 1;
  v27 = &v25[v20];
  v28 = v25 + 1;
  *(_QWORD *)&v31[0] = *v25 + 4096LL;
  *(__m128 *)(a1 + 752) = _mm_loadh_ps(v31);
  if ( v27 != v25 + 1 )
  {
    do
    {
      ++v28;
      operator delete();
      v29 = *(_QWORD *)(a1 + 768);
    }
    while ( v27 != v28 );
    v26 = (_QWORD *)(v29 + 8);
    v28 = (_QWORD *)(v29 + 8);
  }
  *(_DWORD *)(a1 + 776) = 1;
  while ( 1 )
  {
    operator delete();
    if ( v26 == v28 )
      break;
    ++v26;
  }
  v30 = *(char **)(a1 + 816);
  v21 = &v30[16 * *(unsigned int *)(a1 + 824)];
  if ( v30 != v21 )
  {
    do
    {
      v30 += 16;
      operator delete();
    }
    while ( v21 != v30 );
LABEL_21:
    v21 = *(char **)(a1 + 816);
  }
  if ( v21 != (char *)(a1 + 832) )
    free(v21);
  v22 = *(void **)(a1 + 768);
  if ( v22 != (void *)(a1 + 784) )
    free(v22);
  operator delete();
  operator delete();
  operator delete();
  if ( !*(_BYTE *)(a1 + 628) )
    free(*(void **)(a1 + 608));
  if ( !*(_BYTE *)(a1 + 340) )
    free(*(void **)(a1 + 320));
  v23 = (_QWORD *)(a1 + 72);
  operator delete();
  operator delete();
  v24 = (_QWORD *)*(v23 - 2);
  if ( v24 != v23 )
    free(v24);
}

