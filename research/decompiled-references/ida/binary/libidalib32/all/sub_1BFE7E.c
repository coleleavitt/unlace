__int64 __fastcall sub_1BFE7E(google_breakpad *a1, __int64 a2)
{
  unsigned __int64 *v2; // r9
  __int64 v5; // rax
  _QWORD *v6; // rax
  _BYTE *v7; // rax
  void *v8; // [rsp+10h] [rbp-30h] BYREF
  unsigned int v9[2]; // [rsp+18h] [rbp-28h] BYREF
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-18h]
  unsigned int i; // [rsp+34h] [rbp-Ch]
  unsigned __int64 v13; // [rsp+38h] [rbp-8h]

  std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::resize(a2, 16);
  if ( (unsigned __int8)google_breakpad::FindElfSection(
                          a1,
                          ".text",
                          (const char *)&dword_0 + 1,
                          (unsigned int)v9,
                          (const void **)&v8,
                          v2) != 1
    || !v8 )
  {
    return 0;
  }
  v5 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::operator[](a2, 0);
  my_memset(v5, 0, 16);
  v13 = *(_QWORD *)v9;
  v10 = 4096;
  v6 = (_QWORD *)std::min<unsigned long>(&v8, &v10);
  v11 = *v6 + v13;
  while ( v13 < v11 )
  {
    for ( i = 0; i <= 0xF; ++i )
    {
      v7 = (_BYTE *)std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::operator[](a2, i);
      *v7 ^= *(_BYTE *)(i + v13);
    }
    v13 += 16LL;
  }
  return 1;
}

