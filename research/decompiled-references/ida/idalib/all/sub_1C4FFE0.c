void __fastcall sub_1C4FFE0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx

  if ( (__int64)a2 - a1 <= 336 )
  {
    sub_1C32FF0(a1, a2);
  }
  else
  {
    v2 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (((__int64)a2 - a1) >> 3)) >> 1);
    sub_1C4FFE0(a1, a1 + v2);
    sub_1C4FFE0(a1 + v2, a2);
    sub_1C4FDE0(
      a1,
      a1 + v2,
      (__int64)a2,
      0xAAAAAAAAAAAAAAABLL * (v2 >> 3),
      0xAAAAAAAAAAAAAAABLL * (((__int64)a2 - a1 - v2) >> 3));
  }
}
