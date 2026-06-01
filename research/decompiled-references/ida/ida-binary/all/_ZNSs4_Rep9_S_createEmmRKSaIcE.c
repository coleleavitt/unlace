std::string::_Rep *__fastcall std::string::_Rep::_S_create(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-58h]
  char v5; // [rsp+27h] [rbp-49h] BYREF
  std::string::_Rep *v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  unsigned __int64 v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-20h]
  unsigned __int64 v12; // [rsp+58h] [rbp-18h]

  v4 = a1;
  if ( a1 > 0x3FFFFFFFFFFFFFF9LL )
    std::__throw_length_error("basic_string::_S_create");
  v11 = 4096;
  v10 = 32;
  if ( a1 > a2 && a1 < 2 * a2 )
    v4 = 2 * a2;
  v12 = v4 + 25;
  v9 = v4 + 57;
  if ( v4 + 57 > 0x1000 && v4 > a2 )
  {
    v8 = 4096 - (v9 & 0xFFF);
    v4 += v8;
    if ( v4 > 0x3FFFFFFFFFFFFFF9LL )
      v4 = 0x3FFFFFFFFFFFFFF9LL;
    v12 = v4 + 25;
  }
  std::allocator<char>::allocator(&v5, a3);
  v7 = sub_590F7E(&v5, v12, 0);
  std::allocator<char>::~allocator(&v5);
  v6 = (std::string::_Rep *)sub_590307(24, v7);
  *((_QWORD *)v6 + 1) = v4;
  std::string::_Rep::_M_set_sharable(v6);
  return v6;
}
