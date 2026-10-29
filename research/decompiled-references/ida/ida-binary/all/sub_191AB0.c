__int64 __fastcall idaplace_t__::vfunc_22(const __m128i **a1, const __m128i *a2, int a3)
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
    *a1 = (const __m128i *)&`typeinfo for'choose_bookmark(lochist_entry_t const&,void *,unsigned int *)::{lambda(dirtree_selstate_t const&)#1};
    return 0;
  }
}
