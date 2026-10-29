unsigned __int64 __fastcall sub_1CE7EF0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  result = (unsigned __int64)sub_1CE7EE0(a1, *(unsigned int **)(a2 + 16), a3, a4);
  if ( result != 1 )
    return sub_EEEA30(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 8), result & 0xFFFFFFFFFFFFFFFELL, v5, v6, v7);
  return result;
}
