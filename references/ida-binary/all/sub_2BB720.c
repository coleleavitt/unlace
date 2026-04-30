__int64 __fastcall sub_2BB720(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 (*v15)(void); // rax
  __int64 v16; // rax
  int v17; // r13d
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  unsigned __int64 v25; // rax
  __int64 v26; // r15
  unsigned __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 (__fastcall *v30)(__int64); // rcx
  __int64 (__fastcall *v31)(__int64); // rax
  int v32; // eax
  __int64 v33; // rsi
  _DWORD *v34; // rax
  __int64 v35; // rcx
  _DWORD *v36; // r14
  int v37; // r12d
  _QWORD *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __m128 v42; // xmm4
  __m128 v43; // xmm5
  __int64 (__fastcall *v44)(); // rax
  double *v45; // rax
  __int64 v46; // rax
  const __m128i *v47; // rax
  __int64 v48; // rdi
  __m128i v49; // xmm0
  __int64 v50; // rcx
  double v51; // xmm4_8
  double v52; // xmm5_8
  __int64 v54; // rdi
  __int64 v55; // [rsp+0h] [rbp-158h]
  int v56; // [rsp+8h] [rbp-150h]
  int v57; // [rsp+10h] [rbp-148h]
  int v58; // [rsp+14h] [rbp-144h]
  __m128i *v59; // [rsp+18h] [rbp-140h]
  __int64 v60; // [rsp+20h] [rbp-138h]
  QT::QFont *v61; // [rsp+28h] [rbp-130h]
  QT::QFontMetricsF *v62; // [rsp+30h] [rbp-128h]
  __int64 v63; // [rsp+38h] [rbp-120h]
  double v64; // [rsp+40h] [rbp-118h]
  _DWORD *v65; // [rsp+48h] [rbp-110h]
  __int64 v66; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v67; // [rsp+58h] [rbp-100h]
  __int64 v68[2]; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v69; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v70; // [rsp+80h] [rbp-D8h]
  __int128 v71; // [rsp+90h] [rbp-C8h]
  __int128 v72; // [rsp+A0h] [rbp-B8h]
  _BYTE v73[16]; // [rsp+B0h] [rbp-A8h] BYREF
  _BYTE v74[24]; // [rsp+C0h] [rbp-98h] BYREF
  double v75; // [rsp+D8h] [rbp-80h]
  double v76; // [rsp+E8h] [rbp-70h]
  unsigned __int64 v77; // [rsp+118h] [rbp-40h]

  v13 = *(_QWORD *)a1;
  v77 = __readfsqword(0x28u);
  v14 = a2;
  v15 = *(__int64 (**)(void))(v13 + 504);
  if ( (char *)v15 == (char *)sub_2B36E0 )
  {
    v16 = sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, (__int64)sub_2B36E0, a12, *(double *)a3.m128_u64);
    v17 = *(_DWORD *)(v16 + 32);
    v18 = v16;
    if ( v17 != (unsigned int)sub_1EB540(*(_QWORD **)(a1 + 16), a1) )
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
        a1,
        v19,
        v20,
        v21,
        v22,
        a3,
        a4,
        a5,
        a6,
        v23,
        v24,
        a9,
        a10,
        v55);
    v58 = *(_DWORD *)(v18 + 24);
  }
  else
  {
    v58 = v15();
  }
  if ( v58 < 0 )
    return 0;
  v25 = sub_2B5870(a1);
  v26 = *(_QWORD *)(a1 + 440);
  HIDWORD(v55) = v25;
  v27 = HIDWORD(v25);
  if ( v26 )
    v26 = *(_QWORD *)(v26 + 8);
  v69.m128i_i64[0] = v26;
  v69.m128i_i32[2] = 0;
  v59 = &v69;
  v28 = node_iterator_goup(&v69);
  v56 = 0x7FFFFFFF;
  v29 = *(_QWORD *)v28;
  LODWORD(v28) = *(_DWORD *)(v28 + 8);
  v60 = -1;
  v66 = v29;
  v67 = v28;
  v57 = -1;
  while ( 1 )
  {
    v30 = interactive_graph_t__::vfunc_7;
    v31 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 56LL);
    v32 = v31 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(v26 + 184) : v31(v26);
    v33 = v67;
    if ( v32 == v67 && v26 == v66 )
      break;
    v34 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 152LL))(v26);
    v36 = v34;
    if ( v14 == 2 )
    {
      v37 = v27 - v34[3];
    }
    else
    {
      if ( v14 <= 2 )
      {
        if ( v14 )
          v37 = *v34 - HIDWORD(v55);
        else
          v37 = HIDWORD(v55) - v34[2];
        if ( v34[1] + *(_DWORD *)(a1 + 432) > (int)v27 || v34[3] <= (int)v27 )
          goto LABEL_38;
        goto LABEL_18;
      }
      if ( v14 != 3 )
        goto LABEL_38;
      v37 = v34[1] - v27;
    }
    if ( *v34 > SHIDWORD(v55) || v34[2] <= SHIDWORD(v55) )
      goto LABEL_38;
