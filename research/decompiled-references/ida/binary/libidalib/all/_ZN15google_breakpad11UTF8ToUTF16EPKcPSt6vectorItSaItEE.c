__int64 __fastcall google_breakpad::UTF8ToUTF16(const char *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v5; // [rsp+18h] [rbp-58h] BYREF
  const char *v6; // [rsp+20h] [rbp-50h] BYREF
  __int16 v7; // [rsp+2Eh] [rbp-42h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  const char *v12; // [rsp+50h] [rbp-20h]
  size_t v13; // [rsp+58h] [rbp-18h]

  v13 = strlen(a1);
  v6 = a1;
  v12 = &a1[v13];
  std::vector<unsigned short>::clear(a2);
  v7 = 0;
  v9 = std::vector<unsigned short>::begin(a2);
  __gnu_cxx::__normal_iterator<unsigned short const*,std::vector<unsigned short>>::__normal_iterator<unsigned short *>(
    &v8,
    &v9);
  std::vector<unsigned short>::insert(a2, v8, v13, &v7);
  v5 = std::vector<unsigned short>::operator[](a2, 0);
  v11 = v5 + 2 * std::vector<unsigned short>::capacity(a2);
  if ( (unsigned int)google_breakpad::ConvertUTF8toUTF16(&v6, v12, &v5, v11, 0) )
  {
    v3 = 0;
  }
  else
  {
    v2 = v5;
    v3 = ((v2 - std::vector<unsigned short>::operator[](a2, 0)) >> 1) + 1;
  }
  return std::vector<unsigned short>::resize(a2, v3);
}

