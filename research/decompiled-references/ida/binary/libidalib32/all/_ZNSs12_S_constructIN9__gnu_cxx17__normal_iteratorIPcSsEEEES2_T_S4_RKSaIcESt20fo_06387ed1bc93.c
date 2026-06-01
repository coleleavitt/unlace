__int64 __fastcall std::string::_S_construct<__gnu_cxx::__normal_iterator<char *,std::string>>(
        __int64 a1,
        __int64 a2,
        std::string *a3)
{
  char v3; // r12
  std::string *v4; // rdi
  bool v5; // bl
  std::string::_Rep *v6; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+10h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+18h] [rbp-38h] BYREF
  char v13; // [rsp+2Fh] [rbp-21h] BYREF
  std::string::_Rep *v14; // [rsp+30h] [rbp-20h]
  unsigned __int64 v15; // [rsp+38h] [rbp-18h]

  v12[0] = a1;
  v11 = a2;
  v3 = 0;
  v4 = (std::string *)v12;
  v5 = false;
  if ( (unsigned __int8)__gnu_cxx::operator==<char *,std::string>(v12, &v11) )
  {
    std::allocator<char>::allocator();
    v3 = 1;
    v4 = a3;
    if ( (unsigned __int8)std::operator==<char>(a3, &v13) )
      v5 = true;
  }
  if ( v3 )
  {
    v4 = (std::string *)&v13;
    std::allocator<char>::~allocator();
  }
  if ( v5 )
  {
    v6 = (std::string::_Rep *)std::string::_S_empty_rep(v4);
    return std::string::_Rep::_M_refdata(v6);
  }
  else
  {
    if ( (unsigned __int8)__gnu_cxx::__is_null_pointer<__gnu_cxx::__normal_iterator<char *,std::string>>(v12[0])
      && (unsigned __int8)__gnu_cxx::operator!=<char *,std::string>(v12, &v11) )
    {
      std::__throw_logic_error("basic_string::_S_construct null not valid");
    }
    v15 = std::distance<__gnu_cxx::__normal_iterator<char *,std::string>>(v12[0], v11);
    v14 = (std::string::_Rep *)std::string::_Rep::_S_create(v15, 0, a3);
    v9 = std::string::_Rep::_M_refdata(v14);
    std::string::_S_copy_chars(v9, v12[0], v11);
    std::string::_Rep::_M_set_length_and_sharable(v14, v15);
    return std::string::_Rep::_M_refdata(v14);
  }
}

