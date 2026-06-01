__int64 __fastcall sub_1AAD44(__int64 a1, _QWORD *a2, unsigned __int8 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rax
  size_t v6; // rbx
  const void *v7; // rax
  _BYTE v12[256]; // [rsp+20h] [rbp-290h] BYREF
  _BYTE v13[256]; // [rsp+120h] [rbp-190h] BYREF
  __int64 dest; // [rsp+220h] [rbp-90h] BYREF
  __int64 v15; // [rsp+228h] [rbp-88h]
  _BYTE v16[80]; // [rsp+230h] [rbp-80h] BYREF
  __int64 v17; // [rsp+280h] [rbp-30h] BYREF
  __int64 v18; // [rsp+288h] [rbp-28h] BYREF
  __int64 v19; // [rsp+290h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+298h] [rbp-18h] BYREF

  v5 = google_breakpad::LinuxDumper::allocator(*(google_breakpad::LinuxDumper **)(a1 + 16));
  google_breakpad::auto_wasteful_vector<unsigned char,20u>::auto_wasteful_vector(v16, v5);
  if ( a5 )
  {
    v18 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::end(v16);
    __gnu_cxx::__normal_iterator<unsigned char const*,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::__normal_iterator<unsigned char *>(
      &v17,
      &v18);
    std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::insert<unsigned char const*,void>(
      v16,
      v17,
      a5,
      a5 + 16);
  }
  else
  {
    google_breakpad::LinuxDumper::ElfFileIdentifierForMapping(*(_QWORD *)(a1 + 16), a2, a3, a4, v16);
  }
  dest = 0;
  v15 = 0;
  v19 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::size(v16);
  v20[0] = 16;
  v6 = *(_QWORD *)std::min<unsigned long>(v20, &v19);
  v7 = (const void *)std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::operator[](v16, 0);
  memcpy(&dest, v7, v6);
  google_breakpad::LinuxDumper::GetMappingEffectiveNameAndPath(*(_QWORD *)(a1 + 16), a2, v12, 255, v13, 255);
  sub_1AA374(a1, (__int64)"M ");
  sub_1AB4F2(a1, *a2);
  sub_1AA374(a1, (__int64)" ");
  sub_1AB4F2(a1, a2[4]);
  sub_1AA374(a1, (__int64)" ");
  sub_1AB4F2(a1, a2[1]);
  sub_1AA374(a1, (__int64)" ");
  sub_1AB556(a1, (unsigned int)dest);
  sub_1AB5B6(a1, WORD2(dest));
  sub_1AB5B6(a1, HIWORD(dest));
  sub_1AB42C(a1, (unsigned __int8)v15);
  sub_1AB42C(a1, BYTE1(v15));
  sub_1AB42C(a1, BYTE2(v15));
  sub_1AB42C(a1, BYTE3(v15));
  sub_1AB42C(a1, BYTE4(v15));
  sub_1AB42C(a1, BYTE5(v15));
  sub_1AB42C(a1, BYTE6(v15));
  sub_1AB42C(a1, HIBYTE(v15));
  sub_1AA374(a1, (__int64)"0 ");
  sub_1AA3A4(a1, (__int64)v13);
  sub_1AA420(a1);
  return google_breakpad::auto_wasteful_vector<unsigned char,20u>::~auto_wasteful_vector(v16);
}

