// Alternative name is '_ZNSsC2ERKSs'
__int64 __fastcall std::string::string(std::string *this, const std::string *a2)
{
  std::string::_Rep *v2; // r12
  __int64 v3; // rax
  char v5; // [rsp+1Dh] [rbp-13h] BYREF
  char v6; // [rsp+1Eh] [rbp-12h] BYREF
  _BYTE v7[17]; // [rsp+1Fh] [rbp-11h] BYREF

  std::string::get_allocator((std::string *)&v5, (__int64)a2);
  v2 = (std::string::_Rep *)std::string::_M_rep(a2);
  std::string::get_allocator((std::string *)&v6, (__int64)a2);
  std::string::get_allocator((std::string *)v7, (__int64)a2);
  v3 = std::string::_Rep::_M_grab(v2, (__int64)v7, (__int64)&v6);
  std::string::_Alloc_hider::_Alloc_hider(this, v3, (__int64)&v5);
  std::allocator<char>::~allocator(v7);
  std::allocator<char>::~allocator(&v6);
  return std::allocator<char>::~allocator(&v5);
}
