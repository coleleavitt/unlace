void __fastcall sub_46AE30(
        QT::QObject *a1,
        int a2,
        int a3,
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
  _QWORD *v12; // rax

  if ( a2 )
  {
    if ( a2 == 7 )
    {
      v12 = *(_QWORD **)a4;
      if ( a3 == 2 && **(_DWORD **)(a4 + 8) <= 1u )
        *v12 = &unk_8C1460;
      else
        *v12 = 0;
    }
  }
  else
  {
    switch ( a3 )
    {
      case 1:
        sub_308610(a5, a6, a7, a8, a9, a10, a11, a12);
        break;
      case 2:
        (*(void (__fastcall **)(QT::QObject *, _QWORD, _QWORD))(*(_QWORD *)a1 + 464LL))(
          a1,
          **(_QWORD **)(a4 + 8),
          **(_QWORD **)(a4 + 16));
        break;
      case 0:
        sub_304850(a1);
        break;
    }
  }
}
