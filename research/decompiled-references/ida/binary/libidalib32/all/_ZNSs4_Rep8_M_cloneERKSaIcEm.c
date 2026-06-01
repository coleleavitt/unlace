__int64 __fastcall std::string::_Rep::_M_clone(const char **a1, __int64 a2, __int64 a3)
{
  const char *v3; // rbx
  char *v4; // r12
  std::string *v5; // rax
  unsigned __int64 v6; // rcx
  std::string::_Rep *v8; // [rsp+20h] [rbp-20h]

  v8 = (std::string::_Rep *)std::string::_Rep::_S_create(&(*a1)[a3], a1[1], a2);
  if ( *a1 )
  {
    v3 = *a1;
    v4 = (char *)std::string::_Rep::_M_refdata((std::string::_Rep *)a1);
    v5 = (std::string *)std::string::_Rep::_M_refdata(v8);
    std::string::_M_copy(v5, v4, v3, v6);
  }
  std::string::_Rep::_M_set_length_and_sharable(v8, (unsigned __int64)*a1);
  return std::string::_Rep::_M_refdata(v8);
}

