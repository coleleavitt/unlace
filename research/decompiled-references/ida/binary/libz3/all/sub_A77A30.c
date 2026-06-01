__int64 __fastcall sub_A77A30(__m128i **a1, const __m128i **a2, int a3)
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
        v6 = (__m128i *)operator new(0x38u);
        *v6 = _mm_loadu_si128(v5);
        v6[1] = _mm_loadu_si128(v5 + 1);
        v6[2] = _mm_loadu_si128(v5 + 2);
        v6[3].m128i_i64[0] = v5[3].m128i_i64[0];
        *a1 = v6;
        break;
      case 3:
        v3 = *a1;
        if ( v3 )
          operator delete(v3, 0x38u);
        break;
    }
    return 0;
  }
  else
  {
    *a1 = (__m128i *)&`typeinfo for'smt::theory_lra::imp::mk_idiv_mod_axioms(expr *,expr *)::{lambda(void)#1};
    return 0;
  }
}

