__int64 __fastcall sub_471B40(QT::QMetaObject *a1, int a2, int a3, __int64 a4, void **a5)
{
  __int64 v6; // rax
  char v7; // al
  char v8; // [rsp+Fh] [rbp-29h] BYREF
  int v9[2]; // [rsp+10h] [rbp-28h] BYREF
  char *v10; // [rsp+18h] [rbp-20h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v6 = *(_QWORD *)(a4 + 8);
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, char, __int64, __int64, void **))v6 == sub_4719B0
        && !*(_QWORD *)(v6 + 8) )
      {
        **(_DWORD **)a4 = 0;
      }
    }
    return v11 - __readfsqword(0x28u);
  }
  if ( !a3 )
  {
    v7 = **(_BYTE **)(a4 + 8);
    *(_QWORD *)v9 = 0;
    v8 = v7;
    v10 = &v8;
    QT::QMetaObject::activate(a1, (QT::QObject *)&off_891AA0, nullptr, (int)v9, a5);
    return v11 - __readfsqword(0x28u);
  }
  if ( a3 != 3 )
    return v11 - __readfsqword(0x28u);
  return (*(__int64 (__fastcall **)(QT::QMetaObject *))(*(_QWORD *)a1 + 504LL))(a1);
}
