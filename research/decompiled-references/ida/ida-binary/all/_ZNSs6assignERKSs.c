std::string *__fastcall std::string::assign(std::string *this, const std::string *a2)
{
  __int64 v2; // rbx
  std::string::_Rep *v3; // rbx
  volatile signed __int32 *v4; // rax
  char v6; // [rsp+16h] [rbp-1Ah] BYREF
  char v7; // [rsp+17h] [rbp-19h] BYREF
  char *v8; // [rsp+18h] [rbp-18h]

  v2 = std::string::_M_rep(this);
  if ( v2 != std::string::_M_rep(a2) )
  {
    std::string::get_allocator((std::string *)&v6, (__int64)this);
    v3 = (std::string::_Rep *)std::string::_M_rep(a2);
    std::string::get_allocator((std::string *)&v7, (__int64)a2);
    v8 = (char *)std::string::_Rep::_M_grab(v3, (__int64)&v6, (__int64)&v7);
    std::allocator<char>::~allocator(&v7);
    v4 = (volatile signed __int32 *)std::string::_M_rep(this);
    std::string::_Rep::_M_dispose(v4, (__int64)&v6);
    std::string::_M_data(this, v8);
    std::allocator<char>::~allocator(&v6);
  }
  return this;
}
