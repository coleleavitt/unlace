bool __fastcall sub_3273F0(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  char v9; // dl
  bool result; // al

  if ( a5 >= a6 )
    return 0;
  if ( a4 < a5 || a6 < a4 )
  {
    if ( !under_debugger )
      sub_37B760(51399);
    BUG();
  }
  v9 = sub_327300(a1, a2, a3, a4, a6, 0);
  result = 1;
  if ( v9 != 2 )
    return (unsigned __int8)sub_327300(a1, a2, a3, a5, a4, 1) == 2;
  return result;
}
