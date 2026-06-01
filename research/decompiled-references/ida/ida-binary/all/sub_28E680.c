__int64 __fastcall std::_Sp_counted_ptr_type_listing_contents_t_______gnu_cxx::_Lock_policy_2___::vfunc_2(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
