unsigned __int64 __fastcall sub_4D5310(__int64 a1, char a2)
{
  __int64 v2; // rax
  QT::QComboBox *v3; // r15
  QT::QComboBox *v4; // r15
  QT::QComboBox *v5; // r15
  QT::QComboBox *v6; // r15
  QT::QComboBox *v8; // r15
  int v9; // r14d
  QT::QComboBox *v10; // r15
  int v11; // r14d
  QT::QComboBox *v12; // r15
  int v13; // r14d
  QT::QComboBox *v14; // r14
  int v15; // r13d
  int v16; // [rsp+Ch] [rbp-9Ch]
  int v17; // [rsp+Ch] [rbp-9Ch]
  int v18; // [rsp+Ch] [rbp-9Ch]
  int v19; // [rsp+Ch] [rbp-9Ch]
  _BYTE v20[8]; // [rsp+18h] [rbp-90h] BYREF
  void *ptr[4]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v22; // [rsp+40h] [rbp-68h] BYREF
  __int64 v23; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h]
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 96);
  v25 = __readfsqword(0x28u);
  QT::QComboBox::clear(*(QT::QComboBox **)(v2 + 16));
  v3 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL);
  v22 = 0;
  v23 = 0;
  v24 = 2;
  QT::QString::fromUtf8(ptr, 8, "contains");
  v16 = QT::QComboBox::count(v3);
  QT::QIcon::QIcon((QT::QIcon *)v20);
  QT::QComboBox::insertItem(v3, v16, (const QT::QIcon *)v20, (const QT::QString *)ptr, (const QT::QVariant *)&v22);
  QT::QIcon::~QIcon((QT::QIcon *)v20);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v22);
  v4 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL);
  v22 = 0;
  v23 = 0;
  v24 = 2;
  QT::QString::fromUtf8(ptr, 15, "doesn't contain");
  v17 = QT::QComboBox::count(v4);
  QT::QIcon::QIcon((QT::QIcon *)v20);
  QT::QComboBox::insertItem(v4, v17, (const QT::QIcon *)v20, (const QT::QString *)ptr, (const QT::QVariant *)&v22);
  QT::QIcon::~QIcon((QT::QIcon *)v20);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v22);
  v5 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL);
  v22 = 0;
  v23 = 0;
  v24 = 2;
  QT::QString::fromUtf8(ptr, 2, "is");
  v18 = QT::QComboBox::count(v5);
  QT::QIcon::QIcon((QT::QIcon *)v20);
  QT::QComboBox::insertItem(v5, v18, (const QT::QIcon *)v20, (const QT::QString *)ptr, (const QT::QVariant *)&v22);
  QT::QIcon::~QIcon((QT::QIcon *)v20);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v22);
  v6 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL);
  v22 = 0;
  v23 = 0;
  v24 = 2;
  QT::QString::fromUtf8(ptr, 6, "is not");
  v19 = QT::QComboBox::count(v6);
  QT::QIcon::QIcon((QT::QIcon *)v20);
  QT::QComboBox::insertItem(v6, v19, (const QT::QIcon *)v20, (const QT::QString *)ptr, (const QT::QVariant *)&v22);
  QT::QIcon::~QIcon((QT::QIcon *)v20);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    QT::QVariant::~QVariant((QT::QVariant *)&v22);
    if ( a2 )
      return v25 - __readfsqword(0x28u);
  }
  else
  {
    QT::QVariant::~QVariant((QT::QVariant *)&v22);
    if ( a2 )
      return v25 - __readfsqword(0x28u);
  }
  v8 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL);
  v22 = 0;
  v23 = 0;
  v24 = 2;
  QT::QString::fromUtf8(ptr, 11, "begins with");
  v9 = QT::QComboBox::count(v8);
  QT::QIcon::QIcon((QT::QIcon *)v20);
  QT::QComboBox::insertItem(v8, v9, (const QT::QIcon *)v20, (const QT::QString *)ptr, (const QT::QVariant *)&v22);
  QT::QIcon::~QIcon((QT::QIcon *)v20);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v22);
  v10 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL);
  v22 = 0;
  v23 = 0;
  v24 = 2;
  QT::QString::fromUtf8(ptr, 9, "ends with");
  v11 = QT::QComboBox::count(v10);
  QT::QIcon::QIcon((QT::QIcon *)v20);
  QT::QComboBox::insertItem(v10, v11, (const QT::QIcon *)v20, (const QT::QString *)ptr, (const QT::QVariant *)&v22);
  QT::QIcon::~QIcon((QT::QIcon *)v20);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v22);
  v12 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL);
  v22 = 0;
  v23 = 0;
  v24 = 2;
  QT::QString::fromUtf8(ptr, 9, "less than");
  v13 = QT::QComboBox::count(v12);
  QT::QIcon::QIcon((QT::QIcon *)v20);
  QT::QComboBox::insertItem(v12, v13, (const QT::QIcon *)v20, (const QT::QString *)ptr, (const QT::QVariant *)&v22);
  QT::QIcon::~QIcon((QT::QIcon *)v20);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v22);
  v14 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL);
  v22 = 0;
  v23 = 0;
  v24 = 2;
  QT::QString::fromUtf8(ptr, 9, "more than");
  v15 = QT::QComboBox::count(v14);
  QT::QIcon::QIcon((QT::QIcon *)v20);
  QT::QComboBox::insertItem(v14, v15, (const QT::QIcon *)v20, (const QT::QString *)ptr, (const QT::QVariant *)&v22);
  QT::QIcon::~QIcon((QT::QIcon *)v20);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v22);
  return v25 - __readfsqword(0x28u);
}
