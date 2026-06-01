__int64 __fastcall sub_98EFA0(const __m128i **a1, const __m128i *a2, int a3)
{
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      *a1 = a2;
    }
    else if ( a3 == 2 )
    {
      *(__m128i *)a1 = _mm_loadu_si128(a2);
    }
    return 0;
  }
  else
  {
    *a1 = (const __m128i *)&`typeinfo for'smt::theory_arith<smt::inf_ext>::branch_infeasible_int_var(int)::{lambda(void)#1};
    return 0;
  }
}

