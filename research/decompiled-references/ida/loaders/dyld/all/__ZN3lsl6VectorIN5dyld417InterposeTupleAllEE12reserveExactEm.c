__int64 __fastcall lsl::Vector<dyld4::InterposeTupleAll>::reserveExact(__int64 result, unsigned __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x22
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x8
  __int64 v8; // x9
  unsigned __int64 i; // x10
  void *v10; // x1

  if ( a2 > *(_QWORD *)(result + 24) >> 4 )
  {
    v3 = result;
    result = lsl::Allocator::allocate_buffer(*(lsl::Allocator **)result, 16 * a2, 0x10u);
    v4 = result;
    v6 = v5;
    v7 = *(_QWORD *)(v3 + 16);
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i < v7; ++i )
      {
        *(_OWORD *)(result + v8) = *(_OWORD *)(*(_QWORD *)(v3 + 8) + v8);
        v7 = *(_QWORD *)(v3 + 16);
        v8 += 16;
      }
    }
    v10 = *(void **)(v3 + 8);
    if ( v10 )
    {
      result = lsl::Allocator::deallocate_buffer(*(lsl::Allocator **)v3, v10, *(_QWORD *)(v3 + 24), 0x10u);
      v7 = *(_QWORD *)(v3 + 16);
    }
    if ( v7 >= a2 )
      v7 = a2;
    *(_QWORD *)(v3 + 8) = v4;
    *(_QWORD *)(v3 + 16) = v7;
    *(_QWORD *)(v3 + 24) = v6;
    if ( a2 > v6 >> 4 )
      lsl::Vector<dyld4::InterposeTupleAll>::reserveExact();
  }
  return result;
}
