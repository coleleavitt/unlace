void __fastcall sub_1C4DF90(__int64 *a1, __int64 a2, unsigned __int8 (__fastcall *a3)(void **, __int64 *))
{
  __int64 v4; // rbx

  if ( a2 - (__int64)a1 <= 336 )
  {
    sub_1C39030((__int64)a1, a2, a3);
  }
  else
  {
    v4 = 3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 3)) >> 1);
    sub_1C4DF90(a1, &a1[v4]);
    sub_1C4DF90(&a1[v4], a2);
    sub_1C4DCA0(
      a1,
      &a1[v4],
      a2,
      0xAAAAAAAAAAAAAAABLL * ((v4 * 8) >> 3),
      0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)&a1[v4]) >> 3),
      (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
  }
}
