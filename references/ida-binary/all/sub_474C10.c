unsigned __int64 __fastcall sub_474C10(QT::QMetaObject *a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  int v7[2]; // [rsp+10h] [rbp-28h] BYREF
  __int64 *v8; // [rsp+18h] [rbp-20h]
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v6 = a2;
  v9 = __readfsqword(0x28u);
  *(_QWORD *)v7 = 0;
  v8 = &v6;
  QT::QMetaObject::activate(
    a1,
    (QT::QObject *)&off_893BE0,
    (const QT::QMetaObject *)((char *)&dword_0 + 1),
    (int)v7,
    a5);
  return v9 - __readfsqword(0x28u);
}
