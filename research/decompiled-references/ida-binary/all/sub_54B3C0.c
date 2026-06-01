void __fastcall sub_54B3C0(
        QT::QObject *a1,
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
      sub_4F37D0((char *)a1, (void **)**(unsigned int **)(a3 + 8), a3, a4);
      break;
    case 1LL:
      sub_4F3330(a1, *(const QT::QString **)(a3 + 8));
      break;
    case 2LL:
      sub_4F2540(a1, **(_BYTE **)(a3 + 8));
      break;
    case 3LL:
      if ( **(_BYTE **)(a3 + 8) )
        sub_4F2C20(a1);
      break;
    case 4LL:
      sub_4F2D20(a1);
      break;
    case 5LL:
      sub_4F24E0(a1);
      break;
    case 6LL:
      sub_4F2E80(a1);
      break;
    case 7LL:
      sub_4F2C60(a1, *(QT::QColor **)(a3 + 8));
      break;
    case 8LL:
      sub_4F3940(a1, a4, a5, a6, a7, a8, a9, a10, a11);
      break;
    case 9LL:
      sub_4F3190(a1, *(const QT::QString **)(a3 + 8));
      break;
    case 10LL:
      sub_4F25C0(a1);
      break;
    case 11LL:
      sub_4F2460(a1, **(_QWORD **)(a3 + 8));
      break;
    default:
      return;
  }
}
