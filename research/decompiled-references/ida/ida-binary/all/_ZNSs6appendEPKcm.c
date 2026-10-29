std::string *__fastcall std::string::append(std::string *this, char *a2, const char *a3)
{
  std::string::_Rep *v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  std::string::_Rep *v7; // rax
  char *v10; // [rsp+10h] [rbp-30h]
  const char *v11; // [rsp+20h] [rbp-20h]
  unsigned __int64 v12; // [rsp+28h] [rbp-18h]

  v10 = a2;
  if ( a3 )
  {
    std::string::_M_check_length(this, 0, (unsigned __int64)a3, "basic_string::append");
    v12 = (unsigned __int64)&a3[std::string::size(this)];
    if ( v12 > std::string::capacity(this)
      || (v3 = (std::string::_Rep *)std::string::_M_rep(this), std::string::_Rep::_M_is_shared(v3)) )
    {
      if ( std::string::_M_disjunct(this, a2) )
      {
        std::string::reserve(this, v12);
      }
      else
      {
        v11 = &a2[-std::string::_M_data(this)];
        std::string::reserve(this, v12);
        v10 = (char *)&v11[std::string::_M_data(this)];
      }
    }
    v5 = std::string::_M_data(this);
    v6 = std::string::size(this);
    std::string::_M_copy((std::string *)(v5 + v6), v10, a3);
    v7 = (std::string::_Rep *)std::string::_M_rep(this);
    std::string::_Rep::_M_set_length_and_sharable(v7, v12);
  }
  return this;
}
