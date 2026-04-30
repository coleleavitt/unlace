unsigned __int64 __fastcall sub_2B7740(
        QT::QAbstractScrollArea **a1,
        __int64 a2,
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
  char v14; // bl
  double (*v15)(void); // rax
  QT::QAbstractScrollArea *v16; // rax
  __int64 v17; // rsi
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __m128 v24; // xmm0
  int v25; // eax
  __m128 v26; // xmm3
  __int64 (__fastcall *v27)(); // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  double v30; // xmm1_8
  __m128d v31; // xmm0
  int v33; // eax
  __int64 v34; // [rsp+0h] [rbp-118h]
  int v35; // [rsp+8h] [rbp-110h]
  __int64 v36; // [rsp+8h] [rbp-110h]
  int v37; // [rsp+10h] [rbp-108h]
  double v38; // [rsp+10h] [rbp-108h]
  int v39; // [rsp+18h] [rbp-100h]
  char v40; // [rsp+1Ch] [rbp-FCh]
  __int64 v41; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+28h] [rbp-F0h]
  __m128i v43; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v44; // [rsp+40h] [rbp-D8h]
  __int128 v45; // [rsp+50h] [rbp-C8h]
  __int128 v46; // [rsp+60h] [rbp-B8h]
  _BYTE v47[16]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v48[24]; // [rsp+80h] [rbp-98h] BYREF
  double v49; // [rsp+98h] [rbp-80h]
  double v50; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v51; // [rsp+D8h] [rbp-40h]

  v14 = a2;
  v40 = a3;
  v34 = a7.m128_i64[0];
  v51 = __readfsqword(0x28u);
  v15 = *((double (**)(void))*a1 + 39);
  if ( (char *)v15 == (char *)sub_2B2520 )
    v38 = *(double *)sub_1EA6C0(
                       (__int64)a1[2] + 384,
                       a2,
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
                       a7.m128_i64[0],
                       v35,
                       v37,
                       v39,
                       v41,
                       v42,
                       v43.m128i_i64[0],
                       v43.m128i_i32[2],
                       v44,
                       SDWORD2(v44),
                       v45,
                       SDWORD2(v45),
                       v46);
  else
    v38 = v15();
  v16 = a1[2];
  v43 = 0;
  v36 = (__int64)v16;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  QT::QFont::QFont((QT::QFont *)v47);
  QT::QFont::QFont((QT::QFont *)&v41);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v48, (const QT::QFont *)&v41);
  QT::QFont::~QFont((QT::QFont *)&v41);
  v17 = v36;
  sub_1C8200(&v43, v36, (__m128d)*(unsigned __int64 *)&v38);
  v24 = 0;
  if ( *(double *)&v34 >= 0.0 )
  {
    v18 = *(_DWORD **)(QT::QAbstractScrollArea::viewport(a1[2]) + 32LL);
    if ( v14 )
      v33 = v18[7] + 1 - v18[5];
    else
      v33 = v18[8] + 1 - v18[6];
    v24 = 0;
    *(double *)v24.m128_u64 = (double)v33 * *(double *)&v34;
    v25 = (int)*(double *)v24.m128_u64;
  }
  else if ( v14 )
  {
    v24 = (__m128)0x4008000000000000uLL;
    *(double *)v24.m128_u64 = 3.0 * v49;
    v25 = (int)(3.0 * v49);
  }
  else
  {
    v25 = (int)v50;
  }
  v26 = 0;
  *(double *)v26.m128_u64 = (double)v25;
  v27 = *((__int64 (__fastcall **)())*a1 + 39);
  if ( v27 == sub_2B2520 )
    v30 = *(double *)sub_1EA6C0(
                       (__int64)a1[2] + 384,
                       v36,
                       (__int64)v18,
                       v19,
                       v20,
                       v21,
                       v24,
                       a8,
                       a9,
                       v26,
                       v22,
                       v23,
                       a13,
                       a14,
                       v34,
                       v36,
                       SLODWORD(v38),
                       v39,
                       v41,
                       v42,
                       v43.m128i_i64[0],
                       v43.m128i_i32[2],
                       v44,
                       SDWORD2(v44),
                       v45,
                       SDWORD2(v45),
                       v46);
  else
    v30 = ((double (__fastcall *)(QT::QAbstractScrollArea **))v27)(a1);
  v31 = (__m128d)v26.m128_u64[0];
  v31.m128d_f64[0] = *(double *)v26.m128_u64 / v30;
  if ( v40 )
    v31 = _mm_xor_pd(v31, (__m128d)xmmword_5DC320);
  if ( v14 )
    sub_2B7630((__int64)a1, v17, v28, v29, v31, (__m128d)0LL);
  else
    sub_2B7630((__int64)a1, v17, v28, v29, (__m128d)0LL, v31);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v48);
  QT::QFont::~QFont((QT::QFont *)v47);
  return v51 - __readfsqword(0x28u);
}
