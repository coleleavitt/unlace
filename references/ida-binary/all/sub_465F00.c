__int64 __fastcall sub_465F00(QT::QWidget *a1, int a2, int a3, __int64 a4, void **a5)
{
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  _DWORD *v9; // rax
  char v10; // al
  __int64 v11; // rdx
  char v12; // [rsp+Fh] [rbp-39h] BYREF
  __int128 v13; // [rsp+10h] [rbp-38h]
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0:
      if ( a3 )
      {
        if ( a3 == 1 )
          return QT::QWidget::update(a1);
      }
      else
      {
        v10 = **(_BYTE **)(a4 + 8);
        *(_QWORD *)&v14 = 0;
        v12 = v10;
        *((_QWORD *)&v14 + 1) = &v12;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_885220, nullptr, (int)&v14, a5);
      }
      return v15 - __readfsqword(0x28u);
    case 5:
      v8 = *(_QWORD *)(a4 + 8);
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, char, __int64, __int64, void **))v8 == sub_465E60
        && !*(_QWORD *)(v8 + 8) )
      {
        **(_DWORD **)a4 = 0;
      }
      return v15 - __readfsqword(0x28u);
    case 1:
      v6 = *(_QWORD **)a4;
      if ( a3 )
      {
        if ( a3 == 1 )
        {
          *(_QWORD *)&v14 = sub_524FA0((char *)a1 + 40, 2165563905LL, 0);
          *((_QWORD *)&v14 + 1) = v7;
          *(_QWORD *)&v13 = v14;
          *v6 = v14;
          *((_QWORD *)&v13 + 1) = v7;
          *(_QWORD *)((char *)v6 + 6) = *(_QWORD *)((char *)&v13 + 6);
        }
      }
      else
      {
        *(_QWORD *)&v14 = sub_524FA0((char *)a1 + 40, 2165563904LL, 0);
        *((_QWORD *)&v14 + 1) = v11;
        *(_QWORD *)&v13 = v14;
        *v6 = v14;
        *((_QWORD *)&v13 + 1) = v11;
        *(_QWORD *)((char *)v6 + 6) = *(_QWORD *)((char *)&v14 + 6);
      }
      return v15 - __readfsqword(0x28u);
  }
  if ( a2 != 2 )
    return v15 - __readfsqword(0x28u);
  v9 = *(_DWORD **)a4;
  if ( a3 )
  {
    if ( a3 == 1 )
      return sub_524FF0((char *)a1 + 40, 2165563905LL, v9, 0);
    return v15 - __readfsqword(0x28u);
  }
  return sub_524FF0((char *)a1 + 40, 2165563904LL, v9, 0);
}
