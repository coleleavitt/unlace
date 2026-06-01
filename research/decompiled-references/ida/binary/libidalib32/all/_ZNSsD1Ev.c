// Alternative name is '_ZNSsD2Ev'
void __fastcall std::string::~string(std::string *this)
{
  __int64 v1; // rbx
  _BYTE v2[17]; // [rsp+1Fh] [rbp-11h] BYREF

  v1 = std::string::_M_rep(this);
  std::string::get_allocator((std::string *)v2);
  std::string::_Rep::_M_dispose(v1, v2);
  std::allocator<char>::~allocator();
  std::string::_Alloc_hider::~_Alloc_hider(this);
}

