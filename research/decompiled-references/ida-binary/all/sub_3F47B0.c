__int64 __fastcall sub_3F47B0(const QT::QObject **a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  QT::QAbstractButton *v3; // rbx
  char isChecked; // al

  v1 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *a1);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(QT::QAbstractButton **)(v1 + 184);
    if ( v3 )
    {
      isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v1 + 184));
      QT::QAbstractButton::setChecked(v3, isChecked != 1);
    }
    return 1;
  }
  return v2;
}
