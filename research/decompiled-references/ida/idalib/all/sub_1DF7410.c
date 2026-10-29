__int64 __fastcall sub_1DF7410(
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
  unsigned int *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 result; // rax
  _WORD *v19; // rsi
  unsigned int *v20; // rbp
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx

  v11 = sub_1DF70C0(a1, *(unsigned int **)(a2 + 16), a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v11 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  v19 = *(_WORD **)(a2 + 24);
  v20 = v11;
  v21 = (*v19 & 0x1FF) == 0x89
      ? sub_1DF7370(a1, (__int64)v19, a3, a4, a5, a6, v16, v17, a9, a10)
      : sub_1DF73B0(a1, (__int64)v19, v12, v13, v14, v15, a3, a4, a5, a6, v16, v17, a9, a10);
  if ( v21 == 1 )
    return 1;
  v23 = v21 & 0xFFFFFFFFFFFFFFFELL;
  v24 = (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1C3CD10(*a1, *(_BYTE *)(a2 + 8), *(_DWORD *)(a2 + 12), v24, v23, v22);
  if ( *(_QWORD *)(a2 + 16) != v24 )
    return sub_1C3CD10(*a1, *(_BYTE *)(a2 + 8), *(_DWORD *)(a2 + 12), v24, v23, v22);
  result = a2;
  if ( *(_QWORD *)(a2 + 24) != v23 )
    return sub_1C3CD10(*a1, *(_BYTE *)(a2 + 8), *(_DWORD *)(a2 + 12), v24, v23, v22);
  return result;
}
