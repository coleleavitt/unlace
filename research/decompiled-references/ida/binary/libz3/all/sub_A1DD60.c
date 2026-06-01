__int64 __fastcall sub_A1DD60(__int64 a1, const __m128i *a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 i; // rdx

  v4 = *(_QWORD **)(a1 + 64);
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    for ( i = 0; i != v5; ++i )
    {
      if ( *v4 == a2->m128i_i64[0] && a2->m128i_i64[1] == v4[1] )
        return sub_2FC4A0((__int64)qword_1C7F2C0, 32 * i + *(_QWORD *)(a1 + 80), a3, 32 * i + *(_QWORD *)(a1 + 80));
      v4 += 2;
    }
  }
  sub_98CA20((__m128i **)(a1 + 64), a2);
  return sub_98D840((__int64 *)(a1 + 80), a3);
}

