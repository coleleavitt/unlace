__int64 __fastcall sub_19859F0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9

  v4 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), *(double *)a3.m128_u64, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 32), *(double *)a3.m128_u64, a4);
  if ( v7 == 1 )
    return 1;
  v8 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 40), *(double *)a3.m128_u64, a4);
  if ( v8 == 1 )
    return 1;
  v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v6 & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(a2 + 24) )
    return sub_1923BC0(
             *a1,
             *(_DWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 20),
             v6 & 0xFFFFFFFFFFFFFFFELL,
             v9,
             v10,
             a3,
             a4);
  if ( *(_QWORD *)(a2 + 32) != v9 )
    return sub_1923BC0(
             *a1,
             *(_DWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 20),
             v6 & 0xFFFFFFFFFFFFFFFELL,
             v9,
             v10,
             a3,
             a4);
  result = a2;
  if ( *(_QWORD *)(a2 + 40) != v10 )
    return sub_1923BC0(
             *a1,
             *(_DWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 20),
             v6 & 0xFFFFFFFFFFFFFFFELL,
             v9,
             v10,
             a3,
             a4);
  return result;
}
