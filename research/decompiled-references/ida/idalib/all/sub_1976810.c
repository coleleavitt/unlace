__int64 __fastcall sub_1976810(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax

  v8 = sub_1975200(a1, *(_WORD **)(a2 + 24), 0, a3, a4, a6, a7, a8);
  if ( v8 == 1 )
    return 1;
  else
    return sub_1C39E40(*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v8 & 0xFFFFFFFFFFFFFFFELL, 0);
}
