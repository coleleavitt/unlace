__m128i *__fastcall sub_538920(__m128i *a1, _QWORD *a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i ptr; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  v2 = a2[1];
  if ( v2 )
  {
    v3 = 0;
    for ( i = 0; i != v2; ++i )
    {
      sub_532410((__int64)&ptr, v3 + *a2);
      sub_1D5280(a1, a1[1].m128i_i64[0], &ptr, v5, v6, v7);
      if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
        sub_1B21C0(a1, 0, 0, 0, v8, v9);
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
      v3 += 56;
    }
  }
  return a1;
}
