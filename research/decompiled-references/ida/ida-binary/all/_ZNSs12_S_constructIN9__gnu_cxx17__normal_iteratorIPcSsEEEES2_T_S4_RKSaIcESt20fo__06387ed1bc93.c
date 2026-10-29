__int64 __fastcall std::string::_S_construct<__gnu_cxx::__normal_iterator<char *,std::string>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // r12
  __int64 *v4; // rsi
  std::string *v5; // rdi
  bool v6; // bl
  std::string::_Rep *v7; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+10h] [rbp-40h] BYREF
  __int64 v13[2]; // [rsp+18h] [rbp-38h] BYREF
  char v14; // [rsp+2Fh] [rbp-21h] BYREF
  std::string::_Rep *v15; // [rsp+30h] [rbp-20h]
  unsigned __int64 v16; // [rsp+38h] [rbp-18h]

  v13[0] = a1;
  v12 = a2;
  v3 = 0;
  v4 = &v12;
  v5 = (std::string *)v13;
  v6 = false;
  if ( (unsigned __int8)sub_596B2D(v13, &v12) )
  {
    std::allocator<char>::allocator(&v14);
    v3 = 1;
    v4 = (__int64 *)&v14;
    v5 = (std::string *)a3;
    if ( (unsigned __int8)sub_59090D() )
      v6 = true;
  }
  if ( v3 )
  {
    v5 = (std::string *)&v14;
    std::allocator<char>::~allocator(&v14);
  }
  if ( v6 )
  {
    v7 = (std::string::_Rep *)std::string::_S_empty_rep(v5);
    return std::string::_Rep::_M_refdata(v7);
  }
  else
  {
    if ( (unsigned __int8)sub_596B69(v13[0], v4) && (unsigned __int8)sub_596B78(v13, &v12) )
      std::__throw_logic_error("basic_string::_S_construct null not valid");
    v16 = sub_5969A0(v13[0], v12);
    v15 = std::string::_Rep::_S_create(v16, 0, a3);
    v10 = std::string::_Rep::_M_refdata(v15);
    std::string::_S_copy_chars(v10, v13[0], v12);
    std::string::_Rep::_M_set_length_and_sharable(v15, v16);
    return std::string::_Rep::_M_refdata(v15);
  }
}
