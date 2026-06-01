// Alternative name is '_ZNSsC2EPKcRKSaIcE'
__int64 __fastcall std::string::string(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( a2 )
    v3 = std::char_traits<char>::length(a2) + a2;
  else
    v3 = -1;
  v4 = std::string::_S_construct<char const*>(a2, v3, a3);
  return std::string::_Alloc_hider::_Alloc_hider(a1, v4, a3);
}

