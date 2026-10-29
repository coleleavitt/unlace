std::string::_Rep *__fastcall std::string::_Rep::_S_create(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-58h]
  char v4; // [rsp+27h] [rbp-49h] BYREF
  std::string::_Rep *v5; // [rsp+28h] [rbp-48h]
  void *v6; // [rsp+30h] [rbp-40h]
  __int64 v7; // [rsp+38h] [rbp-38h]
  unsigned __int64 v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  unsigned __int64 v11; // [rsp+58h] [rbp-18h]

  v3 = a1;
  if ( a1 > 0x3FFFFFFFFFFFFFF9LL )
    std::__throw_length_error("basic_string::_S_create");
  v10 = 4096;
  v9 = 32;
  if ( a1 > a2 && a1 < 2 * a2 )
    v3 = 2 * a2;
  v11 = v3 + 25;
  v8 = v3 + 57;
  if ( v3 + 57 > 0x1000 && v3 > a2 )
  {
    v7 = 4096 - (v8 & 0xFFF);
    v3 += v7;
    if ( v3 > 0x3FFFFFFFFFFFFFF9LL )
      v3 = 0x3FFFFFFFFFFFFFF9LL;
    v11 = v3 + 25;
  }
  std::allocator<char>::allocator();
  v6 = (void *)__gnu_cxx::new_allocator<char>::allocate(&v4, v11, 0);
  std::allocator<char>::~allocator();
  v5 = (std::string::_Rep *)operator new(0x18u, v6);
  *((_QWORD *)v5 + 1) = v3;
  std::string::_Rep::_M_set_sharable(v5);
  return v5;
}

