_QWORD *__fastcall dirtree_new_shadow_dirtree_0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char *v7; // rdi
  __int64 v8; // r14
  __int64 i; // r13
  void **v10; // rbx
  _QWORD *v11; // r15
  void *v12; // rdi
  char *v13; // rdi
  _QWORD *v14; // r15
  void *v15; // rdi
  char *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  unsigned __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // r14
  const char *v22; // rsi
  void *v23; // rdi
  __m128i si128; // xmm0
  size_t v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r13
  size_t v28; // r9
  size_t v29; // r10
  unsigned __int64 v30; // rax
  void *v31; // rax
  void *v32; // rax
  _QWORD *result; // rax
  const char *v34; // r15
  void *v35; // rdi
  void *v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // [rsp+0h] [rbp-58h]
  unsigned __int64 v40; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+8h] [rbp-50h]
  __int64 na; // [rsp+8h] [rbp-50h]
  size_t nc; // [rsp+8h] [rbp-50h]
  size_t nb; // [rsp+8h] [rbp-50h]
  __m128i v45[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = operator new(0x90u);
  v3 = a1[5];
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &unk_2BD1C50;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = v3;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_OWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 80) = 0;
  *(_OWORD *)(v2 + 120) = 0;
  reset_dirtree_0(v2);
  *(_QWORD *)v2 = &off_2B0F590;
  sub_75F180((__int64)a1, 1, nullptr);
  v7 = *(char **)(v2 + 48);
  *(_BYTE *)(v2 + 106) = 0;
  if ( v7 )
  {
    v39 = *(_QWORD *)(v2 + 56);
    if ( v39 )
    {
      v8 = 0;
      for ( i = 0; i != v39; ++i )
      {
        v10 = (void **)&v7[v8];
        v11 = *(_QWORD **)&v7[v8 + 120];
        while ( v11 )
        {
          v12 = v11;
          v11 = (_QWORD *)*v11;
          operator delete(v12, 0x10u);
        }
        memset(v10[13], 0, 8LL * (_QWORD)v10[14]);
        v13 = (char *)v10[13];
        v10[16] = nullptr;
        v10[15] = nullptr;
        if ( v13 != (char *)(v10 + 19) )
          operator delete(v13, 8LL * (_QWORD)v10[14]);
        v14 = v10[8];
        while ( v14 )
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
          operator delete(v15, 0x10u);
        }
        memset(v10[6], 0, 8LL * (_QWORD)v10[7]);
        v16 = (char *)v10[6];
        v10[9] = nullptr;
        v10[8] = nullptr;
        if ( v16 != (char *)(v10 + 12) )
          operator delete(v16, 8LL * (_QWORD)v10[7]);
        v17 = v10[3];
        if ( v17 )
        {
          v10[4] = nullptr;
          qfree(v17);
        }
        v18 = *v10;
        if ( *v10 )
        {
          v10[1] = nullptr;
          qfree(v18);
        }
        v7 = *(char **)(v2 + 48);
        v8 += 176;
      }
    }
    *(_QWORD *)(v2 + 56) = 0;
    qfree(v7);
    *(_QWORD *)(v2 + 48) = 0;
    *(_QWORD *)(v2 + 64) = 0;
  }
  v19 = a1[7];
  v20 = 0;
  v21 = 0;
  v22 = (const char *)v19;
  v40 = v19;
  sub_75D340((__int64 *)(v2 + 48), v19, v4, v5, v6);
  if ( v19 )
  {
    do
    {
      v26 = v20 + a1[6];
      v27 = v20 + *(_QWORD *)(v2 + 48);
      if ( v26 != v27 )
      {
        v28 = *(_QWORD *)(v26 + 8);
        if ( v28 && (v29 = v28 - 1, v28 != 1) )
        {
          v34 = *(const char **)v26;
          v35 = *(void **)v27;
          if ( *(_QWORD *)(v27 + 16) < v28 )
          {
            v36 = *(void **)v27;
            v37 = v20 + *(_QWORD *)(v2 + 48);
            v45[0].m128i_i64[0] = v28 - 1;
            nb = v28;
            v38 = qvector_reserve(v37, v36, v28, 1);
            v29 = v45[0].m128i_i64[0];
            v28 = nb;
            *(_QWORD *)v27 = v38;
            v35 = (void *)v38;
          }
          *(_QWORD *)(v27 + 8) = v28;
          v22 = v34;
          nc = v28;
          memmove(v35, v34, v29);
          *(_BYTE *)(*(_QWORD *)v27 + nc - 1) = 0;
          v27 = v20 + *(_QWORD *)(v2 + 48);
          v26 = v20 + a1[6];
        }
        else
        {
          *(_QWORD *)(v27 + 8) = 0;
          v27 = v20 + *(_QWORD *)(v2 + 48);
          v26 = v20 + a1[6];
        }
      }
      v30 = *(_QWORD *)(v26 + 32);
      v25 = 0;
      si128 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      if ( v30 )
      {
        v45[0] = si128;
        na = 5 * v30;
        v31 = (void *)qalloc_or_throw(5 * v30, v22, 5 * v30, 0);
        v22 = *(const char **)(v26 + 24);
        v32 = memcpy(v31, v22, na);
        si128 = _mm_load_si128(v45);
        v25 = (size_t)v32;
      }
      v23 = *(void **)(v27 + 24);
      if ( v23 )
      {
        *(_QWORD *)(v27 + 32) = 0;
        n = v25;
        v45[0] = si128;
        qfree(v23);
        si128 = _mm_load_si128(v45);
        v25 = n;
      }
      *(_QWORD *)(v27 + 24) = v25;
      ++v21;
      *(__m128i *)(v27 + 32) = si128;
      *(_DWORD *)(*(_QWORD *)(v2 + 48) + v20 + 160) = *(_DWORD *)(a1[6] + v20 + 160);
      *(_DWORD *)(*(_QWORD *)(v2 + 48) + v20 + 164) = *(_DWORD *)(a1[6] + v20 + 164);
      *(_DWORD *)(*(_QWORD *)(v2 + 48) + v20 + 168) = *(_DWORD *)(a1[6] + v20 + 168);
      v20 += 176;
    }
    while ( v40 != v21 );
  }
  result = (_QWORD *)operator new(8u);
  *result = v2;
  return result;
}

