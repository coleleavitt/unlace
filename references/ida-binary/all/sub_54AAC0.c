void __fastcall sub_54AAC0(__m128i *a1, __int64 a2, __int64 a3)
{
  switch ( a2 )
  {
    case 0LL:
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)a1[6].m128i_i64[1] + 104LL))(
        a1[6].m128i_i64[1],
        **(_DWORD **)(a3 + 8) == 2);
      break;
    case 1LL:
      (*(void (__fastcall **)(__m128i *, _QWORD))(a1->m128i_i64[0] + 432))(a1, 0);
      break;
    case 2LL:
      sub_4D7BF0(a1);
      break;
    case 3LL:
      sub_4D58D0((__int64)a1);
      break;
    case 4LL:
      sub_4D5190((__int64)a1, **(const QT::QTableWidgetItem ***)(a3 + 8));
      break;
    case 5LL:
      sub_4D3CB0((__int64)a1, **(const QT::QTableWidgetItem ***)(a3 + 8));
      break;
    case 6LL:
      sub_4D4340((__int64)a1);
      break;
    default:
      return;
  }
}
