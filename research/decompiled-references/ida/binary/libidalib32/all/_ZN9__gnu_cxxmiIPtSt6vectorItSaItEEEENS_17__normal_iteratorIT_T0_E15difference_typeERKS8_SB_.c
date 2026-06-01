__int64 __fastcall __gnu_cxx::operator-<unsigned short *,std::vector<unsigned short>>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::base(a1);
  return (v2 - *(_QWORD *)__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::base(a2)) >> 1;
}

