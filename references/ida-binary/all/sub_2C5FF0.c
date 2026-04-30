__int64 __fastcall sub_2C5FF0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rbp
  __m128 v12; // xmm2
  __m128d v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __int64 v21; // rax
  __int64 v22; // rax
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v26; // rcx
  __int64 (__fastcall *v27)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  int v35; // eax
  char v36; // al
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  double *v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  const __m128i *v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rcx
  double v54; // xmm4_8
  double v55; // xmm5_8
  __int64 v56; // [rsp-1Ch] [rbp-B8h]
  __int64 v57; // [rsp-Ch] [rbp-A8h]
  int v58; // [rsp-4h] [rbp-A0h]
  int v59; // [rsp+0h] [rbp-9Ch]
  int v60; // [rsp+4h] [rbp-98h]
  __int64 v61; // [rsp+Ch] [rbp-90h] BYREF
  _BYTE v62[24]; // [rsp+14h] [rbp-88h] BYREF
  int v63; // [rsp+2Ch] [rbp-70h]
  __m128i v64; // [rsp+34h] [rbp-68h] BYREF
  __m128i v65; // [rsp+44h] [rbp-58h]
  __int64 v66; // [rsp+54h] [rbp-48h]
  unsigned __int64 v67; // [rsp+5Ch] [rbp-40h]

  v11 = a1[55];
  v67 = __readfsqword(0x28u);
  v62[0] = 1;
  *(_OWORD *)&v62[4] = -1;
  if ( v11 )
    v11 = *(_QWORD *)(v11 + 8);
  QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
  v12 = (__m128)_mm_unpacklo_epi64((__m128i)-1LL, a4);
  v13 = _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), (__m128d)v12);
  v14 = (__m128)_mm_cvttpd_epi32(
                  _mm_add_pd(
                    _mm_or_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), v13),
                    (__m128d)v12));
  v61 = v14.m128_u64[0];
  if ( !(unsigned __int8)sub_2B5E00(
                           a1,
                           (__int64)v62,
                           0,
                           0,
                           v11,
                           (const __m128i *)&v61,
                           v14,
                           (__m128)v13,
                           v12,
                           a6,
                           v15,
                           v16,
                           a9,
                           a10,
                           1)
    || !v62[0] )
  {
    v21 = a1[2];
    v62[0] = 0;
    *(_DWORD *)&v62[8] = -1;
    v22 = sub_1EA6C0(
            v21 + 384,
            (__int64)v62,
            v56,
            0,
            v17,
            v18,
            v14,
            (__m128)v13,
            v12,
            a6,
            v19,
            v20,
            a9,
            a10,
            v57,
            v58,
            v60,
            v61,
            *(__int64 *)v62,
            *(__int64 *)&v62[8],
            *(__int64 *)&v62[16],
            v63,
            v64.m128i_i32[0],
            v64.m128i_i32[2],
            v65.m128i_i32[0],
            v65.m128i_i32[2],
            v66);
    if ( !(unsigned __int8)sub_2B6860(
                             (__int64)a1,
                             v11,
                             *(double *)v14.m128_u64,
                             v13.m128d_f64[0],
                             v12,
                             *(double *)a6.m128_u64,
                             v23,
                             v24,
                             a9,
                             a10,
                             v22,
                             (int)&v61,
                             &v62[12]) )
    {
      sub_2BB510((__int64)a1, 5, a1[2], 0);
      return 1;
    }
  }
  if ( (unsigned int)sub_2BB510((__int64)a1, 5, a1[2], v62) )
    return 1;
  if ( !v62[0] )
  {
    v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*a1 + 504);
    if ( v27 == sub_2B36E0 )
    {
      v28 = sub_1EA6A0(a1[2] + 384, 5, (__int64)sub_2B36E0, v26, *(double *)v14.m128_u64);
      v59 = *(_DWORD *)(v28 + 32);
      if ( v59 != (unsigned int)sub_1EB540((_QWORD *)a1[2], (__int64)a1) )
        sub_169700(
          (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
          (__int64)a1,
          v29,
          v30,
          v31,
          v32,
          v14,
          (__m128)v13,
          v12,
          a6,
          v33,
          v34,
          a9,
          a10,
          v57);
      v35 = *(_DWORD *)(v28 + 24);
    }
    else
    {
      v35 = ((__int64 (__fastcall *)(__int64 *))v27)(a1);
    }
    if ( v35 >= 0 )
    {
      v45 = a1[25];
      v46 = a1[24];
      v47 = v46 + 20 * v45;
      if ( v46 != v47 )
      {
        while ( !*(_BYTE *)v46 || v35 != *(_DWORD *)(v46 + 4) )
        {
          v46 += 20;
          if ( v47 == v46 )
            goto LABEL_29;
        }
        if ( v47 != v46 )
        {
          v48 = v47 - v46;
          if ( (__int64)(0xCCCCCCCCCCCCCCCDLL * (v48 >> 2) - 2) >= 0 )
          {
            memmove((void *)v46, (const void *)(v46 + 20), v48 - 20);
            v45 = a1[25];
          }
          a1[25] = v45 - 1;
        }
      }
LABEL_29:
      sub_2B38C0((__int64)(a1 + 24));
      if ( (*(_BYTE *)(a2 + 35) & 2) == 0 )
        goto LABEL_16;
    }
    else if ( (*(_BYTE *)(a2 + 35) & 2) == 0 )
    {
LABEL_16:
      v36 = sub_47B6A0(QT::QCoreApplication::self, a2);
      if ( (v36 & 4) != 0 )
      {
        v44 = *(_DWORD *)&v62[16];
      }
      else if ( (v36 & 2) != 0 )
      {
        v44 = *(_DWORD *)&v62[12];
      }
      else
      {
        v43 = (double *)sub_1EA6C0(
                          a1[2] + 384,
                          a2,
                          v37,
                          v38,
                          v39,
                          v40,
                          v14,
                          (__m128)v13,
                          v12,
                          a6,
                          v41,
                          v42,
                          a9,
                          a10,
                          v57,
                          v58,
                          v60,
                          v61,
                          *(__int64 *)v62,
                          *(__int64 *)&v62[8],
                          *(__int64 *)&v62[16],
                          v63,
                          v64.m128i_i32[0],
                          v64.m128i_i32[2],
                          v65.m128i_i32[0],
                          v65.m128i_i32[2],
                          v66);
        v44 = sub_2B7C10((__int64)a1, v11, v43, &v61, (unsigned int *)&v62[12]);
      }
      *(_DWORD *)&v62[4] = v44;
      sub_2B2D00(a1 + 24, v62);
      sub_2B38C0((__int64)(a1 + 24));
      v51 = (const __m128i *)sub_1EA6A0(a1[2] + 384, (__int64)v62, v49, v50, *(double *)v14.m128_u64);
      v64 = _mm_loadu_si128(v51);
      v52 = _mm_loadu_si128(v51 + 1);
      v65 = v52;
      v66 = v51[2].m128i_i64[0];
      v65.m128i_i32[2] = *(_DWORD *)&v62[4];
      *(_DWORD *)(a1[2] + 948) = 10;
      *(_DWORD *)(a1[2] + 952) |= 0x7000000u;
      sub_2004D0(a1[2], v64.m128i_i8, 1, v53, *(double *)v52.m128i_i64, (__m128)v13, v12, a6, v54, v55, a9, a10);
      return 1;
    }
    sub_2B7D90(
      (__int64)a1,
      *(__int64 *)&v62[12],
      (__m128i *)&v61,
      v14,
      (__m128)v13,
      v12,
      a6,
      *(double *)v33.m128_u64,
      *(double *)v34.m128_u64,
      a9,
      a10);
    return 1;
  }
  return sub_176920((__int64)a1, a2);
}
