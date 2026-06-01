unsigned __int64 __fastcall sub_4D69D0(__int64 a1)
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
  char *v31; // rdi
  __int64 v32; // r13
  __int64 ii; // r12
  char *v34; // rbx
  void *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  __int64 n; // [rsp+18h] [rbp-E0h]
  void *v39; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+28h] [rbp-D0h]
  void *v41; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v42; // [rsp+48h] [rbp-B0h]
  __m128i ptr[2]; // [rsp+60h] [rbp-98h] BYREF
  void *v44; // [rsp+80h] [rbp-78h]
  __m128i v45; // [rsp+88h] [rbp-70h] BYREF
  void *src; // [rsp+98h] [rbp-60h]
  __m128i v47; // [rsp+A0h] [rbp-58h] BYREF
  char v48; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v49; // [rsp+B8h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1672) + 608LL) )
  {
    v2 = *(_QWORD **)(a1 + 1720);
    sub_4D39C0((__int64)(v2 + 24));
    v3 = (char *)v2[31];
    if ( v3 )
    {
      v4 = v2[32];
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
          v3 = (char *)v2[31];
        }
      }
      v2[32] = 0;
      qfree(v3);
      v2[31] = 0;
      v2[33] = 0;
    }
    v10 = v2[34];
    v11 = v2[35];
    if ( v10 != v11 )
    {
      v12 = v2[34];
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
      v2[35] = v10;
    }
    read_config((unsigned int)"goodname", 1, (unsigned int)&off_2B2D280, 2, (unsigned int)sub_5FEFB0, 0, 0);
    for ( j = (__int64 **)v2[26]; j; j = (__int64 **)*j )
    {
      memset(ptr, 0, 24);
      sub_35A790((char **)ptr);
      v17 = v2[31];
      for ( k = v17 + 72LL * v2[32]; k != v17; v17 += 72 )
        sub_4C9730(v17 + 24, (const char *)ptr[0].m128i_i64[0], (const char *)j[2]);
      if ( ptr[0].m128i_i64[0] )
      {
        ptr[0].m128i_i64[1] = 0;
        qfree((void *)ptr[0].m128i_i64[0]);
      }
    }
    v19 = v2[31];
    for ( m = v19 + 72LL * v2[32]; m != v19; v19 += 72 )
    {
      v47 = 0;
      src = nullptr;
      v45 = 0;
      v44 = nullptr;
      memset(ptr, 0, sizeof(ptr));
      v48 = 0;
      v44 = *(void **)v19;
      v45 = *(__m128i *)(v19 + 8);
      v28 = *(void **)(v19 + 48);
      *(_QWORD *)v19 = 0;
      *(_OWORD *)(v19 + 8) = 0;
      v29 = src;
      v30 = _mm_load_si128(&v47);
      src = v28;
      v47 = *(__m128i *)(v19 + 56);
      *(_QWORD *)(v19 + 48) = v29;
      *(__m128i *)(v19 + 56) = v30;
      v39 = nullptr;
      v40 = 0;
      if ( !(unsigned __int8)sub_89FFE0(ptr, *(_QWORD *)(v19 + 24), 128, &v39) )
        sub_368890();
      if ( (unk_2CD6F07 & 2) != 0 )
      {
        v41 = nullptr;
        v42 = 0;
        if ( v47.m128i_i64[0] )
        {
          n = v47.m128i_i64[0];
          v41 = (void *)qalloc_or_throw(v47.m128i_i64[0]);
          *((_QWORD *)&v42 + 1) = n;
          memcpy(v41, src, n);
          *(_QWORD *)&v42 = n;
        }
        sub_4C9730((__int64)&v41, ",", "|comma|");
        if ( (*(_DWORD *)&debug & 0x2000000) != 0 )
          sub_3879F0();
        if ( v41 )
          qfree(v41);
      }
      v21 = v2[35];
      if ( v21 == v2[36] )
      {
        sub_4D67C0((__int64)(v2 + 34), (__int64)ptr);
      }
      else
      {
        *(_QWORD *)(v21 + 32) = 0;
        *(_OWORD *)(v21 + 40) = 0;
        *(_OWORD *)(v21 + 64) = 0;
        *(_QWORD *)(v21 + 56) = 0;
        si128 = _mm_load_si128(ptr);
        v23 = v44;
        *(_BYTE *)(v21 + 80) = 1;
        *(__m128i *)v21 = si128;
        v24 = _mm_load_si128(&ptr[1]);
        *(_QWORD *)(v21 + 32) = v23;
        v25 = src;
        *(__m128i *)(v21 + 16) = v24;
        v26 = _mm_loadu_si128(&v45);
        v45 = 0;
        *(__m128i *)(v21 + 40) = v26;
        v27 = _mm_load_si128(&v47);
        v47 = 0;
        *(_QWORD *)(v21 + 56) = v25;
        *(__m128i *)(v21 + 64) = v27;
        v44 = nullptr;
        src = nullptr;
        memset(ptr, 0, sizeof(ptr));
        v48 = 0;
        v2[35] += 88LL;
      }
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
      if ( ptr[1].m128i_i64[1] )
        qregfree(ptr);
      memset(ptr, 0, sizeof(ptr));
      if ( v44 )
      {
        v45.m128i_i64[0] = 0;
        qfree(v44);
        v44 = nullptr;
        v45.m128i_i64[1] = 0;
      }
      if ( src )
      {
        v47.m128i_i64[0] = 0;
        qfree(src);
      }
      v48 = 0;
      if ( v44 )
      {
        v45.m128i_i64[0] = 0;
        qfree(v44);
      }
    }
    sub_4D39C0((__int64)(v2 + 24));
    v31 = (char *)v2[31];
    if ( v31 )
    {
      v32 = v2[32];
      if ( v32 )
      {
        for ( ii = 0; ii != v32; ++ii )
        {
          v34 = &v31[72 * ii];
          v35 = *((void **)v34 + 6);
          if ( v35 )
          {
            *((_QWORD *)v34 + 7) = 0;
            qfree(v35);
          }
          v36 = *((void **)v34 + 3);
          if ( v36 )
          {
            *((_QWORD *)v34 + 4) = 0;
            qfree(v36);
          }
          v37 = *(void **)v34;
          if ( *(_QWORD *)v34 )
          {
            *((_QWORD *)v34 + 1) = 0;
            qfree(v37);
          }
          v31 = (char *)v2[31];
        }
      }
      v2[32] = 0;
      qfree(v31);
      v2[31] = 0;
      v2[33] = 0;
    }
  }
  return v49 - __readfsqword(0x28u);
}
