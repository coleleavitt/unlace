__int64 __fastcall sub_312550(const QT::QObject **a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int *v5; // r12
  unsigned int *v6; // rax

  v2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *a1);
  if ( !v2 )
    return 0;
  v3 = v2 + 576;
  v4 = sub_1E8D00(v2 + 576);
  v5 = (unsigned int *)v4;
  if ( !v4 )
    return 0;
  v6 = (unsigned int *)sub_1E9510(v3, v4);
  if ( !v6 )
    v6 = v5;
  return sub_3124D0(*v6, *a1, a2);
}