LABEL_18:
    if ( v37 > 0 && v56 > v37 )
    {
      v38 = *(_QWORD **)(a1 + 440);
      v57 = v67;
      v65 = (_DWORD *)sub_2B5900(*(double *)a3.m128_u64, a1, v38, (__int64 (__fastcall *)(__int64))v67, v35);
      v44 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 312LL);
      if ( v44 == sub_2B2520 )
      {
        v45 = (double *)sub_1EA6C0(
                          *(_QWORD *)(a1 + 16) + 384LL,
                          (__int64)v38,
                          (__int64)sub_2B2520,
                          v39,
                          v40,
                          v41,
                          a3,
                          a4,
                          a5,
                          a6,
                          v42,
                          v43,
                          a9,
                          a10,
                          v55,
                          v56,
                          v57,
                          (int)v59,
                          v60,
                          (__int64)v61,
                          (__int64)v62,
                          v63,
                          SLODWORD(v64),
                          (int)v65,
                          v66,
                          v67,
                          v68[0]);
        a5 = (__m128)*(unsigned __int64 *)v45;
        v64 = *v45;
      }
      else
      {
        v64 = ((double (__fastcall *)(__int64))v44)(a1);
      }
      v46 = *(_QWORD *)(a1 + 16);
      v69 = 0;
      v63 = v46;
      v61 = (QT::QFont *)v73;
      v70 = 0;
      v71 = 0;
      v72 = 0;
      QT::QFont::QFont((QT::QFont *)v73);
      QT::QFont::QFont((QT::QFont *)v68);
      v62 = (QT::QFontMetricsF *)v74;
      QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v74, (const QT::QFont *)v68);
      QT::QFont::~QFont((QT::QFont *)v68);
      sub_1C8200(v59, v63, (__m128d)*(unsigned __int64 *)&v64);
      if ( v14 == 2 )
      {
        a3 = 0;
        *(double *)a3.m128_u64 = (double)(HIDWORD(v55) - 1 - *v36) / v75;
        LODWORD(v60) = (int)*(double *)a3.m128_u64;
        HIDWORD(v60) = v65[1] - 1;
      }
      else if ( v14 > 2 )
      {
        a3 = 0;
        a4 = (__m128)*(unsigned __int64 *)&v75;
        HIDWORD(v60) = 0;
        *(double *)a3.m128_u64 = ((double)(HIDWORD(v55) - 1 - *v36) + v75 - 1.0) / v75;
        LODWORD(v60) = (int)*(double *)a3.m128_u64;
      }
      else
      {
        a3 = 0;
        if ( v14 )
        {
          LODWORD(v60) = 0;
          a4 = (__m128)*(unsigned __int64 *)&v76;
          *(double *)a3.m128_u64 = ((double)((int)v27 - 1 - *(_DWORD *)(a1 + 432) - v36[1]) + v76 - 1.0) / v76;
        }
        else
        {
          LODWORD(v60) = *v65;
          *(double *)a3.m128_u64 = (double)((int)v27 - 1 - *(_DWORD *)(a1 + 432) - v36[1]) / v76;
        }
        HIDWORD(v60) = (int)*(double *)a3.m128_u64;
      }
      QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v74);
      QT::QFont::~QFont((QT::QFont *)v73);
      v56 = v37;
    }
LABEL_38:
    ++v67;
    node_iterator_goup(&v66);
  }
  if ( v57 == -1 )
    return 0;
  if ( *(_QWORD *)(a1 + 200) == 1 )
  {
    v54 = *(_QWORD *)(a1 + 192);
    if ( *(_BYTE *)v54 )
    {
      if ( v58 == *(_DWORD *)(v54 + 4) )
      {
        if ( v54 )
        {
          *(_QWORD *)(a1 + 200) = 0;
          *(double *)a3.m128_u64 = qfree(v54, (const char *)v33);
          *(_QWORD *)(a1 + 192) = 0;
          *(_QWORD *)(a1 + 208) = 0;
        }
        sub_2B38C0(a1 + 192);
      }
    }
  }
  v47 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, v33, v29, (__int64)v30, *(double *)a3.m128_u64);
  v48 = *(_QWORD *)(a1 + 16);
  v69 = _mm_loadu_si128(v47);
  v49 = _mm_loadu_si128(v47 + 1);
  v70 = v49;
  *(_QWORD *)&v71 = v47[2].m128i_i64[0];
  v70.m128i_i16[6] = v60;
  v70.m128i_i16[7] = WORD2(v60);
  v70.m128i_i32[2] = v57;
  sub_2004D0(v48, v59->m128i_i8, 0, v50, *(double *)v49.m128i_i64, a4, a5, a6, v51, v52, a9, a10);
  return 1;
}
