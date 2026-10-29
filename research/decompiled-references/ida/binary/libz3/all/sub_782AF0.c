__int64 __fastcall sub_782AF0(const __m128i **a1, const __m128i *a2, int a3)
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
    *a1 = (const __m128i *)&`typeinfo for'sat2goal::imp::operator()(sat::solver &,atom2bool_var const&,goal &,ref<sat2goal::mc> &)::{lambda(sat::literal)#1};
    return 0;
  }
}

