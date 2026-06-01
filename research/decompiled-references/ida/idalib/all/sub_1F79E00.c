__int64 __fastcall sub_1F79E00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char *v3; // r12
  char v4; // dl
  __int64 v5; // rax
  unsigned __int64 v7; // rdx
  __int64 v9; // rax
  char v10; // dl
  __m128i v11; // xmm0
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r13
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  const void *v18; // rsi
  __int64 v19; // r15
  __int64 *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // r12
  size_t v26; // rdx
  __m128i v27[4]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(char **)(a1 + 72);
  if ( v2 == *(_QWORD *)(a1 + 64) - 16LL )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 - ((__int64)&v3[-*(_QWORD *)a1] >> 3) <= 1 )
    {
      v12 = *(char **)(a1 + 40);
      v13 = (v3 - v12) >> 3;
      v14 = v13 + 2;
      v15 = v13 + 1;
      if ( v7 > 2 * (v13 + 2) )
      {
        v25 = v3 + 8;
        v22 = v15;
        v20 = (__int64 *)(*(_QWORD *)a1 + 8 * ((v7 - v14) >> 1));
        v26 = v25 - v12;
        if ( v12 <= (char *)v20 )
        {
          if ( v25 != v12 )
            memmove((char *)v20 + v22 * 8 - v26, v12, v26);
        }
        else if ( v25 != v12 )
        {
          memmove(v20, v12, v26);
        }
      }
      else
      {
        if ( v7 )
        {
          v16 = 2 * v7 + 2;
          if ( v16 > 0x1FFFFFFFFFFFFFFFLL )
            std::__throw_bad_alloc();
        }
        else
        {
          v16 = 3;
        }
        v17 = operator new(8 * v16);
        v18 = *(const void **)(a1 + 40);
        v19 = v17;
        v20 = (__int64 *)(v17 + 8 * ((v16 - v14) >> 1));
        v21 = *(_QWORD *)(a1 + 72) + 8LL;
        if ( (const void *)v21 != v18 )
          memmove(v20, v18, v21 - (_QWORD)v18);
        v22 = v15;
        operator delete(*(void **)a1);
        *(_QWORD *)a1 = v19;
        *(_QWORD *)(a1 + 8) = v16;
      }
      v23 = *v20;
      v3 = (char *)&v20[v22 - 1];
      *(_QWORD *)(a1 + 40) = v20;
      *(_QWORD *)(a1 + 72) = v3;
      v27[0].m128i_i64[0] = v23 + 512;
      *(__m128 *)(a1 + 24) = _mm_loadh_ps((const double *)v27[0].m128i_i64);
      v24 = *(_QWORD *)v3;
      *(_QWORD *)(a1 + 56) = *(_QWORD *)v3;
      *(_QWORD *)(a1 + 64) = v24 + 512;
    }
    *((_QWORD *)v3 + 1) = operator new(0x200u);
    v9 = *(_QWORD *)(a1 + 48);
    v10 = *(_BYTE *)(a2 + 8);
    *(_QWORD *)v9 = *(_QWORD *)a2;
    *(_BYTE *)(v9 + 8) = v10;
    v3 = (char *)(*(_QWORD *)(a1 + 72) + 8LL);
    v27[0].m128i_i64[0] = *(_QWORD *)v3;
    v11 = _mm_loadl_epi64(v27);
    *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v11, v11);
    v27[0].m128i_i64[0] = (__int64)v3;
    *(__m128 *)(a1 + 64) = _mm_loadh_ps((const double *)v27[0].m128i_i64);
    goto LABEL_6;
  }
  v4 = *(_BYTE *)(a2 + 8);
  v5 = v2 + 16;
  *(_QWORD *)(v5 - 16) = *(_QWORD *)a2;
  *(_BYTE *)(v5 - 8) = v4;
  *(_QWORD *)(a1 + 48) = v5;
  if ( v5 == *(_QWORD *)(a1 + 56) )
LABEL_6:
    v5 = *((_QWORD *)v3 - 1) + 512LL;
  return v5 - 16;
}
