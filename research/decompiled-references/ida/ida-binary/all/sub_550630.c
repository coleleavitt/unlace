void __fastcall sub_550630(_QWORD *a1, int a2, __int64 a3, double a4, __m128 a5)
{
  char v6; // al

  switch ( a2 )
  {
    case 0:
      sub_53C800(a4);
      break;
    case 1:
      v6 = sub_540D00(a1, *(const QT::QString **)(a3 + 8), *(const QT::QString **)(a3 + 16), a4, a5);
      if ( *(_QWORD *)a3 )
        **(_BYTE **)a3 = v6;
      break;
    case 2:
      (*(void (__fastcall **)(_QWORD *))(*a1 + 456LL))(a1);
      break;
    case 3:
      (*(void (__fastcall **)(_QWORD *))(*a1 + 464LL))(a1);
      break;
    case 4:
      (*(void (__fastcall **)(_QWORD *))(*a1 + 472LL))(a1);
      break;
    default:
      return;
  }
}
