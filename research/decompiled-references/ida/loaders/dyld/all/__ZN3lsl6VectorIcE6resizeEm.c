lsl::Allocator **__fastcall lsl::Vector<char>::resize(lsl::Allocator **result, unsigned __int64 a2)
{
  lsl::Allocator **v3; // x19
  unsigned __int64 v4; // x2
  void *buffer; // x22
  lsl::Allocator *v6; // x1
  lsl::Allocator *v7; // x21
  lsl::Allocator *v8; // x1
  lsl::Allocator *v9; // x1
  _QWORD *v10; // x20
  __int64 _28; // [xsp+28h] [xbp+8h]

  v3 = result;
  v4 = (unsigned __int64)result[3];
  if ( v4 >= a2 )
  {
    if ( a2 )
    {
      buffer = (void *)lsl::Allocator::allocate_buffer(*result, a2, 0x10u);
      v7 = v6;
      result = (lsl::Allocator **)_platform_memmove(buffer, v3[1], a2);
      v8 = v3[1];
      if ( v8 )
        result = (lsl::Allocator **)lsl::Allocator::deallocate_buffer(*v3, v8, (unsigned __int64)v3[3], 0x10u);
      v3[1] = (lsl::Allocator *)buffer;
      v3[2] = (lsl::Allocator *)a2;
      v3[3] = v7;
    }
    else
    {
      v10 = result + 1;
      v9 = result[1];
      if ( v9 )
        result = (lsl::Allocator **)lsl::Allocator::deallocate_buffer(*result, v9, v4, 0x10u);
      *v10 = 0;
      v3[2] = nullptr;
      v3[3] = nullptr;
    }
  }
  else
  {
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (lsl::Allocator **)lsl::Vector<char>::reserve((__int64)result, a2);
  }
  return result;
}
