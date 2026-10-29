__int64 __fastcall sub_198BEE0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r12
  __int64 result; // rax
  __int64 v7; // r13
  unsigned __int64 v8; // r14

  v4 = sub_1988430(a1, *(_QWORD *)(a2 + 40), a3, a4);
  if ( !v4 )
    return 1;
  v5 = v4;
  result = a2;
  if ( v5 != *(_QWORD **)(a2 + 40) )
  {
    v7 = *a1;
    sub_18C79E0(*a1, 0, 4);
    v8 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), *(double *)a3.m128_u64, a4);
    sub_190D5E0(v7, a3);
    if ( v8 == 1 )
      return 1;
    else
      return sub_1E885A0(
               *a1,
               (*(_BYTE *)(a2 + 2) >> 3) & 3,
               *(unsigned int *)(a2 + 32),
               v5,
               v8 & 0xFFFFFFFFFFFFFFFELL,
               *(unsigned int *)(a2 + 36));
  }
  return result;
}
