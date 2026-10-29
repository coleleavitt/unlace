__int64 __fastcall std::string::_S_construct<char const*>(std::string *a1, const char *a2, std::string *a3)
{
  char v3; // r12
  bool v4; // bl
  std::string::_Rep *v5; // rax
  std::string *v8; // rax
  char *v10; // [rsp+18h] [rbp-38h]
  char v11; // [rsp+2Fh] [rbp-21h] BYREF
  std::string::_Rep *v12; // [rsp+30h] [rbp-20h]
  unsigned __int64 v13; // [rsp+38h] [rbp-18h]

  v10 = (char *)a1;
  v3 = 0;
  v4 = false;
  if ( a1 == (std::string *)a2 )
  {
    std::allocator<char>::allocator();
    v3 = 1;
    a1 = a3;
    if ( (unsigned __int8)std::operator==<char>(a3, &v11) )
      v4 = true;
  }
  if ( v3 )
  {
    a1 = (std::string *)&v11;
    std::allocator<char>::~allocator();
  }
  if ( v4 )
  {
    v5 = (std::string::_Rep *)std::string::_S_empty_rep(a1);
    return std::string::_Rep::_M_refdata(v5);
  }
  else
  {
    if ( (unsigned __int8)__gnu_cxx::__is_null_pointer<char const>(v10) && v10 != a2 )
      std::__throw_logic_error("basic_string::_S_construct null not valid");
    v13 = std::distance<char const*>(v10, a2);
    v12 = (std::string::_Rep *)std::string::_Rep::_S_create(v13, 0, a3);
    v8 = (std::string *)std::string::_Rep::_M_refdata(v12);
    std::string::_S_copy_chars(v8, v10, a2, (const char *)v8);
    std::string::_Rep::_M_set_length_and_sharable(v12, v13);
    return std::string::_Rep::_M_refdata(v12);
  }
}

