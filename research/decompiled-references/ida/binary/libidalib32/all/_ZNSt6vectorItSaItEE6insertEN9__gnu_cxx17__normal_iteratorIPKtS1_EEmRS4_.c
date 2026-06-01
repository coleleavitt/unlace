__int64 __fastcall std::vector<unsigned short>::insert(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v8; // [rsp+10h] [rbp-30h] BYREF
  __int64 v9; // [rsp+18h] [rbp-28h]
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h]

  v9 = a1;
  v8 = a2;
  v10 = std::vector<unsigned short>::cbegin(a1);
  v13 = __gnu_cxx::operator-<unsigned short const*,std::vector<unsigned short>>(&v8, &v10);
  v11 = std::vector<unsigned short>::begin(v9);
  v4 = __gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::operator+(&v11, v13);
  std::vector<unsigned short>::_M_fill_insert(v9, v4, a3, a4);
  v12 = std::vector<unsigned short>::begin(v9);
  return __gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::operator+(&v12, v13);
}

