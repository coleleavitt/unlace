__int64 __fastcall sub_462D60(__int64 a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rsi
  __int64 (__fastcall *v8)(QT::QMetaObject *, __int64, __int64, __int64, void **); // rax
  int v9; // eax
  int v10; // [rsp+Ch] [rbp-2Ch] BYREF
  int v11[2]; // [rsp+10h] [rbp-28h] BYREF
  int *v12; // [rsp+18h] [rbp-20h]
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v6 = *(_QWORD *)(a4 + 8);
      v7 = *(_DWORD **)a4;
      v8 = *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v6;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, int, __int64, __int64, void **))v6 == sub_462AA0 )
      {
        if ( !*(_QWORD *)(v6 + 8) )
          *v7 = 0;
      }
      else if ( v8 == sub_462B00 )
      {
        if ( !*(_QWORD *)(v6 + 8) )
          *v7 = 1;
      }
      else if ( v8 == sub_462B20 && !*(_QWORD *)(v6 + 8) )
      {
        *v7 = 2;
      }
    }
    return v13 - __readfsqword(0x28u);
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        v9 = **(_DWORD **)(a4 + 8);
        *(_QWORD *)v11 = 0;
        v10 = v9;
        v12 = &v10;
        QT::QMetaObject::activate((QT::QMetaObject *)a1, (QT::QObject *)&off_882280, nullptr, (int)v11, a5);
        return v13 - __readfsqword(0x28u);
      case 1LL:
        result = QT::QMetaObject::activate(
                   (QT::QMetaObject *)a1,
                   (QT::QObject *)&off_882280,
                   (const QT::QMetaObject *)((char *)&dword_0 + 1),
                   0,
                   a5);
        break;
      case 2LL:
        result = QT::QMetaObject::activate(
                   (QT::QMetaObject *)a1,
                   (QT::QObject *)&off_882280,
                   (const QT::QMetaObject *)((char *)&dword_0 + 2),
                   0,
                   a5);
        break;
      case 3LL:
        result = sub_1DDCF0(a1);
        break;
      case 4LL:
        result = sub_1DDD40(a1);
        break;
      case 5LL:
        result = sub_1DDCD0(a1);
        break;
      case 6LL:
        result = sub_1DDCE0(a1);
        break;
      default:
        return v13 - __readfsqword(0x28u);
    }
  }
  return result;
}
