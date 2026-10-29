__int64 __fastcall sub_1FB940(QT::QObject *a1)
{
  __int64 v1; // rbp
  const char *v2; // rdi
  const QT::QObject *v3; // rsi
  __int64 v4; // rbx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  int v7[4]; // [rsp+8h] [rbp-30h]
  int v8[2]; // [rsp+18h] [rbp-20h]

  *(_QWORD *)v8 = __readfsqword(0x28u);
  v6 = 0;
  *(_OWORD *)v7 = 0;
  sub_1FB5D0(a1, (__int64)&v6);
  v1 = v6;
  v2 = (const char *)v6;
  if ( !*(_QWORD *)v7 )
    v2 = &s1;
  v3 = (const QT::QObject *)sub_2DC6E0(v2);
  v4 = QT::QMetaObject::cast((QT::QMetaObject *)&off_880240, v3);
  if ( v1 )
    qfree(v1, (const char *)v3);
  return v4;
}
