unsigned __int64 __fastcall sub_2C29C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(a1 + 384);
  if ( *(_DWORD *)(a2 + 16) == (_DWORD)result )
    return sub_2C2750(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  return result;
}
