unsigned __int64 __fastcall sub_546800(QT::QMetaObject *a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  _QWORD v6[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6[1] = a2;
  v6[0] = 0;
  QT::QMetaObject::activate(a1, (QT::QObject *)&off_895EA0, nullptr, (int)v6, a5);
  return v7 - __readfsqword(0x28u);
}
