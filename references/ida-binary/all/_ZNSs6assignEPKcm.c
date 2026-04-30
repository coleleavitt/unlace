std::string *__fastcall std::string::assign(std::string *this, char *a2, const char *a3)
{
  unsigned __int64 v3; // rax
  std::string::_Rep *v4; // rax
  unsigned __int64 v6; // rax
  std::string *v8; // rax
  std::string *v9; // rax
  std::string::_Rep *v10; // rax
  const char *v12; // [rsp+28h] [rbp-18h]

  v3 = std::string::size(this);
  std::string::_M_check_length(this, v3, (unsigned __int64)a3, "basic_string::assign");
  if ( (unsigned __int8)std::string::_M_disjunct(this, a2)
    || (v4 = (std::string::_Rep *)std::string::_M_rep(this), (unsigned __int8)std::string::_Rep::_M_is_shared(v4)) )
  {
    v6 = std::string::size(this);
    return (std::string *)std::string::_M_replace_safe(this, 0, v6, a2, (unsigned __int64)a3);
  }
  else
  {
    v12 = &a2[-std::string::_M_data(this)];
    if ( v12 < a3 )
    {
      if ( v12 )
      {
        v9 = (std::string *)std::string::_M_data(this);
        std::string::_M_move(v9, a2, a3, (unsigned __int64)v9);
      }
    }
    else
    {
      v8 = (std::string *)std::string::_M_data(this);
      std::string::_M_copy(v8, a2, a3, (unsigned __int64)v8);
    }
    v10 = (std::string::_Rep *)std::string::_M_rep(this);
    std::string::_Rep::_M_set_length_and_sharable(v10, (unsigned __int64)a3);
    return this;
  }
}
