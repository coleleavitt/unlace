__int64 __fastcall std::vector<unsigned long>::begin(__int64 *a1)
{
  __int64 v2; // [rsp+10h] [rbp-10h] BYREF
  __int64 v3; // [rsp+18h] [rbp-8h] BYREF

  v3 = *a1;
  __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator(&v2, &v3);
  return v2;
}

