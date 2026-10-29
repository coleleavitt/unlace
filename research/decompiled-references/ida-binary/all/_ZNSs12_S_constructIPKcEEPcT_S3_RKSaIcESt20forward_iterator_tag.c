__int64 __fastcall std::string::_S_construct<char const*>(std::string *a1, char *a2, __int64 a3)
{
  char v3; // r12
  bool v4; // bl
  std::string::_Rep *v5; // rax
  std::string *v8; // rax
  char *v10; // [rsp+10h] [rbp-40h]
  char *v11; // [rsp+18h] [rbp-38h]
  char v12; // [rsp+2Fh] [rbp-21h] BYREF
  std::string::_Rep *v13; // [rsp+30h] [rbp-20h]
  unsigned __int64 v14; // [rsp+38h] [rbp-18h]

  v11 = (char *)a1;
  v10 = a2;
  v3 = 0;
  v4 = false;
  if ( a1 == (std::string *)a2 )
  {
    std::allocator<char>::allocator(&v12);
    v3 = 1;
    a2 = &v12;
    a1 = (std::string *)a3;
    if ( (unsigned __int8)sub_59090D() )
      v4 = true;
  }
  if ( v3 )
  {
    a1 = (std::string *)&v12;
    std::allocator<char>::~allocator(&v12);
  }
  if ( v4 )
  {
    v5 = (std::string::_Rep *)std::string::_S_empty_rep(a1);
    return std::string::_Rep::_M_refdata(v5);
  }
  else
  {
    if ( (unsigned __int8)sub_5AA68C(v11, a2) && v11 != v10 )
      std::__throw_logic_error("basic_string::_S_construct null not valid");
    v14 = sub_5AA257((__int64)v11, (__int64)v10);
    v13 = std::string::_Rep::_S_create(v14, 0, a3);
    v8 = (std::string *)std::string::_Rep::_M_refdata(v13);
    std::string::_S_copy_chars(v8, v11, v10, (const char *)v8);
    std::string::_Rep::_M_set_length_and_sharable(v13, v14);
    return std::string::_Rep::_M_refdata(v13);
  }
}
