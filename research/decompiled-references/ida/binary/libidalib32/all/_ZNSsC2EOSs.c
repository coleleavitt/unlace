// Alternative name is '_ZNSsC1EOSs'
__int64 __fastcall std::string::string(std::string::_Alloc_hider *a1, const std::string::_Alloc_hider *a2)
{
  std::string::_Rep *v2; // rax
  char *v3; // rax

  std::string::_Alloc_hider::_Alloc_hider(a1, a2);
  v2 = (std::string::_Rep *)std::string::_S_empty_rep(a1);
  v3 = (char *)std::string::_Rep::_M_refdata(v2);
  return std::string::_M_data(a2, v3);
}

