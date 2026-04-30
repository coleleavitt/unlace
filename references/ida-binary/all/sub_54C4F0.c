__int64 __fastcall sub_54C4F0(
        QT::QMetaObject *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 result; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rsi
  __int64 v16; // rax
  _QWORD v17[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v14 = *(_QWORD *)(a4 + 8);
      v15 = *(_DWORD **)a4;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v14 == sub_54C240 )
      {
        if ( !*(_QWORD *)(v14 + 8) )
          *v15 = 0;
      }
      else if ( *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v14 == sub_54C290
             && !*(_QWORD *)(v14 + 8) )
      {
        *v15 = 1;
      }
    }
    return v18 - __readfsqword(0x28u);
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        v16 = *(_QWORD *)(a4 + 8);
        v17[0] = 0;
        v17[1] = v16;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_89B360, nullptr, (int)v17, a5);
        return v18 - __readfsqword(0x28u);
      case 1LL:
        result = QT::QMetaObject::activate(
                   a1,
                   (QT::QObject *)&off_89B360,
                   (const QT::QMetaObject *)((char *)&dword_0 + 1),
                   0,
                   a5);
        break;
      case 2LL:
        result = (*(__int64 (__fastcall **)(QT::QMetaObject *, __int64))(*(_QWORD *)a1 + 104LL))(a1, 1);
        break;
      case 3LL:
        result = (*(__int64 (__fastcall **)(QT::QMetaObject *, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, 0);
        break;
      case 4LL:
        result = sub_51D5A0((__int64)a1, *(const __m128i **)(a4 + 8));
        break;
      case 5LL:
        result = sub_51D770((__int64)a1, *(_QWORD *)(a4 + 8));
        break;
      case 6LL:
        result = sub_51E100((__int64)a1, a6, a7, a8, a9, a10, a11, a12, a13);
        break;
      default:
        return v18 - __readfsqword(0x28u);
    }
  }
  return result;
}
