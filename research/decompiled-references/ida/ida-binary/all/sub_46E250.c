void __fastcall sub_46E250(__int64 a1, int a2, __int64 a3)
{
  if ( !a2 )
  {
    switch ( a3 )
    {
      case 0LL:
        sub_37BB70(a1);
        break;
      case 1LL:
        sub_37BB80(a1);
        break;
      case 2LL:
        sub_37BB90(a1);
        break;
      case 3LL:
        sub_37BEA0(a1);
        break;
      case 4LL:
        sub_37CFA0((_QWORD *)a1);
        break;
      default:
        return;
    }
  }
}
