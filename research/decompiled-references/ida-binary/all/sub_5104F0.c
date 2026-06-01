__int64 __fastcall sub_5104F0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v15; // rdi
  __int64 result; // rax

  v15 = a1[7];
  if ( (*(_BYTE *)(v15 + 216) & 1) != 0 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 432LL))(a1, 1);
  result = sub_501F10((_QWORD *)v15, a7, a8, a9, a10, a11, a12, a13, a14, a2, a3, a4, a5, a6);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 432LL))(a1, 1);
  return result;
}
