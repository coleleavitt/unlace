__int64 __fastcall sub_288510(
        QT::QCoreApplication *this,
        __int64 a2,
        __int64 a3,
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
  __int64 v12; // rax
  __int64 v13; // r13
  QT::QCoreApplication *v14; // rsi
  __int64 v15; // rcx
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rdx
  double v19; // xmm4_8
  double v20; // xmm5_8
  int v21; // eax
  char v22; // bp
  __int64 v24; // rdx
  __int64 v25; // rcx
  double v26; // xmm4_8
  double v27; // xmm5_8
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int8 v31; // r12
  const __m128i *v32; // rax
  double v33; // xmm4_8
  double v34; // xmm5_8
  __int64 v35; // rsi
  const __m128i *v36; // rdx
  const __m128i *v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rax
  const __m128i *v40; // rax
  double v41; // xmm4_8
  double v42; // xmm5_8
  __m128i v43; // xmm0
  const __m128i *v44; // rax
  double v45; // xmm4_8
  double v46; // xmm5_8
  __int64 *v47; // [rsp+0h] [rbp-108h] BYREF
  char v48; // [rsp+8h] [rbp-100h]
  __m128i v49; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v50; // [rsp+20h] [rbp-E8h]
  __int64 v51; // [rsp+30h] [rbp-D8h]
  _BYTE v52[16]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v53[96]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v55; // [rsp+D8h] [rbp-30h]

  v12 = *((_QWORD *)this + 2);
  v55 = __readfsqword(0x28u);
  v13 = *(__int16 *)(sub_1EA6A0(v12 + 384, a2, a3, a4, *(double *)a5.m128_u64) + 30);
  if ( !(_BYTE)a2 )
  {
    sub_176E70(this);
    v14 = this;
    sub_283F90((__int64)&v49, (__int64)this);
    v18 = word_8BCE1C;
    if ( v13 >= v54 - 1 - word_8BCE1C )
    {
      v47 = (__int64 *)this;
      v48 = 0;
      sub_176E70(this);
      v14 = (QT::QCoreApplication *)(&dword_0 + 2);
      v21 = sub_288470((__int64)&v47, 2u, 1, a5, a6, a7, a8, v19, v20, a11, a12);
      v22 = v48;
      if ( v21 == 1 )
      {
        v44 = (const __m128i *)sub_1EA680(*((_QWORD *)this + 2) + 384LL, 2, v18, v15, *(double *)a5.m128_u64);
        sub_284C60((__int64)this, (unsigned int)v13, v44, 0, *(double *)a5.m128_u64, a6, a7, a8, v45, v46, a11, a12);
        if ( v22 && v47[49] != v47[45] )
          sub_174FE0(v47);
        goto LABEL_8;
      }
      if ( v48 )
      {
        if ( v47[45] != v47[49] )
          sub_174FE0(v47);
      }
    }
    sub_2852C0((__int64)this, (__int64)v14, v18, v15, *(double *)a5.m128_u64, a6, a7, a8, v16, v17, a11, a12);
LABEL_8:
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v53);
    QT::QFont::~QFont((QT::QFont *)v52);
    return 1;
  }
  sub_176E70(this);
  if ( word_8BCE1C < (int)v13 )
  {
    v37 = (const __m128i *)sub_1EA680(*((_QWORD *)this + 2) + 384LL, a2, v24, v25, *(double *)a5.m128_u64);
    v35 = (unsigned int)v37[1].m128i_i16[7];
    v36 = v37;
    if ( v37[1].m128i_i16[7] || (*(_BYTE *)(*((_QWORD *)this + 2) + 952LL) & 2) == 0 )
      return sub_284C60(
               (__int64)this,
               (unsigned int)(v35 - 1),
               v36,
               -1,
               *(double *)a5.m128_u64,
               a6,
               a7,
               a8,
               v33,
               v34,
               a11,
               a12);
    v49 = _mm_loadu_si128(v37);
    v38 = _mm_loadu_si128(v37 + 1);
    v50 = v38;
    v39 = v37[2].m128i_i64[0];
    v50.m128i_i16[6] = 0;
    v51 = v39;
    return sub_284C60((__int64)this, v35, &v49, -1, *(double *)v38.m128i_i64, a6, a7, a8, v33, v34, a11, a12);
  }
  else
  {
    v49.m128i_i64[0] = (__int64)this;
    v49.m128i_i8[8] = 0;
    sub_176E70(this);
    v28 = sub_288470((__int64)&v49, 1u, 1, a5, a6, a7, a8, v26, v27, a11, a12);
    v31 = v49.m128i_i8[8];
    if ( v28 == 1 )
    {
      v40 = (const __m128i *)sub_1EA680(*((_QWORD *)this + 2) + 384LL, 1, v29, v30, *(double *)a5.m128_u64);
      sub_284C60((__int64)this, (unsigned int)v13, v40, 0, *(double *)a5.m128_u64, a6, a7, a8, v41, v42, a11, a12);
      if ( v31 && *(_QWORD *)(v49.m128i_i64[0] + 392) != *(_QWORD *)(v49.m128i_i64[0] + 360) )
        sub_174FE0((__int64 *)v49.m128i_i64[0]);
      return 1;
    }
    if ( v49.m128i_i8[8] && *(_QWORD *)(v49.m128i_i64[0] + 360) != *(_QWORD *)(v49.m128i_i64[0] + 392) )
      sub_174FE0((__int64 *)v49.m128i_i64[0]);
    v32 = (const __m128i *)sub_1EA680(*((_QWORD *)this + 2) + 384LL, 1, v29, v30, *(double *)a5.m128_u64);
    v35 = (unsigned int)v32[1].m128i_i16[7];
    v36 = v32;
    if ( v32[1].m128i_i16[7] || (*(_BYTE *)(*((_QWORD *)this + 2) + 952LL) & 2) == 0 )
      return sub_284C60(
               (__int64)this,
               (unsigned int)(v35 - 1),
               v36,
               -1,
               *(double *)a5.m128_u64,
               a6,
               a7,
               a8,
               v33,
               v34,
               a11,
               a12);
    v49 = _mm_loadu_si128(v32);
    v43 = _mm_loadu_si128(v32 + 1);
    v50 = v43;
    v51 = v32[2].m128i_i64[0];
    v50.m128i_i16[6] = 0;
    return sub_284C60((__int64)this, v35, &v49, -1, *(double *)v43.m128i_i64, a6, a7, a8, v33, v34, a11, a12);
  }
}
