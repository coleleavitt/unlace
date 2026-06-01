__int64 __fastcall sub_1BACFC0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 result; // rax
  unsigned __int64 v8; // rcx

  result = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
  if ( result != 1 )
  {
    v8 = sub_19A3EF0(*a1, result & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1C36C00(*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v8);
    result = a2;
    if ( *(_QWORD *)(a2 + 16) != v8 )
      return sub_1C36C00(*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v8);
  }
  return result;
}
