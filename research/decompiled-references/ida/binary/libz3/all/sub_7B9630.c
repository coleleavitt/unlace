size_t __fastcall sub_7B9630(__int64 a1, int a2, unsigned __int8 a3, int **a4, unsigned int a5, __int64 a6, __m128i a7)
{
  if ( a2 == 0x7FFFFFFF )
    return sub_7B8DC0(a1, 0xFFFFFFFE, a4, a5, *(_BYTE *)(a1 + 1048), a6, a7);
  else
    return sub_7B8DC0(a1, (unsigned int)a3 + 2 * a2, a4, a5, *(_BYTE *)(a1 + 1048), a6, a7);
}

