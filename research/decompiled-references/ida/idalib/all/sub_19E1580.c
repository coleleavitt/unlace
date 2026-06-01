unsigned __int16 *__fastcall sub_19E1580(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 *a9,
        __int64 a10)
{
  unsigned int v11; // ecx
  unsigned int v13[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v13[0] = a4;
  v11 = 0;
  if ( !a2 )
    v11 = a4;
  return sub_19DEE70(a1, a2, a3, v11, a5, a6, a7, a8, a4, v13, 1u, a4, a9, a10, 1);
}
