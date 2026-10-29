__int64 __fastcall sub_19DF30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax
  bool v14; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  result = (unsigned int)sub_19DBE0(a1, a2, &v14, a3, a5, a6, a7, a8, a9, a10, a11, a12) ^ 1;
  if ( a4 )
    *a4 = result;
  if ( !(_BYTE)result )
    return v14;
  return result;
}
