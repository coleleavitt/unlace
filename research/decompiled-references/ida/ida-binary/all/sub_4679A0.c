unsigned __int64 __fastcall sub_4679A0(QT::QMetaObject *a1, char a2, __int64 a3, __int64 a4, void **a5)
{
  char v6; // [rsp+Ch] [rbp-2Ch] BYREF
  int v7[2]; // [rsp+10h] [rbp-28h] BYREF
  char *v8; // [rsp+18h] [rbp-20h]
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v6 = a2;
  v9 = __readfsqword(0x28u);
  *(_QWORD *)v7 = 0;
  v8 = &v6;
  QT::QMetaObject::activate(
    a1,
    (QT::QObject *)&off_887520,
    (const QT::QMetaObject *)((char *)&dword_0 + 1),
    (int)v7,
    a5);
  return v9 - __readfsqword(0x28u);
}
