__int64 __fastcall sub_2BA960(
        __int64 *a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  const __m128i *v14; // r13
  __int64 v15; // rax
  unsigned int v16; // ebp
  unsigned __int64 *v17; // rax
  __m128i v18; // xmm0
  __m128 v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 (*v22)(); // rcx
  __int64 v23; // r14
  unsigned int v24; // r15d
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __int64 result; // rax
  __int64 v28; // [rsp+0h] [rbp-B8h]
  QT::QFont *v29; // [rsp+8h] [rbp-B0h] BYREF
  QT::QFontMetricsF *v30[2]; // [rsp+10h] [rbp-A8h] BYREF
  int v31[4]; // [rsp+20h] [rbp-98h] BYREF
  int v32[4]; // [rsp+30h] [rbp-88h]
  int v33[4]; // [rsp+40h] [rbp-78h]
  int v34[4]; // [rsp+50h] [rbp-68h]
  int v35[4]; // [rsp+60h] [rbp-58h] BYREF
  int v36[2]; // [rsp+78h] [rbp-40h]

  v14 = (const __m128i *)a3;
  v15 = a1[2];
  *(_QWORD *)v36 = __readfsqword(0x28u);
  v16 = a4;
  v17 = (unsigned __int64 *)sub_1EA6C0(
                              v15 + 384,
                              (__int64)a2,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              a11,
                              a12,
                              a13,
                              a14,
                              v28,
                              (int)v29,
                              (int)v30[0],
                              (int)v30[1],
                              *(__int64 *)v31,
                              *(__int64 *)&v31[2],
                              *(__int64 *)v32,
                              v32[2],
                              v33[0],
                              v33[2],
                              v34[0],
                              v34[2],
                              *(__int64 *)v35);
  v18 = _mm_loadl_epi64(v14);
  v19 = (__m128)*v17;
  if ( *(double *)v19.m128_u64 > 0.0 )
  {
    v18 = (__m128i)_mm_div_pd(_mm_cvtepi32_pd(v18), _mm_unpacklo_pd((__m128d)v19, (__m128d)v19));
    v19 = *(__m128 *)(v17 + 1);
    v18.m128i_i64[0] = _mm_cvttpd_epi32(_mm_add_pd((__m128d)v18, (__m128d)v19)).m128i_u64[0];
  }
  v20 = *a1;
  v21 = a1[55];
  v29 = (QT::QFont *)v18.m128i_i64[0];
  *(_OWORD *)v31 = 0;
  v22 = *(__int64 (**)())(v20 + 640);
  *(_OWORD *)v32 = 0;
  *(_OWORD *)v33 = 0;
  *(_OWORD *)v34 = 0;
  *(_OWORD *)v35 = 0;
  if ( v21 )
  {
    v23 = *(_QWORD *)(v21 + 8);
    LOBYTE(v14) = v23 == 0;
    v24 = 0;
    LODWORD(v14) = (v16 >> 31) | (unsigned int)v14;
    if ( v22 != sub_2B2460 )
      v24 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))v22)(a1, v23, v16);
    if ( !(_BYTE)v14 )
    {
      *(__m128i *)v30 = _mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 152LL))(
                                                           v23,
                                                           v16));
      if ( (unsigned __int8)sub_2B9380(
                              (__int64)a1,
                              (__int64)v31,
                              (const __m128i *)v30,
                              v16,
                              1,
                              v24,
                              *(double *)v30,
                              v19,
                              (__m128)0LL,
                              a10,
                              v25,
                              v26,
                              a13,
                              a14) )
      {
        if ( SHIDWORD(v29) < v35[3] )
        {
          if ( SHIDWORD(v29) <= v35[1] )
          {
            v29 = (QT::QFont *)_mm_add_epi32(
                                 _mm_loadl_epi64((const __m128i *)&xmmword_5DCCE0),
                                 _mm_loadl_epi64((const __m128i *)v35)).m128i_u64[0];
          }
          else if ( (int)v29 < v35[2] )
          {
            if ( (int)v29 <= v35[0] )
              LODWORD(v29) = v35[0] + 1;
          }
          else
          {
            LODWORD(v29) = v35[2] - 1;
          }
        }
        else
        {
          v29 = (QT::QFont *)_mm_add_epi32(
                               _mm_loadl_epi64((const __m128i *)(&xmmword_5DC310 + 2)),
                               _mm_loadl_epi64((const __m128i *)&v35[2])).m128i_u64[0];
        }
        result = sub_2B5A50(a1, (__int64)a2, v31, &v29, v16);
        if ( (_BYTE)result )
        {
          *a2 = v16;
          return result;
        }
      }
    }
  }
  else if ( v22 != sub_2B2460 )
  {
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD))v22)(a1, 0, v16);
  }
  return 0;
}
