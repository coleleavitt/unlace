unsigned __int64 __fastcall sub_190CD0(__int64 a1, __int64 a2)
{
  void *v3; // rdx
  QT::QLineEdit *v5; // rbp
  __int64 v6; // rdi
  QT::QComboBox *v7; // r12
  unsigned int v8; // eax
  void **v10; // r12
  void **v11; // r13
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  void **v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, a2, 0);
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 72) = -1;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 16) = NameContainer___vtable_at__16;
  *(_QWORD *)a1 = &NameContainer___vtable;
  *(_WORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  v3 = (void *)operator new(0x90u);
  *(_QWORD *)(a1 + 56) = v3;
  memset(v3, 0, 0x90u);
  sub_18F910((__int64)v3, (QT::QWidget *)a1);
  sub_18F640(*(_QWORD **)(a1 + 56), (QT::QWidget *)a1);
  v5 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v5, nullptr);
  *(_QWORD *)(a1 + 64) = v5;
  QT::QObject::setObjectName(v5, "name_input", 10);
  QT::QComboBox::setLineEdit(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 32LL), *(QT::QLineEdit **)(a1 + 64));
  v6 = QT::QComboBox::completer(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 32LL));
  if ( v6 )
    QT::QCompleter::setCaseSensitivity(v6, 1);
  v7 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 32LL);
  sub_4F7790(&ptr, "I");
  v8 = QT::QComboBox::count(v7);
  QT::QComboBox::insertItems(v7, v8, &ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    v10 = v13;
    v11 = &v13[3 * v14];
    if ( v13 != v11 )
    {
      do
      {
        if ( *v10 && !_InterlockedSub((volatile signed __int32 *)*v10, 1u) )
          free(*v10);
        v10 += 3;
      }
      while ( v11 != v10 );
    }
    free(ptr);
  }
  QT::QObject::connect(&ptr, *(_QWORD *)(a1 + 64), "2editingFinished()", a1, "1change_name()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  QT::QObject::connect(
    &ptr,
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    "2stateChanged(int)",
    a1,
    "1flag_changed(int)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  QT::QObject::connect(
    &ptr,
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 88LL),
    "2stateChanged(int)",
    a1,
    "1flag_changed(int)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  QT::QObject::connect(
    &ptr,
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 96LL),
    "2stateChanged(int)",
    a1,
    "1flag_changed(int)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 104LL), 0);
  QT::QObject::connect(
    &ptr,
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 112LL),
    "2stateChanged(int)",
    a1,
    "1flag_changed(int)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  return v15 - __readfsqword(0x28u);
}
