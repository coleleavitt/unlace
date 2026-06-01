__int64 __fastcall sub_46DD10(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0LL:
      result = sub_34F550((__int64)a1);
      break;
    case 1LL:
      result = sub_361970((__int64)a1);
      break;
    case 2LL:
      result = sub_361980((__int64)a1);
      break;
    case 3LL:
      result = sub_3618E0((__int64)a1);
      break;
    case 4LL:
      result = sub_361930((__int64)a1);
      break;
    case 5LL:
      result = sub_356C10((__int64)a1);
      break;
    case 6LL:
      result = sub_356C20((__int64)a1);
      break;
    case 7LL:
      result = sub_356C30((__int64)a1);
      break;
    case 8LL:
      result = sub_356C40((__int64)a1);
      break;
    case 9LL:
      result = sub_34F520((__int64)a1);
      break;
    case 10LL:
      result = sub_358190((__int64)a1, *(double *)a5.m128_u64, a6, a7, a8, a9, a10, a11, a12);
      break;
    case 11LL:
      result = sub_358260((__int64)a1, *(double *)a5.m128_u64, a6, a7, a8, a9, a10, a11, a12);
      break;
    case 12LL:
      result = sub_34F4F0((__int64)a1);
      break;
    case 13LL:
      result = QT::QAction::activate(unk_8CA210, 0);
      break;
    case 14LL:
      result = sub_34F480();
      break;
    case 15LL:
      result = sub_3672C0(*(double *)a5.m128_u64, a6, a7, a8, a9, a10, a11, a12);
      break;
    case 16LL:
      result = sub_34FF80(a5, a6, a7, a8, a9, a10, a11, a12);
      break;
    case 17LL:
      result = sub_3563D0((__int64)a1, a5, a6, a7, a8, a9, a10, a11, a12);
      break;
    case 18LL:
      JUMPOUT(0x3676C0);
    case 19LL:
      result = sub_3675F0((__int64)a1, *(_QWORD *)(a1[7] + 976LL), a3, a4, *(double *)a5.m128_u64);
      break;
    case 20LL:
      result = sub_3675F0((__int64)a1, *(_QWORD *)(a1[7] + 992LL), a3, a4, *(double *)a5.m128_u64);
      break;
    case 21LL:
      result = QT::QWidget::setEnabled(*(QT::QWidget **)(a1[7] + 416LL), 1);
      break;
    case 22LL:
      result = sub_34FCA0((__int64)a1);
      break;
    case 23LL:
      result = sub_34F5B0((__int64)a1, **(_DWORD **)(a3 + 8));
      break;
    case 24LL:
      result = sub_3676F0((__int64)a1);
      break;
    case 25LL:
      result = sub_357560(
                 (__int64)a1,
                 *(QT::QWidget **)(a1[7] + 1632LL),
                 *(QT::QWidget **)(a1[7] + 1648LL),
                 **(_BYTE **)(a3 + 8));
      break;
    case 26LL:
      result = sub_357560(
                 (__int64)a1,
                 *(QT::QWidget **)(a1[7] + 1672LL),
                 *(QT::QWidget **)(a1[7] + 1688LL),
                 **(_BYTE **)(a3 + 8));
      break;
    case 27LL:
      result = sub_357750((__int64)a1, *(_QWORD *)(a3 + 8));
      break;
    case 28LL:
      result = sub_357840((__int64)a1, *(_QWORD *)(a3 + 8));
      break;
    case 29LL:
      result = sub_34F5F0((__int64)a1, **(_BYTE **)(a3 + 8));
      break;
    case 30LL:
      result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 440LL))(a1);
      break;
    default:
      return result;
  }
  return result;
}
