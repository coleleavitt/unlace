_QWORD *__fastcall lsl::Vector<lsl::MemoryManager::Buffer>::resize(_QWORD *result, unsigned __int64 a2)
{
  _QWORD *v3; // x19
  unsigned __int64 v4; // x8
  void *buffer; // x22
  __int64 v6; // x1
  __int64 v7; // x21
  _QWORD *v8; // x20
  __int64 _38; // [xsp+38h] [xbp+8h]

  v3 = result;
  v4 = result[3];
  if ( a2 <= v4 >> 4 )
  {
    if ( a2 )
    {
      buffer = (void *)lsl::Allocator::allocate_buffer((lsl::Allocator *)*result, 16 * a2, 0x10u);
      v7 = v6;
      result = _platform_memmove(buffer, (const void *)v3[1], 16 * a2);
      if ( v3[1] )
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 64LL))(*v3);
      v3[1] = buffer;
      v3[2] = a2;
      v3[3] = v7;
    }
    else
    {
      v8 = result + 1;
      if ( result[1] )
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*result + 64LL))(*result);
      *v8 = 0;
      v3[2] = 0;
      v3[3] = 0;
    }
  }
  else
  {
    if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (_QWORD *)lsl::Vector<lsl::MemoryManager::Buffer>::reserve(result, a2);
  }
  return result;
}
