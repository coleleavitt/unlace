_BOOL8 __fastcall sub_24B360(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdx
  char *v11; // rcx
  _BOOL8 result; // rax

  v10 = (unsigned int)sub_24B020(64, a1, a2, a3, a4, a5, a6, a7, a8);
  result = 0;
  if ( (_BYTE)v10 )
    return sub_23DCD0(a1, 64, a10, v10, v11);
  return result;
}
