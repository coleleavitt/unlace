void __fastcall sub_459760(
        QT::QWidget *a1,
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
  void (*v11)(); // rax

  switch ( a2 )
  {
    case 0LL:
      sub_3347B0(**(_QWORD **)(a3 + 8), a4, a5, a6, a7, a8, a9, a10, a11);
      break;
    case 1LL:
      v11 = *(void (**)())(*(_QWORD *)a1 + 416LL);
      if ( v11 != nullsub_186 )
        goto LABEL_8;
      break;
    case 2LL:
      v11 = *(void (**)())(*(_QWORD *)a1 + 424LL);
      if ( v11 != nullsub_187 )
LABEL_8:
        v11();
      break;
    case 3LL:
      sub_1E4790(a1);
      break;
    case 4LL:
      sub_1E4880(a1);
      break;
    default:
      return;
  }
}
