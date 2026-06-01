__int64 __fastcall sub_198B950(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r9
  __int64 result; // rax

  v4 = sub_1988430(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v4 )
    return 1;
  v5 = v4;
  v6 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v6 == 1 )
    return 1;
  v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( v5 != *(_QWORD **)(a2 + 24) )
    return sub_19DD340(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 32),
             *(_BYTE *)(a2 + 40) & 3,
             *(unsigned int *)(a2 + 36),
             v5,
             v7);
  result = a2;
  if ( *(_QWORD *)(a2 + 16) != v7 )
    return sub_19DD340(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 32),
             *(_BYTE *)(a2 + 40) & 3,
             *(unsigned int *)(a2 + 36),
             v5,
             v7);
  return result;
}
