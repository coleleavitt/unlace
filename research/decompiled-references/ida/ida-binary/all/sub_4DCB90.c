__int64 __fastcall std::_Sp_counted_ptr_inplace_std::__future_base::_State_baseV2__std::allocator_void______gnu_cxx::_Lock_policy_2___::vfunc_4(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  const char *v3; // rdi

  v2 = a1 + 16;
  if ( (_UNKNOWN *)a2 == &std::_Sp_make_shared_tag::_S_ti(void)::__tag )
    return v2;
  v3 = *(const char **)(a2 + 8);
  if ( v3 == "St19_Sp_make_shared_tag" )
    return v2;
  if ( *v3 != 42 )
  {
    if ( strcmp(v3, "St19_Sp_make_shared_tag") )
      return 0;
    return v2;
  }
  return 0;
}
