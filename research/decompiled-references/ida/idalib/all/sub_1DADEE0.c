unsigned __int64 __fastcall sub_1DADEE0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  unsigned __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  result = (unsigned __int64)sub_1DADC30(a1, *(unsigned int **)(a2 + 16), a3, a4, a5, a6, a7, a8, a9, a10);
  if ( result != 1 )
    return sub_EEEA30(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 8), result & 0xFFFFFFFFFFFFFFFELL, v11, v12, v13);
  return result;
}
