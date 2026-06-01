unsigned __int64 __fastcall sub_1B9C80(QT::QObject *a1, int *a2)
{
  int v2; // edx
  const QT::QObject *v5; // rax
  QT::QWidget *v6; // rsi
  const char *v7; // rdx
  const char *v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v2 = *a2;
  v10 = __readfsqword(0x28u);
  if ( v2 )
  {
    v5 = (const QT::QObject *)QT::QObject::sender(a1);
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_8979C0, v5) )
    {
      v8 = nullptr;
      v9 = 0;
      v6 = sub_1B98F0(a1, (__int64 *)&v8);
      if ( v6 )
      {
        v7 = &s1;
        if ( (_QWORD)v9 )
          v7 = v8;
        sub_1B53E0((__int64)a1, v6, v7, (__int64)a2);
      }
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree(v8, (const char *)v6);
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}
