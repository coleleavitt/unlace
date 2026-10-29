// Alternative name is '_ZNSsC1ERKSs'
__int64 __fastcall std::string::string(std::string *this, const std::string *a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  char v5; // [rsp+1Dh] [rbp-13h] BYREF
  char v6; // [rsp+1Eh] [rbp-12h] BYREF
  _BYTE v7[17]; // [rsp+1Fh] [rbp-11h] BYREF

  std::string::get_allocator((std::string *)&v5);
  v2 = std::string::_M_rep(a2);
  std::string::get_allocator((std::string *)&v6);
  std::string::get_allocator((std::string *)v7);
  v3 = std::string::_Rep::_M_grab(v2, v7, &v6);
  std::string::_Alloc_hider::_Alloc_hider(this, v3, &v5);
  std::allocator<char>::~allocator();
  std::allocator<char>::~allocator();
  return std::allocator<char>::~allocator();
}

