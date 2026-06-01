__int64 __fastcall sub_1D15FF0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx

  result = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 24), a6, a7, a3, a4, a5);
  if ( result != 1 )
  {
    v9 = *a1;
    v10 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_190C990(v9, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v10, *(double *)a6.m128_u64, a7);
    result = a2;
    if ( *(_QWORD *)(a2 + 24) != v10 )
      return sub_190C990(v9, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v10, *(double *)a6.m128_u64, a7);
  }
  return result;
}
