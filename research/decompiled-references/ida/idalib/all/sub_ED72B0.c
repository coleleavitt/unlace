void __fastcall sub_ED72B0(__int64 a1)
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
  __int64 *v18; // rbp
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 *v23; // r12
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rbx
  void *v28; // rdi
  __int64 *v29; // rax
  __int64 *v30; // r12
  __int64 *v31; // r13
  __int64 *v32; // rbp
  __int64 v33; // rsi
  unsigned int v34; // ecx
  __int64 v35; // rdi
  __int64 *v36; // rdx
  __int64 v37; // rsi
  unsigned int v38; // ecx
  __int64 *v39; // rbp
  __int64 v40; // rsi
  __int64 v41; // rdi
  double v42[8]; // [rsp+8h] [rbp-40h] BYREF

  operator delete(*(_QWORD *)(a1 + 872), 16LL * *(unsigned int *)(a1 + 888), 8);
  operator delete(*(_QWORD *)(a1 + 848), 16LL * *(unsigned int *)(a1 + 864), 8);
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
    v18 = *(__int64 **)(a1 + 816);
    v19 = &v18[2 * *(unsigned int *)(a1 + 824)];
    while ( v19 != v18 )
    {
      v20 = v18[1];
      v21 = *v18;
      v18 += 2;
      operator delete(v21, v20, 16);
    }
  }
  *(_DWORD *)(a1 + 824) = 0;
  v22 = *(unsigned int *)(a1 + 776);
  if ( !(_DWORD)v22 )
    goto LABEL_21;
  v29 = *(__int64 **)(a1 + 768);
  *(_QWORD *)(a1 + 832) = 0;
  v30 = v29 + 1;
  v31 = &v29[v22];
  v32 = v29 + 1;
  *(_QWORD *)&v42[0] = *v29 + 4096;
  *(__m128 *)(a1 + 752) = _mm_loadh_ps(v42);
  if ( v31 != v29 + 1 )
  {
    do
    {
      v33 = 0x40000000000LL;
      v34 = (unsigned int)(v32 - v29) >> 7;
      if ( v34 <= 0x1D )
        v33 = 4096LL << v34;
      v35 = *v32++;
      operator delete(v35, v33, 16);
      v29 = *(__int64 **)(a1 + 768);
    }
    while ( v31 != v32 );
    v30 = v29 + 1;
    v32 = v29 + 1;
  }
  *(_DWORD *)(a1 + 776) = 1;
  v36 = v29;
  while ( 1 )
  {
    v37 = 0x40000000000LL;
    v38 = (unsigned int)(v29 - v36) >> 7;
    if ( v38 <= 0x1D )
      v37 = 4096LL << v38;
    operator delete(*v29, v37, 16);
    v29 = v30;
    if ( v30 == v32 )
      break;
    v36 = *(__int64 **)(a1 + 768);
    ++v30;
  }
  v39 = *(__int64 **)(a1 + 816);
  v23 = &v39[2 * *(unsigned int *)(a1 + 824)];
  if ( v39 != v23 )
  {
    do
    {
      v40 = v39[1];
      v41 = *v39;
      v39 += 2;
      operator delete(v41, v40, 16);
    }
    while ( v23 != v39 );
LABEL_21:
    v23 = *(__int64 **)(a1 + 816);
  }
  if ( v23 != (__int64 *)(a1 + 832) )
    free(v23);
  v24 = *(void **)(a1 + 768);
  if ( v24 != (void *)(a1 + 784) )
    free(v24);
  operator delete(*(_QWORD *)(a1 + 728), 16LL * *(unsigned int *)(a1 + 744), 8);
  operator delete(*(_QWORD *)(a1 + 704), 16LL * *(unsigned int *)(a1 + 720), 8);
  operator delete(*(_QWORD *)(a1 + 680), 16LL * *(unsigned int *)(a1 + 696), 8);
  if ( !*(_BYTE *)(a1 + 628) )
    free(*(void **)(a1 + 608));
  if ( !*(_BYTE *)(a1 + 340) )
    free(*(void **)(a1 + 320));
  v25 = *(unsigned int *)(a1 + 312);
  v26 = *(_QWORD *)(a1 + 296);
  v27 = a1 + 72;
  operator delete(v26, 24 * v25, 8);
  operator delete(*(_QWORD *)(v27 + 200), 16LL * *(unsigned int *)(v27 + 216), 8);
  v28 = *(void **)(v27 - 16);
  if ( v28 != (void *)v27 )
    free(v28);
}
