// Alternative name is '_ZNSsC2Ev'
__int64 __fastcall std::string::string(std::string *this)
{
  std::string::_Rep *v1; // rax
  __int64 v2; // rax
  _BYTE v4[17]; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator();
  v1 = (std::string::_Rep *)std::string::_S_empty_rep((std::string *)v4);
  v2 = std::string::_Rep::_M_refdata(v1);
  std::string::_Alloc_hider::_Alloc_hider(this, v2, v4);
  return std::allocator<char>::~allocator();
}

