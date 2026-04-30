void __fastcall sub_503800(
        __m128i *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9)
{
  __m128 v12; // xmm1
  __int64 v13; // rcx
  unsigned __int64 v14; // xmm2_8
  __int64 v15; // rdx
  const __m128i *v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rsi
  void *v19; // r13
  const __m128i *v20; // rbp
  const __m128i *i; // r14
  __int64 v22; // rbx
  __int64 j; // r12
  volatile signed __int32 *v24; // rax
  __int64 v25; // rsi
  const __m128i *v26; // rsi
  __int64 v27; // rdi
  __m128i *v28; // rdx
  __m128i v29; // xmm0
  const __m128i *v30; // rsi
  __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  struct _Unwind_Exception *v38; // rbx
  __m128i v39; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+10h] [rbp-38h]
  unsigned __int64 v41; // [rsp+18h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  sub_503630(&v39, a1->m128i_i64, a3, a2, a5, a6);
  v12 = (__m128)_mm_load_si128(&v39);
  v13 = v40;
  v14 = _mm_movehl_ps(a9, v12).m128_u64[0];
  if ( a3 <= 0 )
  {
    v15 = a1[1].m128i_i64[0];
    if ( !v15 )
    {
LABEL_4:
      v16 = (const __m128i *)a1->m128i_i64[1];
LABEL_5:
      v17 = _mm_loadl_epi64(a1);
      a1[1].m128i_i64[0] = v13;
      *a1 = (__m128i)v12;
      if ( a4 )
      {
        v18 = *(_QWORD *)(a4 + 16);
        *(_QWORD *)(a4 + 16) = v15;
        v19 = *(void **)a4;
        v20 = *(const __m128i **)(a4 + 8);
        *(__m128i *)a4 = _mm_unpacklo_epi64(v17, (__m128i)(unsigned __int64)v16);
      }
      else
      {
        v18 = v15;
        v20 = v16;
        v19 = (void *)v17.m128i_i64[0];
      }
      goto LABEL_7;
    }
    v15 += a3;
  }
  else
  {
    if ( !v14 )
    {
      v38 = (struct _Unwind_Exception *)QT::qBadAlloc();
      v39.m128i_i64[1] = 0;
      sub_4FC3D0((__int64)&v39);
      _Unwind_Resume(v38);
    }
    v15 = a1[1].m128i_i64[0];
    if ( !v15 )
      goto LABEL_4;
  }
  v25 = 24 * v15;
  if ( !a1->m128i_i64[0] || a4 || *(int *)a1->m128i_i64[0] > 1 )
  {
    v16 = (const __m128i *)a1->m128i_i64[1];
    v26 = (const __m128i *)((char *)v16 + v25);
    if ( v26 != v16 && v16 < v26 )
    {
      v27 = v40 + 1;
      v28 = (__m128i *)(v14 + 24 * v40);
      while ( 1 )
      {
        v29 = _mm_loadu_si128(v16);
        v28[1].m128i_i64[0] = v16[1].m128i_i64[0];
        *v28 = v29;
        if ( v29.m128i_i64[0] )
          _InterlockedAdd((volatile signed __int32 *)v29.m128i_i64[0], 1u);
        v16 = (const __m128i *)((char *)v16 + 24);
        v28 = (__m128i *)((char *)v28 + 24);
        if ( v16 >= v26 )
          break;
        ++v27;
      }
      v16 = (const __m128i *)a1->m128i_i64[1];
      v13 = v27;
    }
    v15 = a1[1].m128i_i64[0];
    goto LABEL_5;
  }
  v20 = (const __m128i *)a1->m128i_i64[1];
  if ( v25 && (v30 = (const __m128i *)((char *)v20 + v25), v20 < v30) )
  {
    v31 = v40 + 1;
    v32 = v14 + 24 * v40 - (_QWORD)v20;
    do
    {
      v33 = v20->m128i_i64[0];
      v34 = (__int64 *)((char *)v20->m128i_i64 + v32);
      v20 = (const __m128i *)((char *)v20 + 24);
      v20[-2].m128i_i64[1] = 0;
      *v34 = v33;
      v35 = v20[-1].m128i_i64[0];
      v20[-1].m128i_i64[0] = 0;
      v34[1] = v35;
      v36 = v20[-1].m128i_i64[1];
      v20[-1].m128i_i64[1] = 0;
      v34[2] = v36;
      v37 = v31++;
    }
    while ( v20 < v30 );
    v20 = (const __m128i *)a1->m128i_i64[1];
    v18 = a1[1].m128i_i64[0];
    a1[1].m128i_i64[0] = v37;
    v19 = (void *)a1->m128i_i64[0];
    *a1 = (__m128i)v12;
  }
  else
  {
    v19 = (void *)a1->m128i_i64[0];
    v18 = a1[1].m128i_i64[0];
    *a1 = (__m128i)v12;
    a1[1].m128i_i64[0] = v13;
  }
LABEL_7:
  if ( v19 && !_InterlockedSub((volatile signed __int32 *)v19, 1u) )
  {
    for ( i = (const __m128i *)((char *)v20 + 24 * v18); i != v20; v20 = (const __m128i *)((char *)v20 + 24) )
    {
      if ( v20->m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v20->m128i_i64[0], 1u) )
      {
        v22 = v20->m128i_i64[1];
        for ( j = v22 + 96 * v20[1].m128i_i64[0]; j != v22; v22 += 96 )
        {
          v24 = *(volatile signed __int32 **)(v22 + 56);
          if ( v24 )
          {
            if ( !_InterlockedSub(v24, 1u) )
              free(*(void **)(v22 + 56));
          }
        }
        free((void *)v20->m128i_i64[0]);
      }
    }
    free(v19);
  }
}
