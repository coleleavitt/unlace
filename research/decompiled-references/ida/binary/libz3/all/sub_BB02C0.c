__int64 __fastcall sub_BB02C0(__m128i **a1, const __m128i **a2, int a3)
{
  __m128i *v3; // rdi
  const __m128i *v5; // rbp
  __m128i *v6; // rax

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        *a1 = (__m128i *)*a2;
        break;
      case 2:
        v5 = *a2;
        v6 = (__m128i *)operator new(0x18u);
        *v6 = _mm_loadu_si128(v5);
        v6[1].m128i_i64[0] = v5[1].m128i_i64[0];
        *a1 = v6;
        break;
      case 3:
        v3 = *a1;
        if ( v3 )
          operator delete(v3, 0x18u);
        break;
    }
    return 0;
  }
  else
  {
    *a1 = (__m128i *)&`typeinfo for'smt::theory_seq::propagate_eq(dependency_manager<scoped_dependency_manager<smt::theory_seq::assumption>::config>::dependency *,smt::enode *,smt::enode *)::{lambda(void)#1};
    return 0;
  }
}

