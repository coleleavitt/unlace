__int64 __fastcall std::vector<unsigned short>::empty(__int64 a1)
{
  __int64 v2; // [rsp+10h] [rbp-10h] BYREF
  __int64 v3; // [rsp+18h] [rbp-8h] BYREF

  v2 = std::vector<unsigned short>::end(a1);
  v3 = std::vector<unsigned short>::begin(a1);
  return __gnu_cxx::operator==<unsigned short const*,std::vector<unsigned short>>(&v3, &v2);
}

