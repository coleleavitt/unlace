unsigned __int64 __fastcall sub_4762C0(QT::QMetaObject *a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  int v7; // [rsp+8h] [rbp-40h] BYREF
  int v8; // [rsp+Ch] [rbp-3Ch] BYREF
  int v9[2]; // [rsp+10h] [rbp-38h] BYREF
  int *v10; // [rsp+18h] [rbp-30h]
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 *v12; // [rsp+28h] [rbp-20h]
  int *v13; // [rsp+30h] [rbp-18h]
  unsigned __int64 v14; // [rsp+38h] [rbp-10h]

  v8 = a2;
  v6 = a4;
  v7 = (int)a5;
  v14 = __readfsqword(0x28u);
  v11 = a3;
  v10 = &v8;
  v13 = &v7;
  *(_QWORD *)v9 = 0;
  v12 = &v6;
  QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&word_38, (int)v9, a5);
  return v14 - __readfsqword(0x28u);
}
