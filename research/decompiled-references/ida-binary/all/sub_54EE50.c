unsigned __int64 __fastcall sub_54EE50(QT::QWidget *a1, int a2, int a3, __int64 a4, void **a5)
{
  _QWORD *v6; // rbx
  char *v7; // rdx
  __int64 v8; // rax
  char v9; // al
  char v10; // [rsp+Fh] [rbp-39h] BYREF
  __int128 v11; // [rsp+10h] [rbp-38h]
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  char *v13; // [rsp+28h] [rbp-20h]
  unsigned __int64 v14; // [rsp+38h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0:
      if ( a3 )
      {
        if ( a3 == 1 )
          return sub_5270B0(a1, *(_QWORD *)(a4 + 8), **(_DWORD **)(a4 + 16));
      }
      else
      {
        v9 = **(_BYTE **)(a4 + 8);
        *(_QWORD *)v12 = 0;
        v10 = v9;
        v13 = &v10;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_89E220, nullptr, (int)v12, a5);
      }
      return v14 - __readfsqword(0x28u);
    case 5:
      v8 = *(_QWORD *)(a4 + 8);
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, char, __int64, __int64, void **))v8 == sub_54EDF0
        && !*(_QWORD *)(v8 + 8) )
      {
        **(_DWORD **)a4 = 0;
      }
      return v14 - __readfsqword(0x28u);
    case 1:
      if ( !a3 )
      {
        v6 = *(_QWORD **)a4;
        *(_QWORD *)v12 = sub_524FA0((__int64)a1 + 40, 2165563904LL, 0);
        v13 = v7;
        *(_QWORD *)&v11 = *(_QWORD *)v12;
        *v6 = *(_QWORD *)v12;
        *((_QWORD *)&v11 + 1) = v7;
        *(_QWORD *)((char *)v6 + 6) = *(_QWORD *)((char *)&v11 + 6);
      }
      return v14 - __readfsqword(0x28u);
  }
  if ( a2 != 2 || a3 )
    return v14 - __readfsqword(0x28u);
  return sub_524FF0((__int64)a1 + 40, 2165563904LL, *(QT::QColor **)a4, 0);
}
