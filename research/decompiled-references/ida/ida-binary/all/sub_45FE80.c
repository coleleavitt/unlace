void __fastcall sub_45FE80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __m128 a7)
{
  __int64 v7; // rsi

  switch ( a2 )
  {
    case 0LL:
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 160), 1);
      break;
    case 1LL:
      sub_18B0D0(a1, *(_QWORD *)(a3 + 8), a6, a7);
      break;
    case 2LL:
      sub_18B1C0(a1, a6, a7);
      break;
    case 3LL:
      sub_1864C0(a1, 0);
      break;
    case 4LL:
      sub_18B040(a1, a6, a7);
      break;
    case 5LL:
      v7 = *(_QWORD *)(a1 + 96);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD *, __int64))(QT::QCoreApplication::self[2] + 136LL))(
          QT::QCoreApplication::self + 2,
          v7 + 8);
      else
        nullsub_343();
      break;
    case 6LL:
      sub_18B520(a1, a6, a7);
      break;
    case 7LL:
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 64) + 2LL) )
        sub_185CE0(a1);
      break;
    case 8LL:
      sub_18AD70(a1, **(_DWORD **)(a3 + 8), a6, a7);
      break;
    case 9LL:
      sub_18A9E0(a1, **(_DWORD **)(a3 + 8) == 2, *(unsigned __int8 *)(*(_QWORD *)(a1 + 64) + 1LL), a4, a5, a6, a7);
      break;
    case 10LL:
      sub_18A9E0(a1, **(unsigned __int8 **)(a1 + 64), **(_DWORD **)(a3 + 8) == 2, a4, a5, a6, a7);
      break;
    default:
      return;
  }
}
