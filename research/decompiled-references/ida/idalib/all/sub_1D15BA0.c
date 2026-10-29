__int64 __fastcall sub_1D15BA0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8

  result = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( result != 1 )
  {
    v8 = sub_19A3EF0(*a1, result & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1C36C00((_QWORD *)*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v8, v9, a6, a7);
    result = a2;
    if ( *(_QWORD *)(a2 + 16) != v8 )
      return sub_1C36C00((_QWORD *)*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v8, v9, a6, a7);
  }
  return result;
}
