__int64 __fastcall sub_15A8C20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // r15

  v6 = (__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 5) + 1) / 2;
  v7 = 96 * v6;
  v8 = &a1[12 * v6];
  if ( v6 <= a4 )
  {
    sub_15A4710((__int64)a1, (__int64)&a1[12 * v6], a3);
    sub_15A4710((__int64)v8, a2, a3);
  }
  else
  {
    sub_15A8C20(a1, &a1[12 * v6], a3);
    sub_15A8C20(v8, a2, a3);
  }
  return sub_15A79F0(
           a1,
           v8,
           a2,
           0xAAAAAAAAAAAAAAABLL * (v7 >> 5),
           0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)v8) >> 5),
           a3,
           a4);
}
