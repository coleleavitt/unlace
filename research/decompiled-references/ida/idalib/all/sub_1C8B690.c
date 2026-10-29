__int64 __fastcall sub_1C8B690(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v7; // rax
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rax

  v7 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v9 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFELL;
  v10 = sub_1C8ABA0(a1, *(_QWORD *)(a2 + 8), a6, a7);
  return sub_18D0F50(*a1, v9, (__int64)v10, *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28), *(double *)a6.m128_u64);
}
