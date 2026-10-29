__int64 __fastcall std::string::clear(std::string *this)
{
  std::string::_Rep *v1; // rax
  __int64 v2; // rbx
  std::string::_Rep *v3; // rax
  char *v4; // rax
  std::string::_Rep *v6; // rax
  _BYTE v7[17]; // [rsp+1Fh] [rbp-11h] BYREF

  v1 = (std::string::_Rep *)std::string::_M_rep(this);
  if ( (unsigned __int8)std::string::_Rep::_M_is_shared(v1) )
  {
    v2 = std::string::_M_rep(this);
    std::string::get_allocator((std::string *)v7);
    std::string::_Rep::_M_dispose(v2, v7);
    std::allocator<char>::~allocator();
    v3 = (std::string::_Rep *)std::string::_S_empty_rep((std::string *)v7);
    v4 = (char *)std::string::_Rep::_M_refdata(v3);
    return std::string::_M_data(this, v4);
  }
  else
  {
    v6 = (std::string::_Rep *)std::string::_M_rep(this);
    return std::string::_Rep::_M_set_length_and_sharable(v6, 0);
  }
}

