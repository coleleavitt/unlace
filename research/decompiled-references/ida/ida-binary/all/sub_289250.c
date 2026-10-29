__int64 __fastcall sub_289250(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        _BYTE *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  double v13; // xmm4_8
  double v14; // xmm5_8
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // eax
  int v18; // ebx
  int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // r15
  int v27; // r12d
  __int64 *v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v32; // rax
  double v33; // xmm0_8
  __m128d v34; // xmm1
  __int64 v35; // r14
  double v36; // xmm0_8
  __m128d v37; // xmm1
  int v38; // [rsp+8h] [rbp-1E0h]
  int v41; // [rsp+1Ch] [rbp-1CCh]
  __int64 v42; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v43; // [rsp+28h] [rbp-1C0h] BYREF
  _BYTE v44[16]; // [rsp+30h] [rbp-1B8h] BYREF
  __m128i v45; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v46; // [rsp+50h] [rbp-198h]
  __int128 v47; // [rsp+60h] [rbp-188h]
  __int128 v48; // [rsp+70h] [rbp-178h]
  _BYTE v49[16]; // [rsp+80h] [rbp-168h] BYREF
  _BYTE v50[40]; // [rsp+90h] [rbp-158h] BYREF
  double v51; // [rsp+B8h] [rbp-130h]
  _BYTE v52[64]; // [rsp+E0h] [rbp-108h] BYREF
  _BYTE v53[16]; // [rsp+120h] [rbp-C8h] BYREF
  _BYTE v54[96]; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+190h] [rbp-58h]
  unsigned __int64 v56; // [rsp+1A8h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 360) == *(_QWORD *)(a1 + 392) )
  {
    v22 = 0;
    return v22 << 32;
  }
  v42 = 0;
  sub_283F90((__int64)v52, a1);
  sub_2836D0(a1 + 184, &v42, &v43, (__int64)v52, 0);
  if ( v42 && (int)sub_1F18A0(*(_QWORD *)(a1 + 16), a2, v42) < 0 )
  {
    v18 = -1;
    while ( 1 )
    {
      v32 = sub_289010(a1, v18, a5, a6, a7, a8, v13, v14, a11, a12);
      v21 = *(_QWORD *)(a1 + 16);
      if ( !v32 )
        goto LABEL_36;
      if ( (int)sub_1F18A0(*(_QWORD *)(a1 + 16), a2, v32) >= 0 )
      {
        v21 = *(_QWORD *)(a1 + 16);
        goto LABEL_36;
      }
      if ( --v18 == -21 )
      {
        v22 = 4294957296LL;
        goto LABEL_15;
      }
    }
  }
  if ( !v43 || (int)sub_1F18A0(*(_QWORD *)(a1 + 16), a2, v43) <= 0 )
  {
    v23 = *(_QWORD *)(a1 + 384);
    v24 = *(_QWORD *)(a1 + 360);
    v25 = *(_DWORD *)(a1 + 424);
    v41 = v25;
    v26 = v25;
    v27 = v25 + v55;
    if ( (*(_QWORD *)(a1 + 416) == 0)
       + 0xF0F0F0F0F0F0F0F1LL * ((*(_QWORD *)(a1 + 376) - v24) >> 4)
       + ((*(_QWORD *)(a1 + 416) - v23) >> 3)
       - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
       - 1 < v25 + (int)v55 )
      v27 = (*(_QWORD *)(a1 + 416) == 0)
          + -252645135 * ((*(_QWORD *)(a1 + 376) - v24) >> 4)
          + ((*(_QWORD *)(a1 + 416) - v23) >> 3)
          - 252645135 * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
          - 1;
    if ( v25 < v27 )
    {
      while ( 1 )
      {
        v38 = v26;
        v25 = v26;
        v30 = v26 - 0xF0F0F0F0F0F0F0FLL * ((v24 - *(_QWORD *)(a1 + 368)) >> 4);
        if ( v30 >= 0 && v26 == 0xF0F0F0F0F0F0F0FLL * ((v24 - *(_QWORD *)(a1 + 368)) >> 4) )
          v28 = (__int64 *)(v24 + 272 * v26);
        else
          v28 = *(__int64 **)(v23 + 8 * v30);
        v29 = sub_1F18A0(*(_QWORD *)(a1 + 16), *v28, a2);
        if ( v29 > 0 )
        {
          v25 = a3 + (_DWORD)v26;
          *a4 = 0;
          goto LABEL_40;
        }
        if ( !v29 )
        {
          *a4 = 1;
          goto LABEL_40;
        }
        if ( v27 <= (int)++v26 )
          break;
        v24 = *(_QWORD *)(a1 + 360);
        v23 = *(_QWORD *)(a1 + 384);
      }
      v25 = v38 + 1;
    }
LABEL_40:
    v35 = *(_QWORD *)(a1 + 16);
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    QT::QFont::QFont((QT::QFont *)v49);
    QT::QFont::QFont((QT::QFont *)v44);
    QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v50, (const QT::QFont *)v44);
    QT::QFont::~QFont((QT::QFont *)v44);
    sub_1C8200(&v45, v35, (__m128d)0x3FF0000000000000uLL);
    v36 = v51;
    if ( fabs(v51) < 4.503599627370496e15 )
    {
      v37.m128d_f64[0] = (double)(int)v51;
      *(_QWORD *)&v36 = COERCE_UNSIGNED_INT64(
                          v37.m128d_f64[0]
                        + COERCE_DOUBLE(
                            *(_QWORD *)&_mm_cmpgt_sd((__m128d)*(unsigned __int64 *)&v51, v37).m128d_f64[0]
                          & 0x3FF0000000000000LL))
                      | *(_QWORD *)&v51 & 0x8000000000000000LL;
    }
    v22 = (unsigned int)((int)v36 * (v25 - v41));
    QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 16));
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v50);
    QT::QFont::~QFont((QT::QFont *)v49);
    goto LABEL_15;
  }
  v17 = v55;
  v18 = (*(_QWORD *)(a1 + 416) == 0)
      + -252645135 * ((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
      + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
      - 252645135 * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
      - 1
      - *(_DWORD *)(a1 + 424);
  if ( (int)v55 < 0 )
    v17 = 0;
  if ( v18 > v17 )
    v18 = v17;
  v19 = v18 + 20;
  if ( v18 <= 2147483627 )
  {
    while ( 1 )
    {
      v20 = sub_289010(a1, v18, a5, a6, a7, a8, v15, v16, a11, a12);
      v21 = *(_QWORD *)(a1 + 16);
      if ( !v20 )
        break;
      if ( (int)sub_1F18A0(*(_QWORD *)(a1 + 16), a2, v20) < 0 )
      {
        v21 = *(_QWORD *)(a1 + 16);
        break;
      }
      if ( ++v18 >= v19 )
        goto LABEL_14;
    }
LABEL_36:
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    QT::QFont::QFont((QT::QFont *)v49);
    QT::QFont::QFont((QT::QFont *)v44);
    QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v50, (const QT::QFont *)v44);
    QT::QFont::~QFont((QT::QFont *)v44);
    sub_1C8200(&v45, v21, (__m128d)0x3FF0000000000000uLL);
    v33 = v51;
    if ( fabs(v51) < 4.503599627370496e15 )
    {
      v34.m128d_f64[0] = (double)(int)v51;
      *(_QWORD *)&v33 = COERCE_UNSIGNED_INT64(
                          v34.m128d_f64[0]
                        + COERCE_DOUBLE(
                            *(_QWORD *)&_mm_cmpgt_sd((__m128d)*(unsigned __int64 *)&v51, v34).m128d_f64[0]
                          & 0x3FF0000000000000LL))
                      | *(_QWORD *)&v51 & 0x8000000000000000LL;
    }
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v50);
    QT::QFont::~QFont((QT::QFont *)v49);
    v22 = (unsigned int)((int)v33 * v18);
    goto LABEL_15;
  }
LABEL_14:
  v22 = 9995;
LABEL_15:
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v54);
  QT::QFont::~QFont((QT::QFont *)v53);
  return v22 << 32;
}
