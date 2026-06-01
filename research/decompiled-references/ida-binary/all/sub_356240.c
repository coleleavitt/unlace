__int64 __fastcall sub_356240(__int64 a1)
{
  __int64 v1; // rax
  __int64 i; // rbx
  __int64 v3; // rax
  QT::QComboBox *v4; // rbp
  const char *v5; // r15
  size_t v6; // rax
  int v7; // r12d
  int v8; // ebx
  _BYTE v10[8]; // [rsp+18h] [rbp-90h] BYREF
  void *ptr[4]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v12; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+50h] [rbp-58h]
  __int64 v14; // [rsp+58h] [rbp-50h]
  unsigned __int64 v15; // [rsp+68h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 56);
  v15 = __readfsqword(0x28u);
  QT::QComboBox::clear(*(QT::QComboBox **)(v1 + 424));
  for ( i = *(_QWORD *)(**(_QWORD **)(a1 + 48) + 40LL); *(_QWORD *)i; i += 8 )
  {
    v3 = *(_QWORD *)(a1 + 56);
    v13 = 0;
    v14 = 2;
    v12 = 0;
    v4 = *(QT::QComboBox **)(v3 + 424);
    v5 = *(const char **)(*(_QWORD *)i + 8LL);
    v6 = 0;
    if ( v5 )
      v6 = strlen(*(const char **)(*(_QWORD *)i + 8LL));
    QT::QString::fromUtf8(ptr, v6, v5);
    v7 = QT::QComboBox::count(v4);
    QT::QIcon::QIcon((QT::QIcon *)v10);
    QT::QComboBox::insertItem(v4, v7, (const QT::QIcon *)v10, (const QT::QString *)ptr, (const QT::QVariant *)&v12);
    QT::QIcon::~QIcon((QT::QIcon *)v10);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QVariant::~QVariant((QT::QVariant *)&v12);
  }
  v8 = (unsigned __int8)getinf(8);
  if ( v8 >= (int)QT::QComboBox::count(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 424LL)) )
    v8 = 0;
  return QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 424LL), v8);
}
