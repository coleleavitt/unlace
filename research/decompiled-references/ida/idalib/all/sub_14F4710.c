void __fastcall sub_14F4710(const __m128i *a1, int a2, __m128i a3, __m128 a4)
{
  __int8 *v5; // rdi
  bool v6; // zf
  const __m128i *v7; // rdx
  unsigned __int8 *v8[10]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+50h] [rbp-78h] BYREF
  void *v10; // [rsp+58h] [rbp-70h]
  __int64 v11; // [rsp+60h] [rbp-68h]
  _BYTE v12[16]; // [rsp+68h] [rbp-60h] BYREF
  __int8 *v13; // [rsp+78h] [rbp-50h] BYREF
  void *ptr; // [rsp+80h] [rbp-48h]
  __int64 v15; // [rsp+88h] [rbp-40h]
  _BYTE v16[56]; // [rsp+90h] [rbp-38h] BYREF

  v5 = &a1[31].m128i_i8[8];
  v6 = a1[2].m128i_i16[0] == 189;
  v13 = v5;
  v9 = 0;
  v10 = v12;
  v11 = 0x200000000LL;
  ptr = v16;
  v15 = 0x200000000LL;
  if ( v6 )
  {
    v7 = a1 + 1;
    if ( a2 == 7 || a2 == 10 )
    {
      sub_1564840(v8, a1, v7, 1768);
      sub_AE9DF0(v8, a2 == 10, 2u);
      sub_AEA040((__int64)v8);
    }
    else
    {
      sub_1564840(v8, a1, v7, 1767);
      sub_AEA040((__int64)v8);
    }
    sub_1490230(a1, (__int64)&v9, 0, 0, a3, a4);
    v5 = v13;
  }
  sub_15DCED0(v5, &v13);
  if ( ptr != v16 )
    free(ptr);
  if ( v10 != v12 )
    free(v10);
}
