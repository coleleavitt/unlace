__int64 __fastcall sub_3FA70(__int64 a1, __int64 a2, __int64 a3, double a4, __m128i a5, __m128i a6, __m128i a7)
{
  bool v8; // zf
  __m128 v10; // xmm0
  __int64 v11; // r14
  __m128i v12; // xmm0
  __int64 v14; // rdi
  __m128 v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 i; // r14
  __int64 v21; // rax
  __int64 v22; // rdi
  __m128i v23; // xmm3
  __int64 v24; // rax
  __m128i v25; // xmm0
  __m128 v26; // xmm0
  __int64 v27; // r12
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __m128i v30; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v31; // [rsp+10h] [rbp-98h] BYREF
  __int64 v32; // [rsp+20h] [rbp-88h] BYREF
  __m128 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+40h] [rbp-68h] BYREF
  __m128i v35; // [rsp+48h] [rbp-60h] BYREF
  __m128i v36; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]

  v8 = *(_BYTE *)(a3 + 32) == 0;
  v37 = __readfsqword(0x28u);
  if ( v8 )
  {
    if ( !*(_BYTE *)(a3 + 48) )
      goto LABEL_3;
LABEL_12:
    v15 = _mm_loadh_ps((const double *)(a2 + 16));
    v32 = *(_QWORD *)a2;
    v33 = v15;
    sub_3E7D0((__int64)&v34, (__int64)&v32, *(double *)v15.m128_u64, a5, a6, a7);
    v16 = _mm_loadu_si128(&v35);
    if ( v36.m128i_i8[8] )
    {
      *(_QWORD *)a1 = v34;
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v16;
      return a1;
    }
    v17 = _mm_loadl_epi64(&v36);
    v18 = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a3 + 120) = v34;
    v30 = v16;
    v31 = _mm_unpackhi_epi64(v16, _mm_unpacklo_epi64(v17, v17));
    if ( v18 )
    {
      v19 = *(_QWORD *)(a3 + 136);
      if ( v19 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v21 = v18 + (i << 6);
          v22 = *(_QWORD *)(v21 + 40);
          if ( v22 )
          {
            *(_QWORD *)(v21 + 48) = 0;
            qfree(v22);
            v18 = *(_QWORD *)(a3 + 128);
          }
        }
      }
      *(_QWORD *)(a3 + 136) = 0;
      qfree(v18);
    }
    v23 = _mm_load_si128(&v31);
    *(_QWORD *)(a3 + 128) = v30.m128i_i64[0];
    *(__m128i *)(a3 + 136) = v23;
    goto LABEL_3;
  }
  v10 = _mm_loadh_ps((const double *)(a2 + 16));
  v32 = *(_QWORD *)a2;
  v33 = v10;
  sub_3F5C0((__int64)&v34, &v32, *(double *)v10.m128_u64, *(double *)a5.m128i_i64, *(double *)a6.m128i_i64);
  v11 = v34;
  v12 = _mm_loadu_si128(&v35);
  if ( v36.m128i_i8[0] )
  {
    *(_QWORD *)a1 = v34;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v12;
    return a1;
  }
  v14 = *(_QWORD *)(a3 + 96);
  if ( v14 )
  {
    *(_QWORD *)(a3 + 104) = 0;
    v30 = v12;
    qfree(v14);
    v12 = _mm_load_si128(&v30);
  }
  v8 = *(_BYTE *)(a3 + 48) == 0;
  *(_QWORD *)(a3 + 96) = v11;
  *(__m128i *)(a3 + 104) = v12;
  if ( !v8 )
    goto LABEL_12;
LABEL_3:
  sub_3D680((__int64)&v34, (_QWORD *)a2, a3);
  if ( v36.m128i_i8[0] )
  {
    v24 = v34;
    v25 = _mm_loadu_si128(&v35);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v24;
    *(__m128i *)(a1 + 8) = v25;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 64) )
    {
      v26 = _mm_loadh_ps((const double *)(a2 + 16));
      v32 = *(_QWORD *)a2;
      v33 = v26;
      sub_3D220((__int64)&v34, &v32);
      v27 = v34;
      v28 = _mm_loadu_si128(&v35);
      if ( v36.m128i_i8[0] )
      {
        *(_QWORD *)a1 = v34;
        *(_BYTE *)(a1 + 24) = 1;
        *(__m128i *)(a1 + 8) = v28;
        return a1;
      }
      v29 = *(_QWORD *)(a3 + 152);
      if ( v29 )
      {
        *(_QWORD *)(a3 + 160) = 0;
        v30 = v28;
        qfree(v29);
        v28 = _mm_load_si128(&v30);
      }
      *(_QWORD *)(a3 + 152) = v27;
      *(__m128i *)(a3 + 160) = v28;
    }
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
