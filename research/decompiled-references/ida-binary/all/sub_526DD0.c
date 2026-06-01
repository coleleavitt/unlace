__int64 __fastcall sub_526DD0(QT::QMetaObject *a1, __int64 a2, int a3, int a4, void **a5)
{
  __int64 result; // rax

  if ( a4 | a3 )
    return QT::QMetaObject::activate(
             a1,
             (QT::QObject *)&off_89E260,
             (const QT::QMetaObject *)((char *)&dword_0 + 2),
             0,
             a5);
  return result;
}
