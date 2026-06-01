__int64 __fastcall sub_5AC824(_QWORD *a1, const char *a2)
{
  _BYTE v3[17]; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(v3);
  std::string::string(a1, a2, (__int64)v3);
  return std::allocator<char>::~allocator(v3);
}
