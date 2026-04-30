unsigned __int64 __fastcall sub_524020(QT::QObject *a1, QT::QObject *this)
{
  __int64 v3; // rax
  __int64 (__fastcall *v5)(QT::QObject *, __int64 *); // rax
  int v6; // eax
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  int v9; // eax
  char v10; // r14
  __int64 v11; // r12
  __int64 v12; // r15
  int v13; // edx
  __int64 v14; // rdi
  __m128i *v15; // rsi
  void (*v16)(void); // rax
  __int64 v18; // rdx
  __m128i *v19; // rax
  __m128i v20; // xmm0
  QT::QHeaderView *v21; // [rsp+0h] [rbp-B8h]
  __int64 *v22; // [rsp+10h] [rbp-A8h]
  __int64 v23; // [rsp+20h] [rbp-98h] BYREF
  __int128 v24; // [rsp+28h] [rbp-90h]
  __m128i v25; // [rsp+40h] [rbp-78h] BYREF
  __int64 v26; // [rsp+60h] [rbp-58h] BYREF
  __int128 v27; // [rsp+68h] [rbp-50h]
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v3 = *(_QWORD *)this;
  v28 = __readfsqword(0x28u);
  v22 = (__int64 *)((char *)a1 + 304);
  v5 = *(__int64 (__fastcall **)(QT::QObject *, __int64 *))(v3 + 128);
  v26 = -1;
  v27 = 0u;
  v6 = v5(this, &v26);
  sub_4DF9C0((__int64)a1 + 304, v6);
  *((_DWORD *)a1 + 496) |= 0x1000000u;
  *((_QWORD *)this + 2) = (char *)a1 + 304;
  sub_497D00(a1, this);
  if ( (*((_BYTE *)this + 120) & 8) != 0 )
  {
    v25.m128i_i64[1] = 0;
    v25.m128i_i64[0] = (__int64)sub_51F1E0;
    *(_QWORD *)&v27 = 0;
    v26 = (__int64)&QT::QTreeView::expanded;
    v19 = (__m128i *)operator new(0x20u);
    v20 = _mm_load_si128(&v25);
    v19->m128i_i32[0] = 1;
    v19->m128i_i64[1] = (__int64)sub_51F640;
    v19[1] = v20;
    QT::QObject::connectImpl(&v23, a1, &v26, a1, &v25, v19, 0, 0, &QT::QTreeView::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v23);
  }
  v7 = *((_QWORD *)a1 + 28);
  v23 = 0;
  v24 = 0;
  v8 = *(__int64 (**)())(*(_QWORD *)v7 + 24LL);
  if ( v8 == sub_51F080 )
  {
    v21 = (QT::QHeaderView *)QT::QTreeView::header(a1);
    v9 = QT::QHeaderView::count(v21);
    v10 = 0;
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(__int64, __int64 *))v8)(v7, &v23);
    v21 = (QT::QHeaderView *)QT::QTreeView::header(a1);
    v9 = QT::QHeaderView::count(v21);
    if ( v10 )
      v10 = (_QWORD)v24 == v9;
  }
  if ( v9 > 0 )
  {
    v11 = v9;
    v12 = 0;
    while ( 1 )
    {
      if ( v10 )
        v13 = *(_DWORD *)(v23 + 4 * v12);
      else
        v13 = sub_48AB50((__int64)this + 24, v12, (__int64)a1);
      if ( v13 < 0 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)this + 12) + 4 * v12 + 2) & 0x10) == 0 )
          goto LABEL_8;
LABEL_13:
        QT::QHeaderView::setSectionHidden(v21, v12++, 1);
        if ( v11 == v12 )
          break;
      }
      else
      {
        QT::QHeaderView::resizeSection(v21, v12, v13);
        if ( (*(_BYTE *)(*((_QWORD *)this + 12) + 4 * v12 + 2) & 0x10) != 0 )
          goto LABEL_13;
LABEL_8:
        if ( v11 == ++v12 )
          break;
      }
    }
  }
  v14 = *((_QWORD *)a1 + 28);
  memset(&v25, 0, 24);
  v15 = &v25;
  v16 = *(void (**)(void))(*(_QWORD *)v14 + 32LL);
  if ( (char *)v16 != (char *)sub_51F090 )
  {
    v16();
    v15 = &v25;
  }
  sub_51A2D0(v21, (unsigned __int64 *)&v25);
  *((_DWORD *)a1 + 496) &= ~0x1000000u;
  if ( (*((_BYTE *)this + 120) & 8) != 0 && (*((_BYTE *)a1 + 236) & 2) == 0 )
  {
    v27 = 0;
    v26 = 0;
    v26 = qvector_reserve(&v26, 0, 2, 1);
    v15 = (__m128i *)&v26;
    *(_QWORD *)&v27 = 2;
    *(_BYTE *)v26 = 47;
    *(_BYTE *)(v26 + 1) = 0;
    sub_4901A0((__int64)this + 224, (__int64)&v26, 0.0);
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26, (const char *)&v26);
    }
    sub_4E4770(v22, (__int64)&v26, v18);
  }
  sub_4DF8B0(v22, v15->m128i_i8);
  if ( v25.m128i_i64[0] )
  {
    v25.m128i_i64[1] = 0;
    qfree(v25.m128i_i64[0], v15->m128i_i8);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, v15->m128i_i8);
  }
  return v28 - __readfsqword(0x28u);
}
