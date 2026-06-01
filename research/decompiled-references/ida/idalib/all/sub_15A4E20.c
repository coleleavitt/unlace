void __fastcall sub_15A4E20(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  if ( a2 - a1 <= 1344 )
  {
    sub_15A38A0(a1, a2);
  }
  else
  {
    v2 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 5)) >> 1);
    sub_15A4E20(a1, a1 + v2);
    sub_15A4E20(a1 + v2, a2);
    sub_15A4950(
      a1,
      (__int64 *)(a1 + v2),
      a2,
      0xAAAAAAAAAAAAAAABLL * (v2 >> 5),
      0xAAAAAAAAAAAAAAABLL * ((a2 - (a1 + v2)) >> 5));
  }
}
