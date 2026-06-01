unsigned __int64 __fastcall sub_390F70(
        __int64 a1,
        QT::QTreeWidgetItem *a2,
        __m128 si128,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v12; // r13d
  int v13; // eax
  QT::QTableWidgetItem *v14; // rbx
  double v15; // xmm4_8
  double v16; // xmm5_8
  QT::QTableWidget *v17; // rdi
  const QT::QTableWidgetItem *v18; // rbp
  __int64 *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  QT::QTableWidget *v23; // rdi
  __int64 v24; // rdx
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v28; // rax
  __int64 v29; // rax
  QT::QString *v30[2]; // [rsp+0h] [rbp-C8h] BYREF
  int v31[2]; // [rsp+18h] [rbp-B0h]
  void (__fastcall *v32)(const QT::QTableWidgetItem *, __int64, _BYTE *); // [rsp+20h] [rbp-A8h]
  int v33; // [rsp+2Ch] [rbp-9Ch]
  _BYTE v34[8]; // [rsp+38h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v36[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( a2 )
  {
    v12 = 0;
    v13 = QT::QTableWidget::rowCount(*(QT::QTableWidget **)(a1 + 88));
    *(_BYTE *)(a1 + 56) = 0;
    v33 = v13;
    v30[0] = (QT::QString *)ptr;
    if ( v13 <= 0 )
    {
LABEL_9:
      v24 = xmmword_8CF408;
      v19 = &qword_8CF400;
      if ( (_QWORD)xmmword_8CF408 )
      {
LABEL_10:
        sub_531B30(1, 0, v19);
        return sub_38BE00(a1, *(double *)si128.m128_u64, a4, a5, a6, v25, v26, a9, a10);
      }
      v20 = qword_8CF400;
      LOBYTE(ptr[1]) = 1;
      ptr[0] = "strchoose:OffsetsAddMissingFields";
      if ( (unsigned __int64)ptr >= qword_8CF400
        && (unsigned __int64)ptr < qword_8CF400 + 16LL * *((_QWORD *)&xmmword_8CF408 + 1) )
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
        if ( !*((_QWORD *)&xmmword_8CF408 + 1) )
        {
          *(__m128 *)v30 = si128;
          v29 = qvector_reserve(&qword_8CF400, qword_8CF400, 1, 16);
          v24 = xmmword_8CF408;
          si128 = (__m128)_mm_load_si128((const __m128i *)v30);
          qword_8CF400 = v29;
          v20 = v29;
        }
        *(__m128 *)(v20 + 16 * v24) = si128;
        goto LABEL_14;
      }
      if ( *((_QWORD *)&xmmword_8CF408 + 1) )
      {
LABEL_13:
        si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
        *(__m128 *)(v20 + 16 * v24) = si128;
LABEL_14:
        *(_QWORD *)&xmmword_8CF408 = xmmword_8CF408 + 1;
        goto LABEL_10;
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = (QT::QTableWidgetItem *)QT::QTableWidget::item(*(QT::QTableWidget **)(a1 + 88), v12, 0);
        *(double *)si128.m128_u64 = QT::QString::fromUtf8(v30[0], 0, (const char *)&unk_5C2F25);
        LODWORD(v14) = sub_390990(
                         a1,
                         v14,
                         a2,
                         0,
                         (__m128i *)v30[0],
                         *(double *)si128.m128_u64,
                         a4,
                         a5,
                         a6,
                         v15,
                         v16,
                         a9,
                         a10);
        v17 = *(QT::QTableWidget **)(a1 + 88);
        *(_BYTE *)(a1 + 56) |= (_DWORD)v14 == 4;
        v18 = (const QT::QTableWidgetItem *)QT::QTableWidget::item(v17, v12, 2);
        sub_390E80((QT::QIcon *)v34, (int)v14);
        v19 = (__int64 *)v36;
        *(_QWORD *)v31 = *(_QWORD *)(*(_QWORD *)v18 + 32LL);
        QT::QIcon::operator QT::QVariant(v36, v34);
        (*(void (__fastcall **)(const QT::QTableWidgetItem *, __int64, _BYTE *))v31)(v18, 1, v36);
        QT::QVariant::~QVariant((QT::QVariant *)v36);
        QT::QIcon::~QIcon((QT::QIcon *)v34);
        *(_QWORD *)v31 = *(_QWORD *)(*(_QWORD *)v18 + 32LL);
        QT::QVariant::QVariant((QT::QVariant *)v36, v30[0]);
        (*(void (__fastcall **)(const QT::QTableWidgetItem *, _QWORD, _BYTE *))v31)(v18, 0, v36);
        QT::QVariant::~QVariant((QT::QVariant *)v36);
        (*(void (__fastcall **)(_BYTE *, QT::QTreeWidgetItem *, _QWORD, __int64))(*(_QWORD *)a2 + 24LL))(
          v36,
          a2,
          0,
          256);
        v20 = 0;
        v31[0] = QT::QVariant::toInt((QT::QVariant *)v36, nullptr);
        QT::QVariant::~QVariant((QT::QVariant *)v36);
        v23 = *((QT::QTableWidget **)v18 + 5);
        if ( !v23 )
          break;
        v20 = (__int64)v18;
        if ( (unsigned int)QT::QTableWidget::column(v23, v18) != 2 )
          break;
        v32 = *(void (__fastcall **)(const QT::QTableWidgetItem *, __int64, _BYTE *))(*(_QWORD *)v18 + 32LL);
        QT::QVariant::QVariant((QT::QVariant *)v36, v31[0]);
        v32(v18, 256, v36);
        QT::QVariant::~QVariant((QT::QVariant *)v36);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        if ( v33 == ++v12 )
          goto LABEL_9;
      }
      if ( under_debugger )
        BUG();
      interr(40475, v20, v21, v22, *(double *)si128.m128_u64);
    }
    v28 = qvector_reserve(v19, v20, 1, 16);
    v24 = xmmword_8CF408;
    qword_8CF400 = v28;
    v20 = v28;
    goto LABEL_13;
  }
  return v37 - __readfsqword(0x28u);
}
