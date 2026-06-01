__int64 __fastcall std::vector<unsigned short>::end(__int64 a1)
{
  __int64 v2; // [rsp+10h] [rbp-10h] BYREF
  __int64 v3; // [rsp+18h] [rbp-8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  __gnu_cxx::__normal_iterator<unsigned short const*,std::vector<unsigned short>>::__normal_iterator(&v2, &v3);
  return v2;
}

