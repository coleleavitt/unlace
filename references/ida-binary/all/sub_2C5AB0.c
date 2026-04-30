unsigned __int64 __fastcall sub_2C5AB0(
        __int64 a1,
        __int64 a2,
        __m128i a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __m128 v19; // xmm2
  __int64 (__fastcall *v20)(); // rax
  __m128d v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // rdi
  __int64 v30; // r8
  bool v31; // zf
  const __m128i *v32; // rax
  __int64 (__fastcall *v33)(); // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __m128 v36; // xmm2
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  int v39; // eax
  __m128d v40; // xmm1
  __m128d v41; // xmm0
  __m128 v42; // xmm1
  int v43; // ebp
  __m128 v44; // xmm0
  int v45; // r12d
  __int64 v46; // rsi
  __int64 v47; // rax
  char *v48; // rcx
  _DWORD *v49; // rbx
  char *v50; // r14
  __int64 v51; // r8
  __int64 v52; // rsi
  __int64 (__fastcall *v53)(__int64); // r9
  _DWORD *v54; // rax
  __int64 v55; // rcx
  __int64 (__fastcall *v56)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  int v62; // eax
  char v63; // si
  int v64; // edx
  _DWORD *v65; // rax
  __int64 v66; // rdi
  __int64 v67; // [rsp+0h] [rbp-78h]
  int v68; // [rsp+0h] [rbp-78h]
  __int64 v69; // [rsp+0h] [rbp-78h]
  int v70; // [rsp+0h] [rbp-78h]
  int v71; // [rsp+8h] [rbp-70h]
  __int64 v72; // [rsp+8h] [rbp-70h]
  __m128i v73; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v74[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v75; // [rsp+38h] [rbp-40h]
  int v76; // [rsp+40h] [rbp-38h]
  int v77; // [rsp+48h] [rbp-30h]
  int v78; // [rsp+50h] [rbp-28h]
  int v79; // [rsp+58h] [rbp-20h]
  __int64 v80; // [rsp+60h] [rbp-18h]

  v10 = *(_DWORD *)(a1 + 384);
  v75 = __readfsqword(0x28u);
  if ( v10 )
    return v75 - __readfsqword(0x28u);
  QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
  v19 = (__m128)_mm_unpacklo_epi64(a3, a4);
  v20 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 312LL);
  v21 = _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), (__m128d)v19);
  v22 = _mm_cvttpd_epi32(
          _mm_add_pd(
            _mm_or_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), v21),
            (__m128d)v19));
  v73.m128i_i64[0] = v22.m128i_i64[0];
  if ( v20 == sub_2B2520 )
    v22 = (__m128i)*(unsigned __int64 *)sub_1EA6C0(
                                          *(_QWORD *)(a1 + 16) + 384LL,
                                          a2,
                                          v13,
                                          v14,
                                          v15,
                                          v16,
                                          (__m128)v22,
                                          (__m128)v21,
                                          v19,
                                          a6,
                                          v17,
                                          v18,
                                          a9,
                                          a10,
                                          v67,
                                          v71,
                                          v73.m128i_i32[0],
                                          v73.m128i_i32[2],
                                          *(__int64 *)v74,
                                          *(__int64 *)&v74[8],
                                          *(__int64 *)&v74[16],
                                          v75,
                                          v76,
                                          v77,
                                          v78,
                                          v79,
                                          v80);
  else
    ((void (__fastcall *)(__int64))v20)(a1);
  if ( *(double *)v22.m128i_i64 == 0.0 || v73.m128i_i64[0] == *(_QWORD *)(a1 + 80) )
    return v75 - __readfsqword(0x28u);
  v29 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v29 + 948) != 2 )
  {
    v30 = *(_QWORD *)(a1 + 440);
    v74[0] = 0;
    *(_OWORD *)&v74[4] = -1;
    if ( v30 )
      v30 = *(_QWORD *)(v30 + 8);
    v31 = (unsigned __int8)sub_2B5E00(
                             (_QWORD *)a1,
                             (__int64)v74,
                             0,
                             0,
                             v30,
                             &v73,
                             (__m128)-1LL,
                             (__m128)0LL,
                             v19,
                             a6,
                             v27,
                             v28,
                             a9,
                             a10,
                             0) == 0;
    v32 = nullptr;
    if ( !v31 )
      v32 = (const __m128i *)v74;
    sub_2B45E0(a1 + 240, v32, a2);
    goto LABEL_13;
  }
  v33 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 312LL);
  if ( v33 == sub_2B2520 )
  {
    v36 = (__m128)*(unsigned __int64 *)sub_1EA6C0(
                                         v29 + 384,
                                         a2,
                                         v23,
                                         v24,
                                         v25,
                                         v26,
                                         (__m128)v22,
                                         (__m128)0LL,
                                         v19,
                                         a6,
                                         v27,
                                         v28,
                                         a9,
                                         a10,
                                         v67,
                                         v71,
                                         v73.m128i_i32[0],
                                         v73.m128i_i32[2],
                                         *(__int64 *)v74,
                                         *(__int64 *)&v74[8],
                                         *(__int64 *)&v74[16],
                                         v75,
                                         v76,
                                         v77,
                                         v78,
                                         v79,
                                         v80);
  }
  else
  {
    *(double *)v22.m128i_i64 = ((double (__fastcall *)(__int64, double, double))v33)(a1, *(double *)v22.m128i_i64, 0.0);
    v36 = (__m128)v22;
  }
  v39 = *(_DWORD *)(a2 + 32);
  if ( (v39 & 0xC000000) == 0 && (!*(_DWORD *)(a1 + 88) || (v39 & 0x2000000) != 0) )
  {
    v40 = 0;
    v41 = 0;
    v40.m128d_f64[0] = (double)(*(_DWORD *)(a1 + 84) - v73.m128i_i32[1]) / *(double *)v36.m128_u64;
    v41.m128d_f64[0] = (double)(*(_DWORD *)(a1 + 80) - v73.m128i_i32[0]) / *(double *)v36.m128_u64;
    sub_2B7630(a1, a2, v34, v35, v41, v40);
    goto LABEL_20;
  }
  if ( !*(_BYTE *)(a1 + 288) )
  {
    v64 = *(_DWORD *)(a1 + 88);
    if ( v64 == 4 )
    {
      sub_176550((int *)a1, a2, v22, (__m128i)0LL);
    }
    else if ( v64 != 3 )
    {
      *(__m128i *)v74 = _mm_unpacklo_epi64(
                          _mm_unpacklo_epi32(
                            _mm_cvtsi32_si128(*(_DWORD *)(a1 + 72)),
                            _mm_cvtsi32_si128(*(_DWORD *)(a1 + 76))),
                          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v73.m128i_u32[0]), _mm_cvtsi32_si128(v73.m128i_u32[1])));
      sub_2B76C0(a1, (signed int *)v74, (~v39 & 0x6000000) == 0);
    }
    goto LABEL_20;
  }
  v42 = 0;
  *(double *)v42.m128_u64 = (double)*(int *)(a1 + 80);
  v43 = (int)(((double)v73.m128i_i32[1] - (double)*(int *)(a1 + 84)) / *(double *)v36.m128_u64);
  v44 = 0;
  *(double *)v44.m128_u64 = ((double)v73.m128i_i32[0] - *(double *)v42.m128_u64) / *(double *)v36.m128_u64;
  v45 = (int)*(double *)v44.m128_u64;
  if ( !((int)*(double *)v44.m128_u64 | v43) )
    goto LABEL_20;
  v46 = *(_QWORD *)(a1 + 440);
  if ( v46 )
  {
    v47 = *(_QWORD *)(a1 + 200);
    v48 = *(char **)(a1 + 192);
    v49 = *(_DWORD **)(v46 + 8);
    v50 = v48;
    if ( 20 * v47 )
      goto LABEL_36;
LABEL_48:
    v66 = *(_QWORD *)(v46 + 8);
    goto LABEL_49;
  }
  v47 = *(_QWORD *)(a1 + 200);
  v48 = *(char **)(a1 + 192);
  v49 = nullptr;
  v50 = v48;
  v46 = 20 * v47;
  if ( !(20 * v47) )
    goto LABEL_56;
  do
  {
LABEL_36:
    v63 = *v50;
    if ( v49 )
    {
      if ( !v63 )
        goto LABEL_44;
      v51 = *(_QWORD *)v49;
      v52 = *((unsigned int *)v50 + 1);
      v53 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 56LL);
      if ( v53 == interactive_graph_t__::vfunc_7 )
      {
        if ( (int)v52 >= v49[46] )
          goto LABEL_35;
        goto LABEL_29;
      }
      v70 = *((_DWORD *)v50 + 1);
      if ( v70 >= (int)v53((__int64)v49) )
        goto LABEL_34;
      v63 = *v50;
    }
    if ( !v63 )
    {
LABEL_44:
      if ( *((int *)v50 + 2) >= 0 )
      {
        v65 = (_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v49 + 160LL))(
                                       v49,
                                       *(_QWORD *)(v50 + 12))
                                   + 16)
                       + 8LL * *((int *)v50 + 2));
        *v65 += v45;
        v65[1] += v43;
      }
