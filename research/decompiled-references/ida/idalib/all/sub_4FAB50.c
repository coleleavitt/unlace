__int64 __fastcall sub_4FAB50(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __m128i *v3; // rbx
  __m128i *v4; // rbp
  __int64 v5; // r13
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i v10; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(**(_QWORD **)(a1 + 192) + 48 * a2 + 32);
  v3 = (__m128i *)v2[3];
  v4 = &v3[v2[4]];
  if ( v4 != v3 )
  {
    do
    {
      v5 = *(_QWORD *)(a1 + 200);
      v6 = _mm_loadu_si128(v3++);
      v10 = v6;
      v7 = sub_4FA430(v5, v10.m128i_i64);
      sub_4FA5A0(v5, v7, v8);
    }
    while ( v4 != v3 );
    v3 = (__m128i *)v2[3];
  }
  if ( v3 )
  {
    v2[4] = 0;
    qfree(v3);
    v2[3] = 0;
    v2[5] = 0;
  }
  return sub_4F74D0(*(__int64 **)(a1 + 192), a2);
}
