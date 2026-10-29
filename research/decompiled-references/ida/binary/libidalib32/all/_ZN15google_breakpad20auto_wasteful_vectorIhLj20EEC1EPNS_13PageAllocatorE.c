// Alternative name is '_ZN15google_breakpad20auto_wasteful_vectorIhLj20EEC2EPNS_13PageAllocatorE'
__int64 __fastcall google_breakpad::auto_wasteful_vector<unsigned char,20u>::auto_wasteful_vector(
        __int64 a1,
        __int64 a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v7; // [rsp+10h] [rbp-30h] BYREF

  google_breakpad::PageStdAllocator<unsigned char>::PageStdAllocator(&v7, a2, a1 + 48, 20);
  google_breakpad::wasteful_vector<unsigned char>::wasteful_vector(a1, a2, v2, v3, v4, v5, v7);
  return std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::reserve(a1, 20);
}

