__int64 __fastcall sub_1967CB0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 *v11; // [rsp+0h] [rbp-30h] BYREF

  if ( !a5 )
    return 1;
  if ( !a4 )
    return sub_1934340(a1, a5, a2, a3, (__int64)a5, a6, (__m128i)a7, a8);
  sub_1E5F010(a5, &v11);
  return sub_1944A80(a1, v11, a2, a3, a6, a7, a8);
}
