__int64 __fastcall std::_Sp_counted_ptr_inplace_searchable_container_meta_t__std::allocator_void______gnu_cxx::_Lock_policy_2___::vfunc_5(
        const __m128i **a1,
        const __m128i *a2,
        int a3)
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
    *a1 = (const __m128i *)&`typeinfo for'std::__future_base::_State_baseV2::_Setter<std::vector<unsigned int>,std::vector<unsigned int> const&>;
    return 0;
  }
}
