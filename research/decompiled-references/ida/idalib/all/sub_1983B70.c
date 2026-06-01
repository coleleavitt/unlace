__int64 __fastcall sub_1983B70(__int64 *a1, __int64 a2, __m128i a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx

  v4 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), *(double *)a3.m128i_i64, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), *(double *)a3.m128i_i64, a4);
  if ( v7 == 1 )
    return 1;
  v8 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 32), *(double *)a3.m128i_i64, a4);
  if ( v8 == 1 )
    return 1;
  v10 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  v11 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v6 & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(a2 + 16) )
    return sub_190A860(*a1, (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFELL), v10, v11, *(unsigned int *)(a2 + 4), v9, a3, a4);
  if ( v10 != *(_QWORD **)(a2 + 24) )
    return sub_190A860(*a1, (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFELL), v10, v11, *(unsigned int *)(a2 + 4), v9, a3, a4);
  result = a2;
  if ( *(_QWORD **)(a2 + 32) != v11 )
    return sub_190A860(*a1, (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFELL), v10, v11, *(unsigned int *)(a2 + 4), v9, a3, a4);
  return result;
}
