void __fastcall __chkstk_darwin_probe(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v9; // x9
  __int64 *v10; // x10

  v10 = &a9;
  if ( v9 >= 0x1000 )
  {
    do
    {
      v10 -= 512;
      v9 -= 4096LL;
    }
    while ( v9 > 0x1000 );
  }
}
