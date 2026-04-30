unsigned __int64 __fastcall sub_547EF0(QT::QMetaObject *a1, __int64 a2, int a3, __int64 a4, void **a5)
{
  int v6; // [rsp+Ch] [rbp-2Ch] BYREF
  int v7[2]; // [rsp+10h] [rbp-28h] BYREF
  __int64 v8; // [rsp+18h] [rbp-20h]
  int *v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v6 = a3;
  v10 = __readfsqword(0x28u);
  v8 = a2;
  v9 = &v6;
  *(_QWORD *)v7 = 0;
  QT::QMetaObject::activate(a1, (QT::QObject *)&off_8974E0, nullptr, (int)v7, a5);
  return v10 - __readfsqword(0x28u);
}
