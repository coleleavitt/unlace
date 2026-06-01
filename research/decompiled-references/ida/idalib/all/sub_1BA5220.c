__int64 __fastcall sub_1BA5220(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v9; // r12
  unsigned int *v10; // rax

  v7 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
  if ( v7 == 1 )
    return 1;
  v9 = v7;
  v10 = sub_1B72420(a1, *(unsigned int **)(a2 + 24), a6, a7);
  if ( v10 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  else
    return sub_1C3AFE0(
             *a1,
             *(unsigned int *)(a2 + 8),
             v9 & 0xFFFFFFFFFFFFFFFELL,
             (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL);
}
