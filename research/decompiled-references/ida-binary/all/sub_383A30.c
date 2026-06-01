__int64 __fastcall sub_383A30(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 result; // rax
  _QWORD v15[5]; // [rsp+0h] [rbp-28h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 80) == a1 )
  {
    v15[0] = *(int *)(a1 + 184);
    while ( (unsigned __int8)sub_2C8FB0(
                               (int)v15,
                               (int)"Please enter a tab size between 1 and 16",
                               a11,
                               a12,
                               a13,
                               a14,
                               a2,
                               a3,
                               a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               a9,
                               v15[0]) )
    {
      a11 = v15[0] - 1LL;
      if ( (unsigned __int64)(v15[0] - 1LL) <= 0xF )
      {
        *(_DWORD *)(a1 + 184) = v15[0];
        result = sub_3836A0(
                   *(__int64 **)(a1 + 48),
                   (const char *)a1,
                   *(double *)a2.m128_u64,
                   a3,
                   a4,
                   a5,
                   *(double *)a6.m128_u64,
                   *(double *)a7.m128_u64,
                   a8,
                   a9);
        if ( !(_BYTE)result )
          return 0;
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + 256LL) = 1;
        return result;
      }
    }
  }
  return 0;
}
