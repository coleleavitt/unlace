void __fastcall sub_4635F0(QT::QAbstractItemView *a1, int a2, int a3, __int64 a4)
{
  if ( !a2 )
  {
    switch ( a3 )
    {
      case 1:
        sub_2705C0(a1, *(_QWORD *)(a4 + 8));
        break;
      case 2:
        sub_270860(a1, *(__int64 **)(a4 + 8));
        break;
      case 0:
        sub_26E6D0(a1, *(_QWORD *)(a4 + 8));
        break;
    }
  }
}
