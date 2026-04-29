void __fastcall sub_2C6F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __m128i *v8; // [rsp+8h] [rbp-40h]

  v5 = (__int64)(0x8E38E38E38E38E39LL * ((a2 - a1) >> 4) + 1) / 2;
  v6 = 144 * v5;
  if ( v5 <= a4 )
  {
    sub_2A8D0(a1, a1 + 144 * v5, a2, a3);
  }
  else
  {
    v8 = (__m128i *)(a1 + 144 * v5);
    sub_2C6F0(a1, v8, a3);
    sub_2C6F0(v8, a2, a3);
    sub_2B7D0(a1, v8, a2, 0x8E38E38E38E38E39LL * (v6 >> 4), 0x8E38E38E38E38E39LL * ((a2 - (__int64)v8) >> 4), a3, a4);
  }
}
