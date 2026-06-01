__int64 __fastcall sub_1DCBFE0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 result; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r8

  result = (__int64)sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( result != 1 )
  {
    v9 = sub_19A3EF0(*a1, result & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1C36C00((_QWORD *)*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v9, v10, a7, a8);
    result = a2;
    if ( *(_QWORD *)(a2 + 16) != v9 )
      return sub_1C36C00((_QWORD *)*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v9, v10, a7, a8);
  }
  return result;
}
