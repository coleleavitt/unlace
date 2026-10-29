__int64 __fastcall sub_19830A0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  v4 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 32), a3, a4);
  if ( v7 == 1 )
    return 1;
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v9 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(a2 + 32) )
    return sub_19CFAC0(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 16),
             v9,
             v8,
             *(_QWORD *)(a2 + 40),
             *(_QWORD *)(a2 + 48));
  result = a2;
  if ( *(_QWORD *)(a2 + 24) != v9 )
    return sub_19CFAC0(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 16),
             v9,
             v8,
             *(_QWORD *)(a2 + 40),
             *(_QWORD *)(a2 + 48));
  return result;
}
