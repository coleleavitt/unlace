__int64 __fastcall std::distance<char const*>(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-18h] BYREF

  v3 = a1;
  std::__iterator_category<char const*>(&v3);
  return std::__distance<char const*>(v3, a2);
}

