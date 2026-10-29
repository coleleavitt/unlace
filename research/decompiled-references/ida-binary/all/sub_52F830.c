unsigned __int64 __fastcall sub_52F830(
        __int64 a1,
        __int64 *a2,
        unsigned __int8 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rax
  void (*v15)(void); // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  double v20; // xmm4_8
  double v21; // xmm5_8
  QT::QAbstractItemView *v22; // rdi
  unsigned __int64 v23; // rsi
  unsigned __int8 (__fastcall *v24)(__int64, unsigned __int64); // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  QT::QTreeView *v28; // rdi
  QT::QHeaderView *v29; // r12
  __int64 v30; // rax
  int v31; // ebp
  int v32; // r13d
  int v33; // eax
  __int64 v34; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v35; // [rsp+8h] [rbp-30h]

  v13 = *(_QWORD *)a1;
  v35 = __readfsqword(0x28u);
  v15 = *(void (**)(void))(v13 + 96);
  if ( (char *)v15 == (char *)sub_52FBA0 )
  {
    v16 = a2[2];
    *a2 = 0;
    *((_DWORD *)a2 + 2) = -1;
    if ( v16 )
    {
      a2[3] = 0;
      qfree(v16, (const char *)a2);
      a2[2] = 0;
      a2[4] = 0;
    }
    v17 = a2[6];
    a2[5] = 0;
    if ( v17 )
    {
      a2[7] = 0;
      qfree(v17, (const char *)a2);
      a2[6] = 0;
      a2[8] = 0;
    }
    v18 = a2[33];
    a2[9] = 0;
    *(_OWORD *)(a2 + 11) = -1;
    *((_DWORD *)a2 + 20) = 28;
    *((_DWORD *)a2 + 34) = -1;
    a2[18] = 0;
    *((_DWORD *)a2 + 38) = -1;
    a2[27] = -1;
    *(_OWORD *)(a2 + 13) = 0;
    *(_OWORD *)(a2 + 15) = 0;
    *((_OWORD *)a2 + 10) = 0;
    *((_OWORD *)a2 + 11) = 0;
    *(_OWORD *)(a2 + 25) = 0;
    *(_OWORD *)(a2 + 29) = 0;
    *(_OWORD *)(a2 + 31) = 0;
    if ( v18 )
    {
      a2[34] = 0;
      qfree(v18, (const char *)a2);
      a2[33] = 0;
      a2[35] = 0;
    }
    v19 = a2[36];
    if ( v19 )
    {
      a2[37] = 0;
      qfree(v19, (const char *)a2);
      a2[36] = 0;
      a2[38] = 0;
    }
    a2[41] = 0;
    *((_BYTE *)a2 + 336) = 0;
    *((_DWORD *)a2 + 90) = 0;
    *(_OWORD *)(a2 + 39) = -1;
    a4 = 0.0;
    *(_OWORD *)(a2 + 43) = 0;
  }
  else
  {
    v15();
  }
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a2, a3);
  v22 = (QT::QAbstractItemView *)a2[41];
  if ( v22 )
  {
    sub_48FF00(v22, nullptr, a2 + 36, 24, 0);
    if ( a2[37] )
      a2[25] = (__int64)(a2 + 36);
  }
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD *, __int64 *))(QT::QCoreApplication::self[2] + 64LL))(
      QT::QCoreApplication::self + 2,
      a2 + 2);
  v23 = *((unsigned int *)a2 + 2);
  v24 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 64LL);
  if ( v24 == sub_52F7D0 )
  {
    if ( (_DWORD)v23 != 35 )
    {
      if ( (unsigned int)v23 > 0x13 || (_DWORD)v23 == 3 )
      {
        if ( (unsigned int)v23 > 0x38 )
          return v35 - __readfsqword(0x28u);
        v26 = 0x1F2021000000000LL;
        if ( !_bittest64(&v26, v23) )
          return v35 - __readfsqword(0x28u);
      }
      else if ( (v23 & 0xFFFFFFF7) == 2 || (_DWORD)v23 == 1 || (_DWORD)v23 == 13 )
      {
        return v35 - __readfsqword(0x28u);
      }
    }
  }
  else if ( !v24(a1, v23) )
  {
    return v35 - __readfsqword(0x28u);
  }
  v27 = *a2;
  sub_4A6F30((__int64 *)*a2, a2 + 6, a4, a5, a6, a7, v20, v21, a10, a11);
  a2[5] = *(_QWORD *)(v27 + 2392);
  if ( *(_DWORD *)(v27 + 2376) == 2 )
  {
    v28 = *(QT::QTreeView **)(v27 + 2384);
    v29 = (QT::QHeaderView *)QT::QTreeView::header(v28);
  }
  else
  {
    v28 = *(QT::QTreeView **)(v27 + 2472);
    v29 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(v28);
  }
  v34 = QT::QCursor::pos(v28);
  v30 = QT::QWidget::mapFromGlobal(v29, &v34);
  v31 = v30;
  v32 = HIDWORD(v30);
  if ( (unsigned int)QT::QHeaderView::orientation(v29) == 1 )
    v33 = QT::QHeaderView::logicalIndexAt(v29, v31);
  else
    v33 = QT::QHeaderView::logicalIndexAt(v29, v32);
  *((_DWORD *)a2 + 54) = v33;
  return v35 - __readfsqword(0x28u);
}
