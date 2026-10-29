unsigned __int64 __fastcall sub_54BD80(QT::QMetaObject *a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rsi
  unsigned __int64 (__fastcall *v8)(QT::QMetaObject *, __int64, __int64, __int64, void **); // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+8h] [rbp-20h]
  unsigned __int64 v14; // [rsp+18h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v6 = *(_QWORD *)(a4 + 8);
      v7 = *(_DWORD **)a4;
      v8 = *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v6;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v6 == sub_54BC90 )
      {
        if ( !*(_QWORD *)(v6 + 8) )
          *v7 = 0;
      }
      else if ( v8 == sub_54BCE0 )
      {
        if ( !*(_QWORD *)(v6 + 8) )
          *v7 = 1;
      }
      else if ( v8 == sub_54BD30 && !*(_QWORD *)(v6 + 8) )
      {
        *v7 = 2;
      }
    }
    return v14 - __readfsqword(0x28u);
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        v11 = *(_QWORD *)(a4 + 8);
        v12 = 0;
        v13 = v11;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_89B0A0, nullptr, (int)&v12, a5);
        return v14 - __readfsqword(0x28u);
      case 1LL:
        v10 = *(_QWORD *)(a4 + 8);
        v12 = 0;
        v13 = v10;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_89B0A0,
          (const QT::QMetaObject *)((char *)&dword_0 + 1),
          (int)&v12,
          a5);
        return v14 - __readfsqword(0x28u);
      case 2LL:
        v9 = *(_QWORD *)(a4 + 8);
        v12 = 0;
        v13 = v9;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_89B0A0,
          (const QT::QMetaObject *)((char *)&dword_0 + 2),
          (int)&v12,
          a5);
        return v14 - __readfsqword(0x28u);
      case 5LL:
        result = sub_51C220((__int64)a1, **(_QWORD **)(a4 + 8));
        break;
      case 6LL:
        result = sub_51C420((__int64)a1, *(_QWORD *)(a4 + 8));
        break;
      default:
        return v14 - __readfsqword(0x28u);
    }
  }
  return result;
}
