unsigned __int64 __fastcall sub_4BF910(__int64 a1)
{
  _QWORD *v2; // rbp
  char *v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  __int64 **j; // r15
  __int64 v17; // r14
  __int64 k; // r12
  __int64 v19; // r14
  __int64 m; // r13
  __int64 v21; // rax
  __m128i si128; // xmm1
  void *v23; // rdx
  __m128i v24; // xmm1
  void *v25; // rdx
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  void *v28; // rdx
  void *v29; // rax
  __m128i v30; // xmm1
  const char *v31; // rsi
  char *v32; // rdi
  __int64 v33; // r13
  __int64 ii; // r12
  char *v35; // rbx
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rdi
  __int64 n; // [rsp+18h] [rbp-E0h]
  void *v40; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v41; // [rsp+28h] [rbp-D0h]
  void *v42; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v43; // [rsp+48h] [rbp-B0h]
  __m128i ptr[2]; // [rsp+60h] [rbp-98h] BYREF
  void *v45; // [rsp+80h] [rbp-78h]
  __m128i v46; // [rsp+88h] [rbp-70h] BYREF
  void *src; // [rsp+98h] [rbp-60h]
  __m128i v48; // [rsp+A0h] [rbp-58h] BYREF
  char v49; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v50; // [rsp+B8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1480) + 600LL) )
  {
    v2 = *(_QWORD **)(a1 + 1528);
    sub_4BCA70((__int64)(v2 + 23));
    v3 = (char *)v2[30];
    if ( v3 )
    {
      v4 = v2[31];
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          v6 = &v3[72 * i];
          v7 = *((void **)v6 + 6);
          if ( v7 )
          {
            *((_QWORD *)v6 + 7) = 0;
            qfree(v7);
          }
          v8 = *((void **)v6 + 3);
          if ( v8 )
          {
            *((_QWORD *)v6 + 4) = 0;
            qfree(v8);
          }
          v9 = *(void **)v6;
          if ( *(_QWORD *)v6 )
          {
            *((_QWORD *)v6 + 1) = 0;
            qfree(v9);
          }
          v3 = (char *)v2[30];
        }
      }
      v2[31] = 0;
      qfree(v3);
      v2[30] = 0;
      v2[32] = 0;
    }
    v10 = v2[33];
    v11 = v2[34];
    if ( v10 != v11 )
    {
      v12 = v2[33];
      do
      {
        if ( *(_QWORD *)(v12 + 24) )
          qregfree(v12);
        v13 = *(void **)(v12 + 32);
        *(_OWORD *)v12 = 0;
        *(_OWORD *)(v12 + 16) = 0;
        if ( v13 )
        {
          *(_QWORD *)(v12 + 40) = 0;
          qfree(v13);
          *(_QWORD *)(v12 + 32) = 0;
          *(_QWORD *)(v12 + 48) = 0;
        }
        v14 = *(void **)(v12 + 56);
        if ( v14 )
        {
          *(_QWORD *)(v12 + 64) = 0;
          qfree(v14);
          *(_QWORD *)(v12 + 56) = 0;
          *(_QWORD *)(v12 + 72) = 0;
        }
        v15 = *(void **)(v12 + 32);
        *(_BYTE *)(v12 + 80) = 0;
        if ( v15 )
        {
          *(_QWORD *)(v12 + 40) = 0;
          qfree(v15);
        }
        v12 += 88;
      }
      while ( v11 != v12 );
      v2[34] = v10;
    }
    read_config((int)"goodname", 1, (int)&off_2B032C0, 2, (int)sub_5E30F0, 0, 0);
    for ( j = (__int64 **)v2[25]; j; j = (__int64 **)*j )
    {
      memset(ptr, 0, 24);
      sub_3573A0((char **)ptr);
      v17 = v2[30];
      for ( k = v17 + 72LL * v2[31]; k != v17; v17 += 72 )
        sub_4B2A70(v17 + 24, (const char *)ptr[0].m128i_i64[0], (const char *)j[2]);
      if ( ptr[0].m128i_i64[0] )
      {
        ptr[0].m128i_i64[1] = 0;
        qfree((void *)ptr[0].m128i_i64[0]);
      }
    }
    v19 = v2[30];
    for ( m = v19 + 72LL * v2[31]; m != v19; v19 += 72 )
    {
      v48 = 0;
      src = nullptr;
      v46 = 0;
      v45 = nullptr;
      memset(ptr, 0, sizeof(ptr));
      v49 = 0;
      v45 = *(void **)v19;
      v46 = *(__m128i *)(v19 + 8);
      v28 = *(void **)(v19 + 48);
      *(_QWORD *)v19 = 0;
      *(_OWORD *)(v19 + 8) = 0;
      v29 = src;
      v30 = _mm_load_si128(&v48);
      src = v28;
      v48 = *(__m128i *)(v19 + 56);
      *(_QWORD *)(v19 + 48) = v29;
      *(__m128i *)(v19 + 56) = v30;
      v40 = nullptr;
      v41 = 0;
      v31 = *(const char **)(v19 + 24);
      if ( !(unsigned __int8)sub_87C660(ptr, v31, 128, &v40) )
        sub_365330();
      if ( (unk_2CACFE7 & 2) != 0 )
      {
        v42 = nullptr;
        v43 = 0;
        if ( v48.m128i_i64[0] )
        {
          n = v48.m128i_i64[0];
          v42 = (void *)qalloc_or_throw(v48.m128i_i64[0], v31);
          *((_QWORD *)&v43 + 1) = n;
          memcpy(v42, src, n);
          *(_QWORD *)&v43 = n;
        }
        sub_4B2A70((__int64)&v42, ",", "|comma|");
        if ( (*(_DWORD *)&debug & 0x2000000) != 0 )
          sub_383DA0();
        if ( v42 )
          qfree(v42);
      }
      v21 = v2[34];
      if ( v21 == v2[35] )
      {
        sub_4BF700((__int64)(v2 + 33), (__int64)ptr);
      }
      else
      {
        *(_QWORD *)(v21 + 32) = 0;
        *(_OWORD *)(v21 + 40) = 0;
        *(_OWORD *)(v21 + 64) = 0;
        *(_QWORD *)(v21 + 56) = 0;
        si128 = _mm_load_si128(ptr);
        v23 = v45;
        *(_BYTE *)(v21 + 80) = 1;
        *(__m128i *)v21 = si128;
        v24 = _mm_load_si128(&ptr[1]);
        *(_QWORD *)(v21 + 32) = v23;
        v25 = src;
        *(__m128i *)(v21 + 16) = v24;
        v26 = _mm_loadu_si128(&v46);
        v46 = 0;
        *(__m128i *)(v21 + 40) = v26;
        v27 = _mm_load_si128(&v48);
        v48 = 0;
        *(_QWORD *)(v21 + 56) = v25;
        *(__m128i *)(v21 + 64) = v27;
        v45 = nullptr;
        src = nullptr;
        memset(ptr, 0, sizeof(ptr));
        v49 = 0;
        v2[34] += 88LL;
      }
      if ( v40 )
      {
        *(_QWORD *)&v41 = 0;
        qfree(v40);
      }
      if ( ptr[1].m128i_i64[1] )
        qregfree(ptr);
      memset(ptr, 0, sizeof(ptr));
      if ( v45 )
      {
        v46.m128i_i64[0] = 0;
        qfree(v45);
        v45 = nullptr;
        v46.m128i_i64[1] = 0;
      }
      if ( src )
      {
        v48.m128i_i64[0] = 0;
        qfree(src);
      }
      v49 = 0;
      if ( v45 )
      {
        v46.m128i_i64[0] = 0;
        qfree(v45);
      }
    }
    sub_4BCA70((__int64)(v2 + 23));
    v32 = (char *)v2[30];
    if ( v32 )
    {
      v33 = v2[31];
      if ( v33 )
      {
        for ( ii = 0; ii != v33; ++ii )
        {
          v35 = &v32[72 * ii];
          v36 = *((void **)v35 + 6);
          if ( v36 )
          {
            *((_QWORD *)v35 + 7) = 0;
            qfree(v36);
          }
          v37 = *((void **)v35 + 3);
          if ( v37 )
          {
            *((_QWORD *)v35 + 4) = 0;
            qfree(v37);
          }
          v38 = *(void **)v35;
          if ( *(_QWORD *)v35 )
          {
            *((_QWORD *)v35 + 1) = 0;
            qfree(v38);
          }
          v32 = (char *)v2[30];
        }
      }
      v2[31] = 0;
      qfree(v32);
      v2[30] = 0;
      v2[32] = 0;
    }
  }
  return v50 - __readfsqword(0x28u);
}

