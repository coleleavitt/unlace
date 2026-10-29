__int64 *__fastcall dirtree_new_shadow_dirtree_0(_QWORD *a1)
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
  void *v22; // rdi
  __m128i si128; // xmm0
  size_t v24; // rcx
  __int64 v25; // r15
  __int64 v26; // r13
  size_t v27; // r9
  size_t v28; // r10
  unsigned __int64 v29; // rax
  void *v30; // rax
  void *v31; // rax
  __int64 *result; // rax
  const void *v33; // r15
  void *v34; // rdi
  void *v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // [rsp+0h] [rbp-58h]
  unsigned __int64 v39; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+8h] [rbp-50h]
  __int64 na; // [rsp+8h] [rbp-50h]
  size_t nc; // [rsp+8h] [rbp-50h]
  size_t nb; // [rsp+8h] [rbp-50h]
  __m128i v44[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = operator new(0x90u);
  v3 = a1[5];
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &unk_2BFBC50;
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
  *(_QWORD *)v2 = &off_2B39530;
  sub_77F5C0((__int64)a1, 1, nullptr);
  v7 = *(char **)(v2 + 48);
  *(_BYTE *)(v2 + 110) = 0;
  if ( v7 )
  {
    v38 = *(_QWORD *)(v2 + 56);
    if ( v38 )
    {
      v8 = 0;
      for ( i = 0; i != v38; ++i )
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
  v39 = v19;
  sub_77D7A0((__int64 *)(v2 + 48), v19, v4, v5, v6);
  if ( v19 )
  {
    do
    {
      v25 = v20 + a1[6];
      v26 = v20 + *(_QWORD *)(v2 + 48);
      if ( v25 != v26 )
      {
        v27 = *(_QWORD *)(v25 + 8);
        if ( v27 && (v28 = v27 - 1, v27 != 1) )
        {
          v33 = *(const void **)v25;
          v34 = *(void **)v26;
          if ( *(_QWORD *)(v26 + 16) < v27 )
          {
            v35 = *(void **)v26;
            v36 = v20 + *(_QWORD *)(v2 + 48);
            v44[0].m128i_i64[0] = v27 - 1;
            nb = v27;
            v37 = qvector_reserve(v36, v35, v27, 1);
            v28 = v44[0].m128i_i64[0];
            v27 = nb;
            *(_QWORD *)v26 = v37;
            v34 = (void *)v37;
          }
          *(_QWORD *)(v26 + 8) = v27;
          nc = v27;
          memmove(v34, v33, v28);
          *(_BYTE *)(*(_QWORD *)v26 + nc - 1) = 0;
          v26 = v20 + *(_QWORD *)(v2 + 48);
          v25 = v20 + a1[6];
        }
        else
        {
          *(_QWORD *)(v26 + 8) = 0;
          v26 = v20 + *(_QWORD *)(v2 + 48);
          v25 = v20 + a1[6];
        }
      }
      v29 = *(_QWORD *)(v25 + 32);
      v24 = 0;
      si128 = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
      if ( v29 )
      {
        v44[0] = si128;
        na = 9 * v29;
        v30 = (void *)qalloc_or_throw(9 * v29);
        v31 = memcpy(v30, *(const void **)(v25 + 24), na);
        si128 = _mm_load_si128(v44);
        v24 = (size_t)v31;
      }
      v22 = *(void **)(v26 + 24);
      if ( v22 )
      {
        *(_QWORD *)(v26 + 32) = 0;
        n = v24;
        v44[0] = si128;
        qfree(v22);
        si128 = _mm_load_si128(v44);
        v24 = n;
      }
      *(_QWORD *)(v26 + 24) = v24;
      ++v21;
      *(__m128i *)(v26 + 32) = si128;
      *(_QWORD *)(*(_QWORD *)(v2 + 48) + v20 + 160) = *(_QWORD *)(a1[6] + v20 + 160);
      *(_DWORD *)(*(_QWORD *)(v2 + 48) + v20 + 168) = *(_DWORD *)(a1[6] + v20 + 168);
      *(_DWORD *)(*(_QWORD *)(v2 + 48) + v20 + 172) = *(_DWORD *)(a1[6] + v20 + 172);
      v20 += 176;
    }
    while ( v39 != v21 );
  }
  result = (__int64 *)operator new(8u);
  *result = v2;
  return result;
}
