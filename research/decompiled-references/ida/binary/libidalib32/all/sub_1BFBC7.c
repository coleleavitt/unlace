__int64 __fastcall sub_1BFBC7(_DWORD *a1, __int64 a2, __int64 a3)
{
  char *v4; // r12
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  char *v8; // [rsp+38h] [rbp-28h]
  unsigned __int64 v9; // [rsp+40h] [rbp-20h]
  _DWORD *i; // [rsp+48h] [rbp-18h]

  v9 = (unsigned __int64)a1 + a2;
  for ( i = a1;
        (unsigned __int64)i < v9 && i[2] != 3;
        i = (_DWORD *)((char *)i + ((*i + 3) & 0xFFFFFFFC) + (unsigned __int64)((i[1] + 3) & 0xFFFFFFFC) + 12) )
  {
    ;
  }
  if ( (unsigned __int64)i >= v9 || !i[1] )
    return 0;
  v8 = (char *)i + ((*i + 3) & 0xFFFFFFFC) + 12;
  v4 = &v8[i[1]];
  v7 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::end(a3);
  __gnu_cxx::__normal_iterator<unsigned char const*,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::__normal_iterator<unsigned char *>(
    &v6,
    &v7);
  std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::insert<unsigned char const*,void>(
    a3,
    v6,
    v8,
    v4);
  return 1;
}

