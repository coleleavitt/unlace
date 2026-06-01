/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41E440
// Address: 0x000000000041E440

//----- (000000000041E440) ----------------------------------------------------
__int64 __fastcall sub_41E440(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax

  result = 0;
  if ( !*(_BYTE *)(a1 + 1349) && *(_DWORD *)(a1 + 1340) != -1 )
    return (int)sub_41E0D0(a1, 0xFFFFFFFF, a2, a3, a4, 1, a5, a6, a7, a8, a9, a10, a11, a12);
  return result;
}
