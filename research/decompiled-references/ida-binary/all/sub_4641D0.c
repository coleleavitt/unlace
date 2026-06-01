void __fastcall sub_4641D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  switch ( a2 )
  {
    case 0LL:
      sub_2743E0((QT::QObject *)a1, a4, a5, a6, a7, a8, a9, a10, a11);
      break;
    case 1LL:
      sub_273460((__m128i *)a1, *(_QWORD *)(a3 + 8));
      break;
    case 2LL:
      sub_271CA0(a1);
      break;
    case 3LL:
      sub_271D40(a1, **(_BYTE **)(a3 + 8));
      break;
    case 4LL:
      sub_271FC0((QT::QGuiApplication *)a1);
      break;
    case 5LL:
      sub_272070(a1, (const char *)**(unsigned int **)(a3 + 8));
      break;
    case 6LL:
      sub_271D10(a1);
      break;
    case 7LL:
      sub_271EE0(a1, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16));
      break;
    case 8LL:
      sub_273690(a1, **(_DWORD **)(a3 + 8));
      break;
    default:
      return;
  }
}
