void __fastcall sub_4603C0(__int64 a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  __int64 v5; // rax
  __int16 v6; // ax

  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v5 = *(_QWORD *)(a4 + 8);
      if ( *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v5 == sub_460330
        && !*(_QWORD *)(v5 + 8) )
      {
        **(_DWORD **)a4 = 0;
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        QT::QMetaObject::activate((QT::QMetaObject *)a1, (QT::QObject *)&off_86C140, nullptr, 0, a5);
        break;
      case 1LL:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 424LL))(a1);
        break;
      case 2LL:
        v6 = sub_18D8C0(a1);
        if ( *(_QWORD *)a4 )
          **(_WORD **)a4 = v6;
        break;
      case 3LL:
        if ( *(_BYTE *)(a1 + 112) )
        {
          *(_WORD *)(a1 + 80) = sub_18D8C0(a1);
          sub_190380((__int64 *)a1, 1);
        }
        break;
      case 4LL:
        sub_1906E0((__int64 *)a1);
        break;
      case 5LL:
        sub_190380((__int64 *)a1, **(_BYTE **)(a4 + 8));
        break;
      case 6LL:
        sub_190380((__int64 *)a1, 0);
        break;
      default:
        return;
    }
  }
}
