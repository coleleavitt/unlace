unsigned __int64 __fastcall sub_2C1E50(
        _QWORD *a1,
        _DWORD *a2,
        unsigned __int64 *a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // xmm0_8
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 (*v30)(); // rcx
  __int64 v31; // r14
  unsigned int v32; // r15d
  __m128i v33; // xmm0
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __m128d v40; // xmm0
  __int64 v41; // r14
  int v42; // eax
  _QWORD *v43; // rcx
  __m128d v44; // xmm1
  QT::QFont *v45[2]; // [rsp+0h] [rbp-A8h] BYREF
  QT::QFontMetricsF *v46[2]; // [rsp+10h] [rbp-98h] BYREF
  int v47[4]; // [rsp+20h] [rbp-88h]
  int v48[4]; // [rsp+30h] [rbp-78h]
  int v49[4]; // [rsp+40h] [rbp-68h]
  __m64 v50[3]; // [rsp+50h] [rbp-58h]
  int v51[2]; // [rsp+68h] [rbp-40h]

  *(_QWORD *)v51 = __readfsqword(0x28u);
  sub_173180((__int64)a1, a2, (__int64)a3, a4);
  if ( a3 )
  {
    v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*a1 + 504LL);
    if ( v15 == sub_2B36E0 )
    {
      v16 = sub_1EA6A0(a1[2] + 384LL, (__int64)a2, (__int64)sub_2B36E0, v14, *(double *)a5.m128_u64);
      v17 = *(_DWORD *)(v16 + 32);
      v18 = v16;
      if ( v17 != (unsigned int)sub_1EB540((_QWORD *)a1[2], (__int64)a1) )
        sub_169700(
          (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
          (__int64)a1,
          v19,
          v20,
          v21,
          v22,
          a5,
          a6,
          a7,
          a8,
          v23,
          v24,
          a11,
          a12,
          (char)v45[0]);
      v25 = *(int *)(v18 + 24);
    }
    else
    {
      v25 = ((int (__fastcall *)(_QWORD *))v15)(a1);
    }
    v26 = 0x8000000080000000LL;
    if ( (v25 & 0x80000000) != 0LL )
      goto LABEL_7;
    v28 = *a1;
    v29 = a1[55];
    *(_OWORD *)v46 = 0;
    v30 = *(__int64 (**)())(v28 + 640);
    *(_OWORD *)v47 = 0;
    *(_OWORD *)v48 = 0;
    *(_OWORD *)v49 = 0;
    *(_OWORD *)v50 = 0;
    if ( v29 )
    {
      v31 = *(_QWORD *)(v29 + 8);
      v32 = 0;
      if ( v30 != sub_2B2460 )
        v32 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD))v30)(a1, v31, (unsigned int)v25);
      if ( v31 )
      {
        v33 = _mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 152LL))(
                                                 v31,
                                                 (unsigned int)v25));
        *(__m128i *)v45 = v33;
        if ( (unsigned __int8)sub_2B9380(
                                (__int64)a1,
                                (__int64)v46,
                                (const __m128i *)v45,
                                (unsigned int)v25,
                                1,
                                v32,
                                *(double *)v33.m128i_i64,
                                a6,
                                a7,
                                a8,
                                v34,
                                v35,
                                a11,
                                a12) )
        {
          v38 = sub_1EA6A0(a1[2] + 384LL, (__int64)v46, v36, v37, *(double *)v33.m128i_i64);
          v39 = a1[55];
          v40 = 0;
          v41 = v38;
          v42 = *(__int16 *)(v38 + 30);
          if ( v25 < *(_QWORD *)(v39 + 24) )
          {
            v43 = (_QWORD *)(*(_QWORD *)(v39 + 16) + 24 * v25);
            if ( (unsigned __int64)(__int16)v42 < v43[1] )
            {
              sub_178260((__int64)a1, *v43 + 272LL * (__int16)v42, *(__int16 *)(v41 + 28), a4);
              v40.m128d_f64[0] = round(0.0);
              v42 = *(__int16 *)(v41 + 30);
            }
          }
          v44 = 0;
          v44.m128d_f64[0] = (double)v42 * *(double *)(a4 + 120);
          v26 = _mm_cvttpd_epi32(_mm_add_pd(_mm_unpacklo_pd(v40, v44), _mm_cvtepi32_pd(v50[0]))).m128i_u64[0];
          goto LABEL_7;
        }
      }
    }
    else if ( v30 != sub_2B2460 )
    {
      ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v30)(a1, 0, (unsigned int)v25);
    }
    v26 = 0x8000000080000000LL;
LABEL_7:
    *a3 = v26;
  }
  return *(_QWORD *)v51 - __readfsqword(0x28u);
}
