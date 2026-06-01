void __fastcall sub_1C4AF40(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // r15

  v6 = (__int64)(0xAAAAAAAAAAAAAAABLL * (((__int64)a2 - a1) >> 3) + 1) / 2;
  v7 = 24 * v6;
  v8 = (__int64 *)(a1 + 24 * v6);
  if ( v6 <= a4 )
  {
    sub_1C332F0(a1, (__int64 *)(a1 + 24 * v6), a3);
    sub_1C332F0((__int64)v8, a2, a3);
  }
  else
  {
    sub_1C4AF40(a1, a1 + 24 * v6, a3);
    sub_1C4AF40(v8, a2, a3);
  }
  sub_1C4A890(a1, v8, (__int64)a2, 0xAAAAAAAAAAAAAAABLL * (v7 >> 3), 0xAAAAAAAAAAAAAAABLL * (a2 - v8), (char *)a3, a4);
}
