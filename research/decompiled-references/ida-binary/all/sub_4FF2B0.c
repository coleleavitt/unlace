QT::QWidget *__fastcall sub_4FF2B0(QT::QObject *a1, __int64 a2, QT::QAbstractButton **a3)
{
  unsigned __int16 v4; // r13
  __int64 v5; // r14
  bool v7; // zf
  _DWORD *v8; // rax
  __m128 v9; // xmm1
  char v10; // cl
  __m128i si128; // xmm0
  int v12; // edx
  __m128i v13; // xmm0
  char *v14; // rax
  const char *v15; // r15
  char *v16; // rax
  char *v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  _DWORD *v22; // rax
  __m128 v23; // xmm1
  char v24; // cl
  __m128i v25; // xmm0
  int v26; // edx
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  char v29; // dl
  QT::QAbstractButton *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  QT::QButtonGroup *v38; // [rsp+0h] [rbp-188h]
  __int64 v39; // [rsp+8h] [rbp-180h]
  QT::QWidget *v40; // [rsp+10h] [rbp-178h]
  QT::QLayout *v41; // [rsp+18h] [rbp-170h]
  char *s; // [rsp+28h] [rbp-160h]
  bool sa; // [rsp+28h] [rbp-160h]
  int v45; // [rsp+3Ch] [rbp-14Ch]
  void *v46; // [rsp+40h] [rbp-148h] BYREF
  __int64 v47; // [rsp+48h] [rbp-140h]
  __int64 v48; // [rsp+50h] [rbp-138h]
  void *ptr[4]; // [rsp+60h] [rbp-128h] BYREF
  __m128 v50; // [rsp+80h] [rbp-108h]
  char v51; // [rsp+90h] [rbp-F8h]
  __m128i v52; // [rsp+94h] [rbp-F4h]
  int v53; // [rsp+A4h] [rbp-E4h]
  __m128i v54; // [rsp+A8h] [rbp-E0h]
  void *v55[2]; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-C0h]
  char v57; // [rsp+D0h] [rbp-B8h]
  __int64 v58; // [rsp+D4h] [rbp-B4h]
  _DWORD v59[26]; // [rsp+E0h] [rbp-A8h] BYREF
  unsigned __int64 v60; // [rsp+148h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v40 = (QT::QWidget *)operator new(0x28u);
  QT::QGroupBox::QGroupBox(v40, nullptr);
  v38 = (QT::QButtonGroup *)operator new(0x10u);
  QT::QButtonGroup::QButtonGroup(v38, a1);
  v4 = *(_WORD *)(a2 + 124);
  v5 = *(_QWORD *)(a2 + 16);
  v45 = *(_DWORD *)(a2 + 136);
  if ( *(_BYTE *)(a2 + 140) )
  {
    v41 = (QT::QLayout *)operator new(0x20u);
    QT::QHBoxLayout::QHBoxLayout(v41);
    if ( (int)v5 <= 0 )
      return v40;
  }
  else
  {
    v41 = (QT::QLayout *)operator new(0x20u);
    QT::QVBoxLayout::QVBoxLayout(v41);
    if ( (int)v5 <= 0 )
      return v40;
  }
  v7 = *(_QWORD *)(a2 + 16) == 0;
  memset(v59, 0, 0x60u);
  v59[8] = -1;
  v59[21] = -1;
  if ( v7 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DDDB0);
    v9 = 0;
    v12 = 0;
    v10 = 0;
    v8 = v59;
  }
  else
  {
    v8 = *(_DWORD **)(a2 + 8);
    v9 = (__m128)_mm_loadu_si128((const __m128i *)v8);
    v10 = *((_BYTE *)v8 + 16);
    si128 = _mm_loadu_si128((const __m128i *)(v8 + 5));
    v12 = v8[9];
  }
  v52 = si128;
  v53 = v12;
  v51 = v10;
  v50 = v9;
  v54 = _mm_loadu_si128((const __m128i *)(v8 + 10));
  v13 = _mm_loadu_si128((const __m128i *)(v8 + 14));
  v56 = *((_QWORD *)v8 + 9);
  *(__m128i *)v55 = v13;
  if ( v13.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v13.m128i_i64[0], 1u);
  v57 = *((_BYTE *)v8 + 80);
  v58 = *(_QWORD *)(v8 + 21);
  QT::QString::toUtf8_helper((QT::QString *)&v46, (const QT::QString *)v55);
  if ( v55[0] && !_InterlockedSub((volatile signed __int32 *)v55[0], 1u) )
    free(v55[0]);
  if ( !v46 || *(int *)v46 > 1 )
    QT::QByteArray::reallocData(&v46, v48, 1);
  if ( *(_BYTE *)v47 == 35 )
  {
    v14 = strchr((const char *)(v47 + 1), 35);
    if ( v14 )
    {
      v15 = v14 + 1;
      v16 = strchr(v14 + 1, 35);
      if ( v16 )
      {
        *v16 = 0;
        s = v16 + 1;
        v17 = strchr(v16 + 1, 35);
        if ( v17 )
        {
          *v17 = 0;
          v18 = strlen(s);
          *(double *)v13.m128i_i64 = QT::QString::fromUtf8(ptr, v18, s);
          QT::QWidget::setToolTip(v40, (const QT::QString *)ptr);
          if ( ptr[0] )
          {
            if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
              free(ptr[0]);
          }
        }
        v19 = strlen(v15);
        QT::QString::fromUtf8(ptr, v19, v15, *(double *)v13.m128i_i64);
        QT::QGroupBox::setTitle(v40, (const QT::QString *)ptr);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
    }
  }
  if ( v46 && !_InterlockedSub((volatile signed __int32 *)v46, 1u) )
    free(v46);
  v20 = (unsigned int)(v5 - 1);
  sa = 0;
  v21 = 0;
  v39 = v20;
  while ( 1 )
  {
    memset(v59, 0, 0x60u);
    v59[8] = -1;
    v59[21] = -1;
    if ( v21 < *(_QWORD *)(a2 + 16) )
    {
      v22 = (_DWORD *)(*(_QWORD *)(a2 + 8) + 96 * v21);
      v23 = (__m128)_mm_loadu_si128((const __m128i *)v22);
      v24 = *((_BYTE *)v22 + 16);
      v25 = _mm_loadu_si128((const __m128i *)(v22 + 5));
      v26 = v22[9];
    }
    else
    {
      v25 = _mm_load_si128((const __m128i *)&xmmword_5DDDB0);
      v23 = 0;
      v26 = 0;
      v24 = 0;
      v22 = v59;
    }
    v52 = v25;
    v27 = _mm_loadu_si128((const __m128i *)(v22 + 10));
    v53 = v26;
    v51 = v24;
    v50 = v23;
    v54 = v27;
    v28 = _mm_loadu_si128((const __m128i *)(v22 + 14));
    v56 = *((_QWORD *)v22 + 9);
    *(__m128i *)v55 = v28;
    if ( v28.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)v28.m128i_i64[0], 1u);
    v29 = *((_BYTE *)v22 + 80);
    v57 = v29;
    v58 = *(_QWORD *)(v22 + 21);
    if ( v51 == 99 )
    {
LABEL_51:
      v30 = sub_4FEEF0(a1, (const QT::QString *)v55, v52.m128i_i32[3], v4 & 1, *(double *)v28.m128i_i64, v23);
      v4 >>= 1;
      QT::QButtonGroup::addButton(v38, v30, -1);
      if ( !v21 )
        goto LABEL_52;
      goto LABEL_48;
    }
    if ( v51 > 99 )
    {
      if ( v51 == 114 )
        goto LABEL_47;
    }
    else
    {
      if ( v51 == 67 )
        goto LABEL_51;
      if ( v51 == 82 )
      {
LABEL_47:
        v30 = sub_4FF0D0(
                a1,
                (const QT::QString *)v55,
                v52.m128i_i32[3],
                v4 == (_DWORD)v21,
                *(double *)v28.m128i_i64,
                v23);
        QT::QButtonGroup::addButton(v38, v30, -1);
        sa = 1;
        if ( v21 )
          goto LABEL_48;
LABEL_52:
        QT::QButtonGroup::setExclusive(v38, sa);
LABEL_48:
        if ( v30 )
          QT::QBoxLayout::addWidget(v41, v30, 0, 0);
        goto LABEL_50;
      }
    }
    v30 = nullptr;
    if ( v21 )
      goto LABEL_37;
    QT::QButtonGroup::setExclusive(v38, sa);
LABEL_50:
    v29 = v57;
LABEL_37:
    if ( v29 )
      *a3 = v30;
    if ( v55[0] && !_InterlockedSub((volatile signed __int32 *)v55[0], 1u) )
      free(v55[0]);
    if ( v39 == v21 )
      break;
    ++v21;
  }
  v31 = *((_QWORD *)a1 + 6);
  v32 = *((_QWORD *)a1 + 5);
  if ( *((_QWORD *)a1 + 7) < (unsigned __int64)(v31 + 1) )
  {
    v37 = qvector_reserve((char *)a1 + 40, v32, v31 + 1, 72);
    v31 = *((_QWORD *)a1 + 6);
    *((_QWORD *)a1 + 5) = v37;
    v32 = v37;
  }
  v33 = v32 + 72 * v31;
  *(_QWORD *)(v33 + 56) = 0xFFFFFFFFLL;
  *(_OWORD *)v33 = 0;
  *(_OWORD *)(v33 + 16) = 0;
  *(_QWORD *)(v33 + 48) = 0;
  *(_OWORD *)(v33 + 32) = 0;
  *(_QWORD *)(v33 + 64) = 0;
  ++*((_QWORD *)a1 + 6);
  *(_QWORD *)v33 = v38;
  *(_DWORD *)(v33 + 56) = v45;
  *(_BYTE *)(v33 + 52) = !sa ? 71 : 103;
  *(_QWORD *)(v33 + 32) = *(_QWORD *)(a2 + 128);
  ptr[0] = v40;
  v34 = *(_QWORD *)(v33 + 16);
  v35 = *(_QWORD *)(v33 + 8);
  if ( *(_QWORD *)(v33 + 24) < (unsigned __int64)(v34 + 1) )
  {
    v36 = qvector_reserve(v33 + 8, v35, v34 + 1, 8);
    *(_QWORD *)(v33 + 8) = v36;
    v35 = v36;
    v34 = *(_QWORD *)(v33 + 16);
  }
  *(_QWORD *)(v35 + 8 * v34) = v40;
  ++*(_QWORD *)(v33 + 16);
  QT::QWidget::setLayout(v40, v41);
  return v40;
}
