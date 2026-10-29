unsigned __int64 __fastcall sub_467A60(QT::QMetaObject *a1, int a2, int a3, __int64 a4, void **a5)
{
  __int64 v6; // rdx
  _DWORD *v7; // rsi
  unsigned __int64 (__fastcall *v8)(QT::QMetaObject *, char, __int64, __int64, void **); // rax
  char v9; // al
  char v10; // al
  char v11; // [rsp+Fh] [rbp-29h] BYREF
  int v12[2]; // [rsp+10h] [rbp-28h] BYREF
  char *v13; // [rsp+18h] [rbp-20h]
  unsigned __int64 v14; // [rsp+28h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v6 = *(_QWORD *)(a4 + 8);
      v7 = *(_DWORD **)a4;
      v8 = *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, char, __int64, __int64, void **))v6;
      if ( *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v6 == sub_467990 )
      {
        if ( !*(_QWORD *)(v6 + 8) )
          *v7 = 0;
      }
      else if ( v8 == sub_4679A0 )
      {
        if ( !*(_QWORD *)(v6 + 8) )
          *v7 = 1;
      }
      else if ( v8 == sub_467A00 && !*(_QWORD *)(v6 + 8) )
      {
        *v7 = 2;
      }
    }
    return v14 - __readfsqword(0x28u);
  }
  if ( a3 == 1 )
  {
    v9 = **(_BYTE **)(a4 + 8);
    *(_QWORD *)v12 = 0;
    v11 = v9;
    v13 = &v11;
    QT::QMetaObject::activate(
      a1,
      (QT::QObject *)&off_887520,
      (const QT::QMetaObject *)((char *)&dword_0 + 1),
      (int)v12,
      a5);
    return v14 - __readfsqword(0x28u);
  }
  if ( a3 == 2 )
  {
    v10 = **(_BYTE **)(a4 + 8);
    *(_QWORD *)v12 = 0;
    v11 = v10;
    v13 = &v11;
    QT::QMetaObject::activate(
      a1,
      (QT::QObject *)&off_887520,
      (const QT::QMetaObject *)((char *)&dword_0 + 2),
      (int)v12,
      a5);
    return v14 - __readfsqword(0x28u);
  }
  if ( a3 )
    return v14 - __readfsqword(0x28u);
  return QT::QMetaObject::activate(a1, (QT::QObject *)&off_887520, nullptr, 0, a5);
}
