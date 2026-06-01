unsigned __int64 __fastcall sub_38D740(
        __int64 a1,
        __int64 a2,
        char *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v11; // r14d
  QT::QCursor *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  const QT::QTableWidgetItem *v18; // rax
  const QT::QTableWidgetItem *v19; // r15
  QT::QTableWidget *v20; // rdi
  QT::QTableWidgetItem *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  char *v26; // r8
  size_t v27; // r14
  size_t v28; // r14
  size_t v29; // r12
  size_t v30; // r15
  _BYTE *v31; // rsi
  size_t v32; // rdx
  char v33; // al
  QT::QTableWidget *v34; // rdi
  QT::QTableWidget *v36; // rdi
  QT::QTableWidget *v37; // r14
  __int64 v38; // rsi
  QT::QTableWidgetItem *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  QT::QTableWidget *v45; // rdi
  int v46; // r15d
  QT::QComboBox *v47; // rdi
  __m128i si128; // xmm0
  __int64 v49; // r14
  __int64 v50; // rax
  double v51; // xmm4_8
  double v52; // xmm5_8
  __int64 v53; // [rsp+8h] [rbp-120h]
  char *src; // [rsp+10h] [rbp-118h]
  void *dest; // [rsp+20h] [rbp-108h] BYREF
  __int128 v56; // [rsp+28h] [rbp-100h]
  void *v57; // [rsp+40h] [rbp-E8h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-E0h]
  void *v59[4]; // [rsp+60h] [rbp-C8h] BYREF
  void *ptr; // [rsp+80h] [rbp-A8h] BYREF
  char *s; // [rsp+88h] [rbp-A0h]
  __int128 v62[2]; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v63[40]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 v64; // [rsp+E8h] [rbp-40h]

  v11 = 256;
  v64 = __readfsqword(0x28u);
  if ( qword_8CD7E8 )
    v11 = sub_1F7CC0(qword_8CD7E8, a2, a4);
  v15 = (QT::QCursor *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 88));
  v16 = sub_1C7B10(v15);
  v17 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)&v62[0] = v16;
  v18 = (const QT::QTableWidgetItem *)QT::QTableWidget::itemAt(v17, v62);
  v19 = v18;
  if ( !v18 )
    goto LABEL_30;
  v20 = *((QT::QTableWidget **)v18 + 5);
  if ( !v20 )
    goto LABEL_30;
  v21 = v18;
  if ( (unsigned int)QT::QTableWidget::column(v20, v18) )
  {
    v34 = *((QT::QTableWidget **)v19 + 5);
    if ( v34 && (unsigned int)QT::QTableWidget::column(v34, v19) == 2 )
    {
      v36 = *((QT::QTableWidget **)v19 + 5);
      v37 = *(QT::QTableWidget **)(a1 + 88);
      if ( v36 )
        v38 = (unsigned int)QT::QTableWidget::row(v36, v19);
      else
        v38 = 0xFFFFFFFFLL;
      v39 = (QT::QTableWidgetItem *)QT::QTableWidget::item(v37, v38, 0);
      v42 = sub_389C80(v39, (QT::QTableWidgetItem *)v38, v40, v41, a4);
      v45 = *((QT::QTableWidget **)v19 + 5);
      v53 = v42;
      if ( !v45 || (v38 = (__int64)v19, (unsigned int)QT::QTableWidget::column(v45, v19) != 2) )
      {
        if ( !under_debugger )
          interr(40476, v38, v43, v44, a4);
        BUG();
      }
      (*(void (__fastcall **)(_BYTE *, const QT::QTableWidgetItem *, __int64))(*(_QWORD *)v19 + 24LL))(v63, v19, 256);
      v46 = QT::QVariant::toInt((QT::QVariant *)v63, nullptr);
      QT::QVariant::~QVariant((QT::QVariant *)v63);
      v47 = *(QT::QComboBox **)(a1 + 96);
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DD0F0);
      v49 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * v46);
      LODWORD(v62[1]) = 0;
      v62[0] = (__int128)si128;
      v50 = QT::QComboBox::lineEdit(v47);
      sub_357F80((const char **)&ptr, v50, v62, *(double *)si128.m128i_i64, a5, a6, a7, v51, v52, a10, a11);
      sub_38C100(a1, a2, v49, (__int64)ptr + *(_QWORD *)(v53 + 8), *(double *)si128.m128i_i64);
    }
    goto LABEL_30;
  }
  v24 = sub_389C80(v19, v21, v22, v23, a4);
  if ( !v24 )
  {
LABEL_30:
    v33 = 0;
    goto LABEL_31;
  }
  v25 = *(_QWORD *)(a1 + 64);
  dest = nullptr;
  v56 = 0;
  (*(void (__fastcall **)(__int64, void **, __int64, __int64, _QWORD))(*(_QWORD *)v25 + 40LL))(
    v25,
    &dest,
    a2 + 100,
    v24,
    v11);
  v57 = nullptr;
  *(_OWORD *)n = 0;
  (*(void (__fastcall **)(_BYTE *, const QT::QTableWidgetItem *, _QWORD))(*(_QWORD *)v19 + 24LL))(v63, v19, 0);
  QT::QVariant::toString((QT::QVariant *)v59);
  QT::QVariant::~QVariant((QT::QVariant *)v63);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v59);
  v26 = s;
  memset(v62, 0, 24);
  if ( s || (v26 = (char *)&QT::QByteArray::_empty) != nullptr )
  {
    src = v26;
    v27 = strlen(v26);
    *(_QWORD *)&v62[0] = qvector_reserve(v62, 0, v27 + 1, 1);
    *((_QWORD *)&v62[0] + 1) = v27 + 1;
    memmove(*(void **)&v62[0], src, v27);
    *(_BYTE *)(*(_QWORD *)&v62[0] + v27) = 0;
  }
  sub_2D11B0((__int64 *)&v57, (__int64)v62, 1, 1);
  if ( *(_QWORD *)&v62[0] )
  {
    *((_QWORD *)&v62[0] + 1) = 0;
    qfree(*(_QWORD *)&v62[0], (const char *)v62);
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v59[0] && !_InterlockedSub((volatile signed __int32 *)v59[0], 1u) )
    free(v59[0]);
  v28 = n[0];
  v29 = ((_QWORD)v56 == 0) + (_QWORD)v56 - 1LL;
  v30 = v29;
  if ( n[0] )
  {
    v28 = n[0] - 1;
    v30 = n[0] - 1 + v29;
  }
  v31 = dest;
  v32 = v30 + 1;
  if ( *((_QWORD *)&v56 + 1) < v30 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v32, 1);
    v32 = v30 + 1;
    v31 = dest;
  }
  *(_QWORD *)&v56 = v32;
  v31[v30] = 0;
  if ( v29 )
    memmove((char *)dest + v28, dest, v29);
  memcpy(dest, v57, v28);
  sub_2D4060(a2, (char **)&dest);
  if ( v57 )
  {
    n[0] = 0;
    qfree(v57, (const char *)&dest);
  }
  if ( dest )
  {
    *(_QWORD *)&v56 = 0;
    qfree(dest, (const char *)&dest);
  }
  v33 = 1;
LABEL_31:
  *(_BYTE *)(a2 + 104) = 0;
  if ( a3 )
    *a3 = v33;
  return v64 - __readfsqword(0x28u);
}
