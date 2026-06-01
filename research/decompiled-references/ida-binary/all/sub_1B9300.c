__int64 __fastcall sub_1B9300(__int64 a1, QT::QComboBox *a2, __int64 a3, unsigned __int64 a4, double a5)
{
  const QT::QObject *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rsi
  const char *v14; // rbx
  size_t v15; // rax
  int v16; // r15d
  __int64 v20; // [rsp+18h] [rbp-A0h]
  _BYTE v21[8]; // [rsp+28h] [rbp-90h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v23; // [rsp+50h] [rbp-68h] BYREF
  __int64 v24; // [rsp+60h] [rbp-58h]
  __int64 v25; // [rsp+68h] [rbp-50h]
  unsigned __int64 v26; // [rsp+78h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v7 = (const QT::QObject *)QT::QStackedWidget::currentWidget(*(QT::QStackedWidget **)(*(_QWORD *)(a1 + 256) + 176LL));
  v8 = QT::QMetaObject::cast((QT::QMetaObject *)&off_881840, v7);
  if ( !v8 )
  {
    if ( !under_debugger )
      interr(40673, v7, v9, v10, a5);
    BUG();
  }
  if ( a4 )
  {
    v11 = 0;
    v12 = 0;
    v20 = v8 + 40;
    do
    {
      v24 = 0;
      v25 = 2;
      v13 = *(unsigned int *)(a3 + 8 * v12);
      v23 = 0;
      v14 = (const char *)sub_524F40(v20, v13);
      v15 = 0;
      if ( v14 )
        v15 = strlen(v14);
      QT::QString::fromUtf8(ptr, v15, v14);
      v16 = QT::QComboBox::count(a2);
      QT::QIcon::QIcon((QT::QIcon *)v21);
      QT::QComboBox::insertItem(a2, v16, (const QT::QIcon *)v21, (const QT::QString *)ptr, (const QT::QVariant *)&v23);
      QT::QIcon::~QIcon((QT::QIcon *)v21);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      ++v11;
      QT::QVariant::~QVariant((QT::QVariant *)&v23);
      v12 = v11;
    }
    while ( v11 < a4 );
  }
  return QT::QComboBox::setCurrentIndex(a2, 0);
}
