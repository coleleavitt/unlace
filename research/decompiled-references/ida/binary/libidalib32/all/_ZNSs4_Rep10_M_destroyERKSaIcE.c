__int64 __fastcall std::string::_Rep::_M_destroy(__int64 a1)
{
  char v2; // [rsp+17h] [rbp-9h] BYREF
  __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = *(_QWORD *)(a1 + 8) + 25LL;
  std::allocator<char>::allocator();
  __gnu_cxx::new_allocator<char>::deallocate(&v2, a1, v3);
  return std::allocator<char>::~allocator();
}

