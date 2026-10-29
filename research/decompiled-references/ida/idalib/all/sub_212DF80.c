__int64 __fastcall sub_212DF80(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rax
  char *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rdi
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __m128i v30; // xmm0
  char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r13
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  const void *v36; // rsi
  void *v37; // r8
  __int64 v38; // rdx
  _BYTE *v39; // rdi
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 *v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  char *v45; // r14
  size_t v46; // rdx
  __m128i v47[4]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(char **)(a1 + 72);
  if ( v4 == *(_QWORD *)(a1 + 64) - 88LL )
  {
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(_BYTE **)a1;
    if ( v17 - ((v5 - v18) >> 3) <= 1 )
    {
      v31 = *(char **)(a1 + 40);
      v32 = (v5 - v31) >> 3;
      v33 = v32 + 1;
      if ( v17 > 2 * (v32 + 2) )
      {
        v45 = v5 + 8;
        v40 = v33;
        v42 = (__int64 *)&v18[8 * ((v17 - (v32 + 2)) >> 1)];
        v46 = v45 - v31;
        if ( v31 <= (char *)v42 )
        {
          if ( v31 != v45 )
          {
            v47[0].m128i_i64[0] = (__int64)v42;
            memmove((char *)v42 + v40 * 8 - v46, v31, v46);
            v42 = (__int64 *)v47[0].m128i_i64[0];
          }
        }
        else if ( v31 != v45 )
        {
          v42 = (__int64 *)memmove(v42, v31, v46);
        }
      }
      else
      {
        if ( v17 )
        {
          v34 = 2 * v17 + 2;
          if ( v34 > 0x1FFFFFFFFFFFFFFFLL )
            std::__throw_bad_alloc();
        }
        else
        {
          v34 = 3;
        }
        v47[0].m128i_i64[1] = v32 + 2;
        v35 = operator new(8 * v34);
        v36 = *(const void **)(a1 + 40);
        v47[0].m128i_i64[0] = v35;
        v37 = (void *)(v35 + 8 * ((v34 - v47[0].m128i_i64[1]) >> 1));
        v38 = *(_QWORD *)(a1 + 72) + 8LL;
        if ( (const void *)v38 != v36 )
          v37 = memmove(v37, v36, v38 - (_QWORD)v36);
        v39 = *(_BYTE **)a1;
        v47[0].m128i_i64[1] = (__int64)v37;
        v40 = v33;
        operator delete(v39);
        v41 = v47[0].m128i_i64[0];
        *(_QWORD *)(a1 + 8) = v34;
        v42 = (__int64 *)v47[0].m128i_i64[1];
        *(_QWORD *)a1 = v41;
      }
      v43 = *v42;
      v5 = (char *)&v42[v40 - 1];
      *(_QWORD *)(a1 + 40) = v42;
      *(_QWORD *)(a1 + 72) = v5;
      v47[0].m128i_i64[0] = v43 + 440;
      *(__m128 *)(a1 + 24) = _mm_loadh_ps((const double *)v47[0].m128i_i64);
      v44 = *(_QWORD *)v5;
      *(_QWORD *)(a1 + 56) = *(_QWORD *)v5;
      *(_QWORD *)(a1 + 64) = v44 + 440;
    }
    v21 = operator new(0x1B8u);
    v22 = *a2;
    v23 = *a3;
    v24 = a2[1];
    v25 = a3[1];
    *((_QWORD *)v5 + 1) = v21;
    v26 = *a4;
    v27 = *(_QWORD *)(a1 + 48);
    v28 = a4[1];
    v29 = a4[2];
    *(_OWORD *)a4 = 0;
    a4[2] = 0;
    *(_QWORD *)(v27 + 8) = v24;
    *(_OWORD *)(v27 + 64) = 0;
    *(_QWORD *)v27 = v22;
    *(_QWORD *)(v27 + 16) = v23;
    *(_QWORD *)(v27 + 24) = v25;
    *(_QWORD *)(v27 + 32) = v26;
    *(_QWORD *)(v27 + 40) = v28;
    *(_QWORD *)(v27 + 48) = v29;
    *(_QWORD *)(v27 + 56) = 0;
    *(_BYTE *)(v27 + 80) = 0;
    *(_DWORD *)(v27 + 84) = 0;
    v5 = (char *)(*(_QWORD *)(a1 + 72) + 8LL);
    v47[0].m128i_i64[0] = *(_QWORD *)v5;
    v30 = _mm_loadl_epi64(v47);
    *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v30, v30);
    v47[0].m128i_i64[0] = (__int64)v5;
    *(__m128 *)(a1 + 64) = _mm_loadh_ps((const double *)v47[0].m128i_i64);
    goto LABEL_6;
  }
  v6 = *a2;
  v7 = a2[1];
  v8 = v4 + 88;
  v9 = *a3;
  v10 = a3[1];
  v11 = *a4;
  v12 = a4[1];
  *(_OWORD *)a4 = 0;
  v13 = a4[2];
  a4[2] = 0;
  *(_QWORD *)(v8 - 88) = v6;
  *(_QWORD *)(v8 - 80) = v7;
  *(_QWORD *)(v8 - 72) = v9;
  *(_QWORD *)(v8 - 64) = v10;
  *(_QWORD *)(v8 - 56) = v11;
  *(_QWORD *)(v8 - 48) = v12;
  *(_QWORD *)(v8 - 40) = v13;
  *(_QWORD *)(v8 - 32) = 0;
  *(_OWORD *)(v8 - 24) = 0;
  *(_BYTE *)(v8 - 8) = 0;
  *(_DWORD *)(v8 - 4) = 0;
  *(_QWORD *)(a1 + 48) = v8;
  if ( v8 == *(_QWORD *)(a1 + 56) )
LABEL_6:
    v8 = *((_QWORD *)v5 - 1) + 440LL;
  return v8 - 88;
}
