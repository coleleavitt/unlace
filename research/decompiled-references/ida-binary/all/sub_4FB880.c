QT::QComboBox *__fastcall sub_4FB880(QT::QObject *a1, const QT::QString *a2, bool a3, __int64 *a4)
{
  __int64 v5; // rax
  QT::QComboBox *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  size_t v10; // rax
  const char *v11; // rbp
  size_t v12; // rdx
  int v13; // r14d
  __int64 v14; // rax
  QT::QObject *v16; // rax
  _BYTE v18[8]; // [rsp+28h] [rbp-90h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v20; // [rsp+50h] [rbp-68h] BYREF
  __int64 v21; // [rsp+60h] [rbp-58h]
  __int64 v22; // [rsp+68h] [rbp-50h]
  unsigned __int64 v23; // [rsp+78h] [rbp-40h]

  v5 = *(_QWORD *)a1;
  v23 = __readfsqword(0x28u);
  v7 = (QT::QComboBox *)(*(__int64 (__fastcall **)(QT::QObject *, bool, _QWORD, _QWORD))(v5 + 480))(a1, a3, 0, 0);
  v8 = QT::QComboBox::completer(v7);
  if ( v8 )
    QT::QCompleter::setCaseSensitivity(v8, 1);
  QT::QComboBox::setEditable(v7, a3);
  sub_4FB100(v7, a2);
  v9 = *a4;
  if ( 24 * a4[1] )
  {
    do
    {
      v21 = 0;
      v22 = 2;
      v20 = 0;
      v14 = *(_QWORD *)(v9 + 8);
      if ( v14 )
      {
        v10 = v14 - 1;
        v11 = *(const char **)v9;
        v12 = v10 >> 63;
        if ( !*(_QWORD *)v9 )
          goto LABEL_13;
      }
      else
      {
        v11 = &s1;
        LOBYTE(v12) = 0;
        v10 = 0;
        if ( !&s1 )
        {
LABEL_13:
          v10 = 0;
          if ( v11 )
            v10 = strlen(v11);
          goto LABEL_7;
        }
      }
      if ( (_BYTE)v12 )
        goto LABEL_13;
LABEL_7:
      QT::QString::fromUtf8(ptr, v10, v11);
      v13 = QT::QComboBox::count(v7);
      QT::QIcon::QIcon((QT::QIcon *)v18);
      QT::QComboBox::insertItem(v7, v13, (const QT::QIcon *)v18, (const QT::QString *)ptr, (const QT::QVariant *)&v20);
      QT::QIcon::~QIcon((QT::QIcon *)v18);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v9 += 24;
      QT::QVariant::~QVariant((QT::QVariant *)&v20);
    }
    while ( v9 != *a4 + 24 * a4[1] );
  }
  QT::QComboBox::setCurrentIndex(v7, 0);
  if ( a3 )
  {
    v16 = (QT::QObject *)QT::QComboBox::lineEdit(v7);
    QT::QObject::installEventFilter(v16, a1);
  }
  return v7;
}
