__int64 __fastcall sub_14D4CB0(
        __int64 a1,
        double a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbp
  __int16 v10; // [rsp+6h] [rbp-FAh] BYREF
  __int128 v11; // [rsp+8h] [rbp-F8h] BYREF
  void *ptr; // [rsp+18h] [rbp-E8h]
  __int64 v13; // [rsp+20h] [rbp-E0h]
  _BYTE v14[216]; // [rsp+28h] [rbp-D8h] BYREF

  v11 = 0;
  ptr = v14;
  v13 = 0x400000000LL;
  if ( (unsigned __int8)sub_14CACB0(a1, (__int64 *)&v11, nullptr, a6, a7, a8, 0.0, a3) )
  {
    v10 = 21;
    sub_15680D0(a1, &v10, 1, 1);
    v10 = 24;
    sub_15680D0(a1, &v10, 1, 1);
    v10 = 25;
    v8 = 1;
    sub_15680D0(a1, &v10, 1, 1);
  }
  else
  {
    v8 = sub_14D2EE0(a1, (unsigned int *)&v11, (__m128i)0LL, a3);
  }
  if ( ptr != v14 )
    free(ptr);
  return v8;
}
