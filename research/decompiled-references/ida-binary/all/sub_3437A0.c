unsigned __int64 __fastcall sub_3437A0(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 *v6; // r13
  unsigned __int64 v7; // r14
  bool v8; // zf
  __int64 v9; // r13
  const char *v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // r14
  int v13; // ecx
  __int64 *v14; // rdi
  const char *v15; // rdx
  char *v16; // rsi
  QT::QAbstractSlider *v17; // rax
  int v18; // eax
  const char *v19; // rdx
  double v20; // xmm0_8
  int v21; // eax
  const void *v23; // r8
  void *v24; // rdi
  unsigned __int64 v25; // r14
  const void *v26; // r8
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  const void *v30; // [rsp+0h] [rbp-100h]
  const void *v31; // [rsp+0h] [rbp-100h]
  QT::QAbstractScrollArea *v32; // [rsp+8h] [rbp-F8h]
  _BYTE v33[16]; // [rsp+10h] [rbp-F0h] BYREF
  __m128i dest[4]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v35[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v36[24]; // [rsp+70h] [rbp-90h] BYREF
  double v37; // [rsp+88h] [rbp-78h]
  unsigned __int64 v38; // [rsp+C8h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  v5 = sub_1F4200();
  v32 = (QT::QAbstractScrollArea *)v5;
  if ( !v5 || !sub_1EA560(v5 + 384) )
    return v38 - __readfsqword(0x28u);
  v6 = *a2;
  if ( *a2 != (__int64 *)(a3 + 48) )
  {
    v7 = *(_QWORD *)(a3 + 56);
    if ( v7 > 1 )
    {
      v23 = *(const void **)(a3 + 48);
      v24 = (void *)*v6;
      if ( v6[2] < v7 )
      {
        v30 = *(const void **)(a3 + 48);
        v29 = qvector_reserve(*a2, *v6, *(_QWORD *)(a3 + 56), 1);
        v23 = v30;
        *v6 = v29;
        v24 = (void *)v29;
      }
      v6[1] = v7;
      memmove(v24, v23, v7 - 1);
      *(_BYTE *)(*v6 + v7 - 1) = 0;
    }
    else
    {
      v6[1] = 0;
    }
  }
  v8 = *(_QWORD *)(a3 + 56) == 0;
  v9 = *(_QWORD *)(a3 + 40);
  memset(dest, 0, 24);
  v10 = &s1;
  if ( !v8 )
    v10 = *(const char **)(a3 + 48);
  v11 = sub_1FA850(v10);
  if ( v11 )
  {
    (**(void (__fastcall ***)(__int64, __m128i *, _QWORD))v9)(v9, dest, *(_QWORD *)(v11 + 728));
    goto LABEL_10;
  }
  v25 = *(_QWORD *)(a3 + 80);
  if ( v25 > 1 )
  {
    v26 = *(const void **)(a3 + 72);
    v27 = (void *)dest[0].m128i_i64[0];
    if ( dest[1].m128i_i64[0] < v25 )
    {
      v31 = *(const void **)(a3 + 72);
      dest[0].m128i_i64[0] = qvector_reserve(dest, dest[0].m128i_i64[0], *(_QWORD *)(a3 + 80), 1);
      v26 = v31;
      v27 = (void *)dest[0].m128i_i64[0];
    }
    dest[0].m128i_i64[1] = v25;
    memmove(v27, v26, v25 - 1);
    *(_BYTE *)(dest[0].m128i_i64[0] + v25 - 1) = 0;
LABEL_10:
    v12 = *a2;
    if ( v9 )
    {
      v13 = *(_DWORD *)(v9 + 8);
      v14 = v12 + 3;
      v15 = &s1;
      if ( dest[0].m128i_i64[1] )
        v15 = (const char *)dest[0].m128i_i64[0];
      goto LABEL_13;
    }
LABEL_22:
    v16 = (char *)v12[3];
    if ( (unsigned __int64)v12[5] <= 0xF )
    {
      v28 = qvector_reserve(v12 + 3, v16, 16, 1);
      v12[3] = v28;
      v16 = (char *)v28;
    }
    v12[4] = 16;
    qmemcpy(v16, "<unknown place>", 15);
    *(_BYTE *)(v12[3] + 15) = 0;
    goto LABEL_14;
  }
  dest[0].m128i_i64[1] = 0;
  v12 = *a2;
  if ( !v9 )
    goto LABEL_22;
  v13 = *(_DWORD *)(v9 + 8);
  v14 = v12 + 3;
  v15 = &s1;
LABEL_13:
  v16 = "%s, lnnum=%d";
  sub_169A50(v14, (__int64)"%s, lnnum=%d", v15, v13);
LABEL_14:
  if ( dest[0].m128i_i64[0] )
  {
    dest[0].m128i_i64[1] = 0;
    qfree(dest[0].m128i_i64[0], v16);
  }
  memset(dest, 0, sizeof(dest));
  QT::QFont::QFont((QT::QFont *)v35);
  QT::QFont::QFont((QT::QFont *)v33);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v36, (const QT::QFont *)v33);
  QT::QFont::~QFont((QT::QFont *)v33);
  sub_1C8200(dest, (__int64)v32, (__m128d)0x3FF0000000000000uLL);
  v17 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(v32);
  v18 = QT::QAbstractSlider::value(v17);
  v19 = "GRAPH";
  v20 = (double)v18;
  v21 = *(_DWORD *)(a3 + 32);
  if ( v21 != 2 )
  {
    v19 = "PROXIMITY";
    if ( v21 != 3 )
    {
      v19 = "FLAT";
      if ( v21 != 1 )
        v19 = "<UNKNOWN>";
    }
  }
  sub_169A50(
    *a2 + 6,
    (__int64)"rinfo={rtype=%s, pos={cx=%d, cy=%d, node=%d, sx=%d}, gli={zoom=%lf, orgx=%lf, orgy=%lf}}",
    v19,
    *(__int16 *)(a3 + 28),
    *(__int16 *)(a3 + 30),
    *(_DWORD *)(a3 + 24),
    (int)(v20 / v37),
    *(double *)a3,
    *(double *)(a3 + 8),
    *(double *)(a3 + 16));
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v36);
  QT::QFont::~QFont((QT::QFont *)v35);
  return v38 - __readfsqword(0x28u);
}
