unsigned __int64 __fastcall sub_1C85860(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v7; // rax

  v7 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 24), a6, a7, a3, a4, a5);
  if ( v7 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  else
    return sub_190C990(
             *a1,
             *(_DWORD *)(a2 + 16),
             *(_DWORD *)(a2 + 20),
             (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFELL,
             *(double *)a6.m128_u64,
             a7);
}
