unsigned __int64 __fastcall sub_4CFFD0(QT::QTabBar **a1)
{
  QT::QTabBar *v1; // rax
  __int64 (__fastcall *v2)(__int64); // rax
  int v3; // r14d
  unsigned int v4; // ebp
  int v5; // r12d
  __int64 (__fastcall *v6)(__int64, int); // rax
  const QT::QObject *v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+28h] [rbp-60h] BYREF
  __m128i ptr; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v1 = *a1;
  v15 = __readfsqword(0x28u);
  v2 = *((__int64 (__fastcall **)(__int64))v1 + 58);
  if ( v2 == sub_4C46A0 )
  {
    v3 = QT::QStackedWidget::count(a1[9]);
    if ( v3 > 0 )
      goto LABEL_3;
LABEL_21:
    v5 = 0;
    goto LABEL_17;
  }
  v3 = v2((__int64)a1);
  if ( v3 <= 0 )
    goto LABEL_21;
LABEL_3:
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *((__int64 (__fastcall **)(__int64, int))*a1 + 57);
    if ( v6 == sub_4C46C0 )
    {
      v7 = (const QT::QObject *)QT::QStackedWidget::widget(a1[9], v4);
      v8 = QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v7);
    }
    else
    {
      v8 = v6((__int64)a1, v4);
    }
    if ( !*(_BYTE *)(v8 + 44) )
    {
      QT::QIcon::QIcon((QT::QIcon *)&v12);
      if ( !*(_DWORD *)(v8 + 40) )
      {
        QT::QWidget::windowIcon((QT::QWidget *)&v13);
        v10 = v13;
        v11 = v12;
        v13 = 0;
        v12 = v10;
        ptr.m128i_i64[0] = v11;
        QT::QIcon::~QIcon((QT::QIcon *)&ptr);
        QT::QIcon::~QIcon((QT::QIcon *)&v13);
      }
      (*(void (__fastcall **)(__m128i *))(*(_QWORD *)v8 + 416LL))(&ptr);
      if ( (int)QT::QTabBar::count(a1[8]) <= v5 )
        QT::QTabBar::addTab(a1[8], (const QT::QString *)&ptr);
      sub_4CFC40((__int64)a1, v5++, &ptr, (const QT::QString *)&ptr, (const QT::QIcon *)&v12);
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
      QT::QIcon::~QIcon((QT::QIcon *)&v12);
    }
    ++v4;
  }
  while ( v3 != v4 );
LABEL_17:
  while ( (int)QT::QTabBar::count(a1[8]) > v5 )
    QT::QTabBar::removeTab(a1[8], v5);
  return v15 - __readfsqword(0x28u);
}
