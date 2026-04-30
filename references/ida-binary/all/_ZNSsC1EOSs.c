// Alternative name is '_ZNSsC2EOSs'
__int64 __fastcall std::string::string(std::string *a1, std::string *a2)
{
  std::string::_Rep *v2; // rax
  char *v3; // rax

  sub_5962B4(a1, a2);
  v2 = (std::string::_Rep *)std::string::_S_empty_rep(a1);
  v3 = (char *)std::string::_Rep::_M_refdata(v2);
  return std::string::_M_data(a2, v3);
}
