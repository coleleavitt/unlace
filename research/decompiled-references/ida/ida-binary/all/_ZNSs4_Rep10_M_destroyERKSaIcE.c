__int64 __fastcall std::string::_Rep::_M_destroy(__int64 a1, __int64 a2)
{
  char v3; // [rsp+17h] [rbp-9h] BYREF
  __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = *(_QWORD *)(a1 + 8) + 25LL;
  std::allocator<char>::allocator(&v3, a2);
  sub_590B82(&v3, a1, v4);
  return std::allocator<char>::~allocator(&v3);
}
