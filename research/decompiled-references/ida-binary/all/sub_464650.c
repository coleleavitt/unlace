unsigned __int64 __fastcall sub_464650(QT::QMetaObject *a1, int a2, int a3, _DWORD **a4, void **a5)
{
  _DWORD *v6; // rdx
  _DWORD *v7; // rsi
  unsigned __int64 (__fastcall *v8)(QT::QMetaObject *, int, __int64, __int64, void **); // rax
  int *v9; // rax
  int v10; // eax
  int v11; // [rsp+Ch] [rbp-2Ch] BYREF
  int v12[2]; // [rsp+10h] [rbp-28h] BYREF
  int *v13; // [rsp+18h] [rbp-20h]
  unsigned __int64 v14; // [rsp+28h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v6 = a4[1];
      v7 = *a4;
      v8 = *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, int, __int64, __int64, void **))v6;
      if ( *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v6 == sub_464450 )
      {
        if ( !*((_QWORD *)v6 + 1) )
          *v7 = 0;
      }
      else if ( (char *)v8 == (char *)sub_464460 )
      {
        if ( !*((_QWORD *)v6 + 1) )
          *v7 = 1;
      }
      else if ( v8 == sub_4644B0 && !*((_QWORD *)v6 + 1) )
      {
        *v7 = 2;
      }
    }
    return v14 - __readfsqword(0x28u);
  }
  if ( a3 == 1 )
  {
    v9 = a4[1];
    *(_QWORD *)v12 = 0;
    v13 = v9;
    QT::QMetaObject::activate(
      a1,
      (QT::QObject *)&off_883C80,
      (const QT::QMetaObject *)((char *)&dword_0 + 1),
      (int)v12,
      a5);
    return v14 - __readfsqword(0x28u);
  }
  if ( a3 == 2 )
  {
    v10 = *a4[1];
    *(_QWORD *)v12 = 0;
    v11 = v10;
    v13 = &v11;
    QT::QMetaObject::activate(
      a1,
      (QT::QObject *)&off_883C80,
      (const QT::QMetaObject *)((char *)&dword_0 + 2),
      (int)v12,
      a5);
    return v14 - __readfsqword(0x28u);
  }
  if ( a3 )
    return v14 - __readfsqword(0x28u);
  return QT::QMetaObject::activate(a1, (QT::QObject *)&off_883C80, nullptr, 0, a5);
}
