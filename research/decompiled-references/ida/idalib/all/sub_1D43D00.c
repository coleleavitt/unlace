__int64 __fastcall sub_1D43D00(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v9; // r12
  unsigned int *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9

  v7 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 1;
  v9 = v7;
  v10 = sub_1D42A80(a1, *(unsigned int **)(a2 + 24), a6, a7);
  if ( v10 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  else
    return sub_1C3AFE0(
             *a1,
             *(unsigned int *)(a2 + 8),
             v9 & 0xFFFFFFFFFFFFFFFELL,
             (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL,
             v11,
             v12);
}
