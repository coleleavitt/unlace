__int64 __fastcall sub_3F48A0(__int64 a1, const QT::QObject **a2)
{
  const QT::QObject *v2; // rsi
  __int64 v4; // rax
  unsigned int v5; // edx
  QT::QAbstractButton *v6; // rdi
  char isChecked; // al
  __int64 v8; // rax
  __int64 v10; // rdi
  char v11; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-10h]

  v2 = *a2;
  v12 = __readfsqword(0x28u);
  v4 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, v2);
  v5 = 7;
  if ( v4 )
  {
    v6 = *(QT::QAbstractButton **)(v4 + 184);
    isChecked = 0;
    if ( v6 )
      isChecked = QT::QAbstractButton::isChecked(v6);
    if ( *(_QWORD *)(a1 + 40) )
    {
      v10 = *(_QWORD *)(a1 + 32);
      v11 = isChecked;
      v8 = sub_534430(v10);
      if ( !v8 )
        return 2;
    }
    else
    {
      v11 = isChecked;
      v8 = sub_534430(&s1);
      if ( !v8 )
        return 2;
    }
    sub_537630(v8, 7, &v11);
    return 2;
  }
  return v5;
}