LABEL_34:
      v48 = *(char **)(a1 + 192);
      v47 = *(_QWORD *)(a1 + 200);
      goto LABEL_35;
    }
    v51 = *(_QWORD *)v49;
    v52 = *((unsigned int *)v50 + 1);
LABEL_29:
    v54 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(v51 + 152))(v49);
    *v54 += v45;
    v54[2] += v45;
    v54[1] += v43;
    v54[3] += v43;
    v56 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*(_QWORD *)a1 + 504LL);
    if ( v56 == sub_2B36E0 )
    {
      v72 = sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, v52, (__int64)sub_2B36E0, v55, *(double *)v44.m128_u64);
      v68 = *(_DWORD *)(v72 + 32);
      v57 = sub_1EB540(*(_QWORD **)(a1 + 16), a1);
      v61 = v72;
      if ( v68 != v57 )
      {
        sub_169700(
          (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
          a1,
          v58,
          v72,
          v59,
          v60,
          v44,
          v42,
          v36,
          a6,
          v37,
          v38,
          a9,
          a10,
          v72);
        v61 = v69;
      }
      v62 = *(_DWORD *)(v61 + 24);
    }
    else
    {
      v62 = ((__int64 (__fastcall *)(__int64, __int64))v56)(a1, v52);
    }
    if ( v62 != *((_DWORD *)v50 + 1) )
      goto LABEL_34;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 760LL))(*(_QWORD *)(a1 + 16));
    v48 = *(char **)(a1 + 192);
    v47 = *(_QWORD *)(a1 + 200);
LABEL_35:
    v50 += 20;
  }
  while ( v50 != &v48[20 * v47] );
  v46 = *(_QWORD *)(a1 + 440);
  if ( v46 )
    goto LABEL_48;
LABEL_56:
  v66 = 0;
LABEL_49:
  sub_29C200(v66, v46, v44, v42, v36, a6, *(double *)v37.m128_u64, *(double *)v38.m128_u64, a9, a10);
  sub_1F4880(*(QT::QAbstractScrollArea **)(a1 + 16), 0);
  sub_466DD0(a1);
LABEL_20:
  sub_175DA0(a1 + 72, v73.m128i_i64);
LABEL_13:
  sub_2BFE60(a1, 2, (__int64)"(%d,%d)", v73.m128i_i32[0], v73.m128i_i32[1]);
  sub_2BF7F0();
  return v75 - __readfsqword(0x28u);
}
