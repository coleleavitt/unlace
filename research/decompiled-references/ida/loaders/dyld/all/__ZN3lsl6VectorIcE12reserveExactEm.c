__int64 __fastcall lsl::Vector<char>::reserveExact(__int64 result, unsigned __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x22
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x8
  unsigned __int64 i; // x9
  void *v9; // x1

  if ( *(_QWORD *)(result + 24) < a2 )
  {
    v3 = result;
    result = lsl::Allocator::allocate_buffer(*(lsl::Allocator **)result, a2, 0x10u);
    v4 = result;
    v6 = v5;
    v7 = *(_QWORD *)(v3 + 16);
    if ( v7 )
    {
      for ( i = 0; i < v7; ++i )
      {
        *(_BYTE *)(result + i) = *(_BYTE *)(*(_QWORD *)(v3 + 8) + i);
        v7 = *(_QWORD *)(v3 + 16);
      }
    }
    v9 = *(void **)(v3 + 8);
    if ( v9 )
    {
      result = lsl::Allocator::deallocate_buffer(*(lsl::Allocator **)v3, v9, *(_QWORD *)(v3 + 24), 0x10u);
      v7 = *(_QWORD *)(v3 + 16);
    }
    if ( v7 >= a2 )
      v7 = a2;
    *(_QWORD *)(v3 + 8) = v4;
    *(_QWORD *)(v3 + 16) = v7;
    *(_QWORD *)(v3 + 24) = v6;
    if ( v6 < a2 )
      lsl::Vector<char>::reserveExact();
  }
  return result;
}
