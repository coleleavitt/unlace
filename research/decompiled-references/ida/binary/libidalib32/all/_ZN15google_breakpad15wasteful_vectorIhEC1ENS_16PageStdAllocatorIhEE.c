// Alternative name is '_ZN15google_breakpad15wasteful_vectorIhEC2ENS_16PageStdAllocatorIhEE'
__int64 __fastcall google_breakpad::wasteful_vector<unsigned char>::wasteful_vector(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  return std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::vector(a1, &a7);
}

