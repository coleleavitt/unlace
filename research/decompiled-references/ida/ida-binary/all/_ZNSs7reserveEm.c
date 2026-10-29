__int64 __fastcall std::string::reserve(std::string *this, unsigned __int64 a2)
{
  std::string::_Rep *v2; // rax
  __int64 result; // rax
  const char **v4; // rbx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rax
  __int64 v7; // [rsp+0h] [rbp-30h]
  char v8; // [rsp+17h] [rbp-19h] BYREF
  char *v9; // [rsp+18h] [rbp-18h]

  v7 = a2;
  result = true;
  if ( a2 == std::string::capacity(this) )
  {
    v2 = (std::string::_Rep *)std::string::_M_rep(this);
    if ( !std::string::_Rep::_M_is_shared(v2) )
      result = false;
  }
  if ( (_BYTE)result )
  {
    if ( a2 < std::string::size(this) )
      v7 = std::string::size(this);
    std::string::get_allocator((std::string *)&v8, (__int64)this);
    v4 = (const char **)std::string::_M_rep(this);
    v5 = std::string::size(this);
    v9 = (char *)std::string::_Rep::_M_clone(v4, (__int64)&v8, v7 - v5);
    v6 = (volatile signed __int32 *)std::string::_M_rep(this);
    std::string::_Rep::_M_dispose(v6, (__int64)&v8);
    std::string::_M_data(this, v9);
    return std::allocator<char>::~allocator(&v8);
  }
  return result;
}
