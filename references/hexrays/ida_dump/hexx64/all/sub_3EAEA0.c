unsigned __int64 __fastcall sub_3EAEA0(__int64 a1, __int64 *a2)
{
  __int64 i; // rbx

  sub_8FCF0(a1, a2);
  sub_8F680((__int64)a2, 2, "x86_spec_info.alloca_calls");
  sub_7FF90(a2, a1 + 56);
  sub_8F680((__int64)a2, 2, "x86_spec_info.fpdeltas");
  sub_80030(a2, a1 + 104);
  sub_8F680((__int64)a2, 2, "x86_spec_info.ssecmp_boundaries");
  sub_7F8E0(a2, *(_DWORD *)(a1 + 168));
  for ( i = *(_QWORD *)(a1 + 152); a1 + 136 != i; i = std::_Rb_tree_increment(i) )
    sub_7F8E0(a2, *(_DWORD *)(i + 32));
  sub_8F680((__int64)a2, 2, "x86_spec_info.iflags");
  return sub_7F8E0(a2, *(_DWORD *)(a1 + 176));
}
