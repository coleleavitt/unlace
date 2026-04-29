unsigned __int64 __fastcall sub_18020(__int64 a1, __int64 a2, char a3)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v7; // r15
  unsigned int v8; // edx
  _DWORD v10[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v3 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v4 = *(_QWORD *)(a1 + 40);
  v11 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL)
     & _mm_add_epi64(_mm_srli_si128(v3, 8), v3).m128i_u64[0];
  if ( v3.m128i_i64[0] < v5 )
  {
    do
    {
      v10[0] = 0;
      lread(a2, v10, 20);
      v8 = v10[0];
      if ( !v10[0] )
        break;
      if ( a3 )
      {
        v10[0] &= ~1u;
        sub_7FF0(0x57u, v8 & 0xFFFFFFFE, v8 & 1);
        v8 = v10[0];
      }
      v7 = v8;
      v4 += 20LL;
      auto_mark_range(v7, v7 + 1, 20);
      auto_mark_range(v7, v7 + 1, 30);
    }
    while ( v4 < v5 );
  }
  return v11 - __readfsqword(0x28u);
}
