__int64 __fastcall sub_69ED00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __m128i *v6; // r12
  unsigned __int64 v9; // rax

  v6 = *(__m128i **)(a1 + 1840);
  if ( v6->m128i_i64[1] == -1 || a2 != v6->m128i_i64[1] || a5 <= 1 )
    return 0;
  v9 = sub_3BDE50(*(_QWORD **)(a1 + 1672), a3);
  sub_69E9F0(v6, v9, a4, a5);
  return 1;
}
