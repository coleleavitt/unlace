unsigned __int64 __fastcall sub_2C2BB0(
        __int64 *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __m128 v14; // xmm1
  double v15; // xmm0_8
  __int64 v16; // rax
  const __m128i *v18; // rbp
  char v19; // r12
  void (*v20)(void); // rax
  double *v21; // rax
  QT::QAbstractScrollArea *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128i v30; // xmm2
  __m128i v31; // xmm0
  int v32; // eax
  int v33; // ecx
  bool v34; // zf
  bool v35; // sf
  bool v36; // of
  __int64 v37; // rax
  __int64 v38; // rdi
  bool v39; // al
  __int64 v40; // rax
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int64 (__fastcall *v44)(); // rax
  __int64 *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // xmm1_8
  __int64 v49; // rax
  const __m128i *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __m128 v55; // xmm1
  __m128i v56; // xmm2
  __m128 v57; // xmm2
  __m128d v58; // xmm3
  __m128d v59; // xmm2
  double v60; // xmm0_8
  __int64 v61; // rcx
  double v62; // xmm4_8
  double v63; // xmm5_8
  __m128i v65; // [rsp+0h] [rbp-E8h] BYREF
  int v66; // [rsp+10h] [rbp-D8h]
  __int64 v67; // [rsp+18h] [rbp-D0h] BYREF
  __m128 v68; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+30h] [rbp-B8h]
  int v70; // [rsp+38h] [rbp-B0h]
  __m256i v71; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+60h] [rbp-88h]
  __m128i v73[4]; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v74; // [rsp+B8h] [rbp-30h]

  v74 = __readfsqword(0x28u);
  if ( *(double *)a7.m128_u64 <= 10.0 )
  {
    v14 = a7;
    v15 = 0.01;
    if ( *(double *)v14.m128_u64 >= 0.01 )
    {
      v16 = *a1;
      v18 = a2;
      v19 = a3;
      v65.m128i_i64[0] = v14.m128_u64[0];
      v20 = *(void (**)(void))(v16 + 312);
      if ( (char *)v20 == (char *)sub_2B2520 )
      {
        v21 = (double *)sub_1EA6C0(
                          a1[2] + 384,
                          (__int64)a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          (__m128)0x3F847AE147AE147BuLL,
                          v14,
                          a9,
                          a10,
                          a11,
                          a12,
                          a13,
                          a14,
                          v65.m128i_i64[0],
                          v65.m128i_i32[2],
                          v66,
                          v67,
                          v68.m128_i64[0],
                          v68.m128_i64[1],
                          v69,
                          v70,
                          v71.m256i_i32[0],
                          v71.m256i_i32[2],
                          v71.m256i_i32[4],
                          v71.m256i_i32[6],
                          v72);
        v14.m128_u64[0] = v65.m128i_i64[0];
        v15 = *v21;
      }
      else
      {
        v20();
        v14.m128_u64[0] = v65.m128i_i64[0];
      }
      if ( *(double *)v14.m128_u64 != v15 )
      {
        v22 = (QT::QAbstractScrollArea *)a1[2];
        v65.m128i_i64[0] = v14.m128_u64[0];
        v14 = (__m128)v14.m128_u64[0];
        v23 = *(_QWORD *)(QT::QAbstractScrollArea::viewport(v22) + 32LL);
        v30 = _mm_loadl_epi64((const __m128i *)(v23 + 20));
        v31 = _mm_sub_epi32(
                _mm_add_epi32(
                  _mm_loadl_epi64((const __m128i *)(v23 + 28)),
                  _mm_loadl_epi64((const __m128i *)&xmmword_5DCCE0)),
                v30);
        if ( a2
          && (v32 = a2->m128i_i32[0], a2->m128i_i32[0] >= 0)
          && (v33 = _mm_cvtsi128_si32(v31),
              v24 = a2->m128i_u32[1],
              a14 = (__m128)_mm_shuffle_epi32(v31, 229),
              v36 = __OFSUB__(v32, v33),
              v34 = v32 == v33,
              v35 = v32 - v33 < 0,
              v25 = (unsigned int)_mm_cvtsi128_si32((__m128i)a14),
              LOBYTE(v25) = (int)v24 > (int)v25,
              !((unsigned __int8)v25 | !(v35 ^ v36 | v34)))
          && (int)v24 >= 0 )
        {
          v67 = 0;
        }
        else
        {
          v37 = a1[55];
          v67 = 0;
          v73[0] = 0;
          if ( v37
            && (v38 = *(_QWORD *)(v37 + 8)) != 0
            && (a2 = v73,
                v65.m128i_i64[1] = v65.m128i_i64[0],
                v65.m128i_i64[0] = v31.m128i_i64[0],
                v39 = sub_299FA0(v38, v73, *(double *)v31.m128i_i64),
                v31 = _mm_loadl_epi64(&v65),
                v14 = (__m128)v65.m128i_u64[1],
                v39) )
          {
            v40 = sub_1EA6C0(
                    a1[2] + 384,
                    (__int64)v73,
                    v24,
                    v25,
                    v26,
                    v27,
                    (__m128)v31,
                    (__m128)v65.m128i_u64[1],
                    (__m128)0LL,
                    a10,
                    v28,
                    v29,
                    a13,
                    a14,
                    v65.m128i_i64[1],
                    v65.m128i_i32[2],
                    v66,
                    v67,
                    v68.m128_i64[0],
                    v68.m128_i64[1],
                    v69,
                    v70,
                    v71.m256i_i32[0],
                    v71.m256i_i32[2],
                    v71.m256i_i32[4],
                    v71.m256i_i32[6],
                    v72);
            v14 = (__m128)v65.m128i_u64[0];
            a10 = *(__m128 *)(v40 + 8);
            v41 = _mm_add_epi32(_mm_loadl_epi64(v73), _mm_loadl_epi64((const __m128i *)&v73[0].m128i_u64[1]));
            v30 = *(__m128i *)v40;
            v42 = _mm_srai_epi32(_mm_sub_epi32(v41, _mm_cmpgt_epi32((__m128i)0LL, v41)), 1u);
            if ( *(double *)v40 == 1.0 )
            {
              a10 = (__m128)_mm_cvttpd_epi32((__m128d)a10);
              v31 = _mm_sub_epi32(v42, (__m128i)a10);
            }
            else
            {
              v30 = (__m128i)_mm_unpacklo_pd((__m128d)v30, (__m128d)v30);
              v31 = _mm_cvttpd_epi32(_mm_mul_pd(_mm_sub_pd(_mm_cvtepi32_pd(v42), (__m128d)a10), (__m128d)v30));
            }
            v67 = v31.m128i_i64[0];
          }
          else
          {
            v30 = _mm_cmpgt_epi32((__m128i)0LL, v31);
            v31 = _mm_srai_epi32(_mm_sub_epi32(v31, v30), 1u);
            v67 = v31.m128i_i64[0];
          }
          v18 = (const __m128i *)&v67;
        }
        v43 = *a1;
        v65.m128i_i64[0] = v14.m128_u64[0];
        v44 = *(__int64 (__fastcall **)())(v43 + 312);
        if ( v44 == sub_2B2520 )
        {
          v45 = (__int64 *)sub_1EA6C0(
                             a1[2] + 384,
                             (__int64)a2,
                             v24,
                             v25,
                             v26,
                             v27,
                             (__m128)v31,
                             v14,
                             (__m128)v30,
                             a10,
                             v28,
                             v29,
                             a13,
                             a14,
                             v65.m128i_i64[0],
                             v65.m128i_i32[2],
                             v66,
                             v67,
                             v68.m128_i64[0],
                             v68.m128_i64[1],
                             v69,
                             v70,
                             v71.m256i_i32[0],
                             v71.m256i_i32[2],
                             v71.m256i_i32[4],
                             v71.m256i_i32[6],
                             v72);
          v48 = v65.m128i_i64[0];
          v31.m128i_i64[0] = *v45;
        }
        else
        {
          ((void (__fastcall *)(__int64 *))v44)(a1);
          v48 = v65.m128i_i64[0];
        }
        v49 = a1[2];
        v65.m128i_i64[1] = v48;
        v65.m128i_i64[0] = v31.m128i_i64[0];
        v50 = (const __m128i *)sub_1EA6A0(v49 + 384, (__int64)a2, v46, v47, *(double *)v31.m128i_i64);
        v55.m128_u64[0] = v65.m128i_u64[1];
        *(__m128i *)v71.m256i_i8 = _mm_loadu_si128(v50);
        v56 = _mm_loadu_si128(v50 + 1);
        v71.m256i_i64[0] = v65.m128i_i64[1];
        *(__m128i *)&v71.m256i_u64[2] = v56;
        v57 = 0;
        v72 = v50[2].m128i_i64[0];
        if ( *(double *)v65.m128i_i64 != 0.0 )
        {
          a13 = *(__m128 *)&v71.m256i_u64[1];
          v58 = _mm_cvtepi32_pd(_mm_loadl_epi64(v18));
          v59 = _mm_div_pd(v58, _mm_unpacklo_pd((__m128d)v65.m128i_u64[0], (__m128d)v65.m128i_u64[0]));
          a10 = (__m128)_mm_div_pd(v58, _mm_unpacklo_pd((__m128d)v65.m128i_u64[1], (__m128d)v65.m128i_u64[1]));
          v57 = (__m128)_mm_sub_pd(v59, (__m128d)a10);
          *(__m128d *)&v71.m256i_u64[1] = _mm_add_pd((__m128d)v57, *(__m128d *)&v71.m256i_u64[1]);
        }
        if ( v19 )
        {
          v60 = *(double *)&v71.m256i_i64[2];
          v55.m128_u64[1] = v71.m256i_i64[1];
          v68 = v55;
          v69 = v71.m256i_i64[2];
          sub_2B4480((__int64)v73, (__int64)a1, (__int64)&v68, v52);
          sub_2C29E0((__int64)a1, (__int64)v73, 0, v61, v60, v55, v57, a10, v62, v63, a13, a14);
        }
        else
        {
          sub_1F14A0((const __m128i *)(a1[2] + 384), (const __m128i *)&v71, v51, v52, v53, v54);
        }
      }
    }
  }
  return v74 - __readfsqword(0x28u);
}
