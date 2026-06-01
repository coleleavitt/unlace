__int64 __fastcall sub_288950(
        __int64 *a1,
        unsigned __int8 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r12d
  __int64 v13; // rsi
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  const __m128i *v20; // r13
  double v21; // xmm4_8
  double v22; // xmm5_8
  int *v23; // rdx
  __int64 v24; // rsi
  __m128 v25; // xmm0
  __int64 v26; // rdi
  __int16 v27; // ax
  __int16 v28; // ax
  __int64 v29; // rdi
  __int64 **v30; // rax
  __int64 *v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  __m128 v35; // xmm0
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 *v38; // [rsp+0h] [rbp-138h] BYREF
  char v39; // [rsp+8h] [rbp-130h]
  __m128i v40; // [rsp+10h] [rbp-128h] BYREF
  __m128 v41; // [rsp+20h] [rbp-118h]
  __int64 v42; // [rsp+30h] [rbp-108h]
  __int64 v43; // [rsp+38h] [rbp-100h]
  char v44[64]; // [rsp+40h] [rbp-F8h] BYREF
  char v45[16]; // [rsp+80h] [rbp-B8h] BYREF
  char v46[96]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v48; // [rsp+108h] [rbp-30h]

  v48 = __readfsqword(0x28u);
  v38 = a1;
  v39 = 0;
  sub_176E70((QT::QCoreApplication *)a1);
  v13 = 2 - (unsigned int)a2;
  v16 = sub_288470((__int64)&v38, v13, 1, a3, a4, a5, a6, v14, v15, a9, a10);
  LOBYTE(v10) = v16 == 1;
  if ( v16 == 1 )
  {
    v20 = (const __m128i *)sub_1EA680(a1[2] + 384, v13, v17, v18, *(double *)a3.m128_u64);
    sub_283F90((__int64)v44, (__int64)a1);
    v23 = &word_8BCE1C;
    v24 = v20[1].m128i_i16[7];
    if ( a2 )
    {
      v23 = (int *)(v47 - 1 - word_8BCE1C);
      if ( v24 < (__int64)v23 )
      {
        v25 = 0;
        v41.m128_u64[0] = 0;
        v41.m128_u64[1] = -1;
        v42 = 0;
        v43 = 0;
        v40 = 0;
        if ( v20 != &v40 )
        {
          v40 = _mm_loadu_si128(v20);
          v25 = (__m128)_mm_loadu_si128(v20 + 1);
          v41 = v25;
          LODWORD(v42) = v20[2].m128i_i32[0];
          v26 = v20[2].m128i_i64[1];
          if ( !v26 )
          {
            v27 = v41.m128_i16[7];
            goto LABEL_11;
          }
          goto LABEL_10;
        }
        v28 = 0;
        goto LABEL_12;
      }
    }
    else if ( word_8BCE1C < (int)v24 )
    {
      v25 = 0;
      v41.m128_u64[0] = 0;
      v41.m128_u64[1] = -1;
      v42 = 0;
      v43 = 0;
      v40 = 0;
      if ( v20 != &v40 )
      {
        v40 = _mm_loadu_si128(v20);
        v25 = (__m128)_mm_loadu_si128(v20 + 1);
        v41 = v25;
        LODWORD(v42) = v20[2].m128i_i32[0];
        v26 = v20[2].m128i_i64[1];
        if ( !v26 )
        {
          v27 = v41.m128_i16[7];
LABEL_19:
          v28 = v27 - 1;
          goto LABEL_12;
        }
LABEL_10:
        v43 = (*(__int64 (__fastcall **)(__int64, __int64, int *, _QWORD))(*(_QWORD *)v26 + 16LL))(
                v26,
                v24,
                v23,
                word_8BCE1C);
        v27 = v41.m128_i16[7];
        if ( a2 )
        {
LABEL_11:
          v28 = v27 + 1;
          goto LABEL_12;
        }
        goto LABEL_19;
      }
      v28 = -2;
LABEL_12:
      v41.m128_i16[7] = v28;
      sub_1FF700(a1[2] + 384, &v40, v25, a4, a5, a6, v21, v22, a9, a10);
      v29 = v43;
      if ( !v43 )
      {
LABEL_14:
        sub_1F6870(a1[2], 1);
        QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v46);
        QT::QFont::~QFont((QT::QFont *)v45);
        goto LABEL_2;
      }
LABEL_13:
      qfree(v29, v40.m128i_i8);
      goto LABEL_14;
    }
    v30 = (__int64 **)sub_284860((__int64)a1, v24);
    if ( !v30 )
      goto LABEL_14;
    v31 = *v30;
    if ( !*v30 )
      goto LABEL_14;
    v32 = _mm_loadu_si128(v20);
    v33 = v20[2].m128i_i64[0];
    v43 = (__int64)v31;
    v42 = v33;
    v34 = *v31;
    v40 = v32;
    v35 = (__m128)_mm_loadu_si128(v20 + 1);
    v41 = v35;
    v43 = (*(__int64 (__fastcall **)(__int64 *))(v34 + 16))(v31);
    sub_1FF700(a1[2] + 384, &v40, v35, a4, a5, a6, v36, v37, a9, a10);
    v29 = v43;
    if ( !v43 )
      goto LABEL_14;
    goto LABEL_13;
  }
LABEL_2:
  if ( v39 && v38[49] != v38[45] )
    sub_174FE0(v38);
  return v10;
}
