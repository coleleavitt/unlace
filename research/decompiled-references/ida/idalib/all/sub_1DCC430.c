unsigned __int64 __fastcall sub_1DCC430(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 result; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx

  result = (unsigned __int64)sub_1DC71F0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6, a7, a8);
  if ( result != 1 )
  {
    v10 = *a1;
    v11 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_190C990(v10, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v11, *(double *)a7.m128_u64, a8);
    result = a2;
    if ( *(_QWORD *)(a2 + 24) != v11 )
      return sub_190C990(v10, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v11, *(double *)a7.m128_u64, a8);
  }
  return result;
}
