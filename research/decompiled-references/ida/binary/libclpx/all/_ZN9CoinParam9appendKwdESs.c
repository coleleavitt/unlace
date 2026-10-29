__int64 __fastcall CoinParam::appendKwd(__int64 a1, const std::string *a2)
{
  std::string *v2; // rcx
  __int64 result; // rax

  v2 = *(std::string **)(a1 + 96);
  if ( v2 == *(std::string **)(a1 + 104) )
    return std::vector<std::string>::_M_realloc_insert<std::string const&>();
  if ( v2 )
  {
    result = std::string::string(v2, a2);
    v2 = *(std::string **)(a1 + 96);
  }
  *(_QWORD *)(a1 + 96) = (char *)v2 + 8;
  return result;
}

