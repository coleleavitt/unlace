void __fastcall sub_12B4AB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        const __m128i **a5,
        __int64 a6,
        __m128 a7,
        __m128i a8)
{
  const __m128i *v11; // r8
  void *ptr[2]; // [rsp+0h] [rbp-C8h] BYREF
  _BYTE v13[184]; // [rsp+10h] [rbp-B8h] BYREF

  sub_11BB1A0(a6);
  v11 = *a5;
  ptr[0] = v13;
  ptr[1] = (void *)0x1000000000LL;
  sub_12B4350(a2, a1, a3, a4, v11, (__int64)ptr, a7, a8);
  if ( ptr[0] != v13 )
    free(ptr[0]);
}
