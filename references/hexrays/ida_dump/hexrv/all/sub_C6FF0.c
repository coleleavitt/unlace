unsigned __int64 __fastcall sub_C6FF0(
        __int64 *a1,
        __m128i *a2,
        __int64 a3,
        unsigned int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // rax
  __m128 v16; // xmm0
  double v17; // rbp
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rdi
  double v22; // rsi
  __m128i v23; // xmm1
  __int64 v24; // r9
  __m128i v25; // xmm2
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i si128; // xmm0
  __m128 v29; // xmm4
  __int64 v31; // r13
  __int64 v32; // r12
  unsigned __int64 v33; // r15
  signed int **v34; // r8
  double v35; // rbx
  __int64 v36; // rbp
  __int64 *v37; // rdi
  __int64 v38; // r14
  __int64 v39; // rdx
  __m128i v41; // [rsp+10h] [rbp-D8h] BYREF
  __m128i *v42; // [rsp+20h] [rbp-C8h]
  signed int **v43; // [rsp+28h] [rbp-C0h]
  signed int **v44; // [rsp+30h] [rbp-B8h]
  __int64 v45; // [rsp+38h] [rbp-B0h]
  __m128 v46; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v47; // [rsp+50h] [rbp-98h] BYREF
  __m128 v48; // [rsp+60h] [rbp-88h] BYREF
  __m128i v49; // [rsp+70h] [rbp-78h]
  __m128i v50; // [rsp+80h] [rbp-68h] BYREF
  __m128i v51; // [rsp+90h] [rbp-58h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-40h]

  v13 = a1[2];
  v14 = *a1;
  v15 = a1[3];
  v16 = (__m128)_mm_loadu_si128(a2);
  v52 = __readfsqword(0x28u);
  v17 = *(double *)&a2[1].m128i_i64[1];
  v43 = (signed int **)&v46;
  v18 = 0xAAAAAAAAAAAAAAABLL * ((v13 - v14) >> 2);
  v19 = _mm_movehl_ps(a10, v16).m128_u64[0];
  v42 = &v50;
  v20 = v16.m128_u64[0];
  if ( (__int64)(v18
               + 0xAAAAAAAAAAAAAAABLL * ((__int64)(v16.m128_u64[0] - v19) >> 2)
               + 42 * ((*(_QWORD *)&v17 == 0) + ((*(_QWORD *)&v17 - v15) >> 3) - 1)) > 16 )
  {
    v21 = v14;
    v22 = v17;
    while ( 1 )
    {
      v23 = _mm_loadl_epi64(a2 + 1);
      v24 = a1[1];
      v25 = _mm_unpacklo_epi64(v23, (__m128i)*(unsigned __int64 *)&v22);
      if ( !a3 )
        break;
      v48.m128_u64[0] = v21;
      v48.m128_u64[1] = v24;
      --a3;
      v49.m128i_i64[0] = v13;
      v49.m128i_i64[1] = v15;
      v50 = (__m128i)v16;
      v51 = v25;
      sub_BFC40(v43, (signed int **)&v48, (signed int **)&v50, a4);
      v26 = _mm_loadu_si128(a2 + 1);
      v50 = _mm_loadu_si128(a2);
      v27 = _mm_load_si128(&v47);
      v51 = v26;
      si128 = _mm_load_si128((const __m128i *)&v46);
      v49 = v27;
      v48 = (__m128)si128;
      v41 = si128;
      sub_C6FF0(&v48, &v50, a3, a4);
      v16 = (__m128)_mm_load_si128(&v41);
      *a2 = _mm_load_si128((const __m128i *)&v46);
      a9 = _mm_movehl_ps(v29, v16);
      v19 = a9.m128_u64[0];
      a2[1] = _mm_load_si128(&v47);
      v13 = a1[2];
      v22 = *(double *)&a2[1].m128i_i64[1];
      v21 = *a1;
      v15 = a1[3];
      v18 = 0xAAAAAAAAAAAAAAABLL * ((v13 - *a1) >> 2);
      v20 = v16.m128_u64[0];
      if ( (__int64)(v18
                   + 0xAAAAAAAAAAAAAAABLL * ((__int64)(v16.m128_u64[0] - a9.m128_u64[0]) >> 2)
                   + 42 * ((*(_QWORD *)&v22 == 0) + ((*(_QWORD *)&v22 - v15) >> 3) - 1)) <= 16 )
        return v52 - __readfsqword(0x28u);
    }
    v31 = v21;
    v32 = v20;
    v51.m128i_i64[1] = v15;
    v33 = v19;
    v41.m128i_i64[0] = v15;
    v50.m128i_i64[0] = v21;
    v50.m128i_i64[1] = v24;
    v45 = v24;
    v51.m128i_i64[0] = v13;
    v44 = (signed int **)v13;
    v46 = v16;
    v47.m128i_i64[0] = v23.m128i_i64[0];
    *(double *)&v47.m128i_i64[1] = v22;
    v48 = v16;
    v49.m128i_i64[0] = v23.m128i_i64[0];
    *(double *)&v49.m128i_i64[1] = v22;
    sub_C6C60(v42, &v48, v43, a4, *(double *)v16.m128_u64, *(double *)v23.m128i_i64, *(double *)v25.m128i_i64, v22, a9);
    if ( (__int64)(v18
                 - 0x5555555555555555LL * ((__int64)(v32 - v33) >> 2)
                 + 42 * ((*(_QWORD *)&v22 == 0) + ((*(_QWORD *)&v22 - v41.m128i_i64[0]) >> 3) - 1)) > 1 )
    {
      v34 = v44;
      v44 = (signed int **)v18;
      v35 = v22;
      v36 = v41.m128i_i64[0];
      v41.m128i_i64[0] = v45;
      v43 = v34;
      do
      {
        v39 = v32;
        if ( v32 == v33 )
        {
          v33 = *(_QWORD *)(*(_QWORD *)&v35 - 8LL);
          *(_QWORD *)&v35 -= 8LL;
          v39 = v33 + 504;
        }
        v32 = v39 - 12;
        v37 = (__int64 *)v42;
        v48.m128_u64[0] = *(_QWORD *)(v39 - 12);
        v48.m128_i32[2] = *(_DWORD *)(v39 - 4);
        *(_QWORD *)(v39 - 12) = *(_QWORD *)v31;
        *(_DWORD *)(v39 - 4) = *(_DWORD *)(v31 + 8);
        v50.m128i_i64[0] = v31;
        v51.m128i_i64[1] = v36;
        v38 = (__int64)v44
            + 42 * (*(_QWORD *)&v35 == 0)
            + 42 * ((*(_QWORD *)&v35 - v36) >> 3)
            + 0xAAAAAAAAAAAAAAABLL * ((__int64)(v39 - 12 - v33) >> 2)
            - 42;
        v50.m128i_i64[1] = v41.m128i_i64[0];
        v51.m128i_i64[0] = (__int64)v43;
        sub_C6460(v37, 0, v38, v48.m128_i64[0], v48.m128_i32[2], a4);
      }
      while ( v38 > 1 );
    }
  }
  return v52 - __readfsqword(0x28u);
}
