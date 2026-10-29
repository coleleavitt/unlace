__int64 __fastcall lsl::Vector<lsl::MemoryManager::Buffer>::reserveExact(__int64 result, unsigned __int64 a2)
{
  _QWORD *v3; // x20
  __int64 v4; // x22
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x8
  __int64 v8; // x9
  unsigned __int64 i; // x10

  if ( a2 > *(_QWORD *)(result + 24) >> 4 )
  {
    v3 = (_QWORD *)result;
    result = lsl::Allocator::allocate_buffer(*(lsl::Allocator **)result, 16 * a2, 0x10u);
    v4 = result;
    v6 = v5;
    v7 = v3[2];
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i < v7; ++i )
      {
        *(_OWORD *)(result + v8) = *(_OWORD *)(v3[1] + v8);
        v7 = v3[2];
        v8 += 16;
      }
    }
    if ( v3[1] )
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 64LL))(*v3);
      v7 = v3[2];
    }
    if ( v7 >= a2 )
      v7 = a2;
    v3[1] = v4;
    v3[2] = v7;
    v3[3] = v6;
    if ( a2 > v6 >> 4 )
      lsl::Vector<lsl::MemoryManager::Buffer>::reserveExact();
  }
  return result;
}
