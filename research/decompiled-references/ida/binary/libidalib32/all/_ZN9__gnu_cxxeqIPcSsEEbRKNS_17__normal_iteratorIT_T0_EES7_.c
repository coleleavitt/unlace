bool __fastcall __gnu_cxx::operator==<char *,std::string>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)__gnu_cxx::__normal_iterator<char *,std::string>::base(a1);
  return v2 == *(_QWORD *)__gnu_cxx::__normal_iterator<char *,std::string>::base(a2);
}

