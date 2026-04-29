__int64 __fastcall sub_3B290(
        __int64 *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned __int8 a8)
{
  if ( a3 == a7 && a8 == a6 )
  {
    netnode_supset();
    return 1;
  }
  else
  {
    sub_30660(a1);
    return 0;
  }
}
