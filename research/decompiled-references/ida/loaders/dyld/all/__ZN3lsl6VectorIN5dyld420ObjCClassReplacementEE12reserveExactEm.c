__int64 __fastcall lsl::Vector<dyld4::ObjCClassReplacement>::reserveExact(__int64 result, unsigned __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x22
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x8
  __int64 v8; // x9
  unsigned __int64 i; // x10
  _OWORD *v10; // x8
  _OWORD *v11; // x11
  __int128 v12; // q1
  void *v13; // x1

  if ( a2 > *(_QWORD *)(result + 24) >> 5 )
  {
    v3 = result;
    result = lsl::Allocator::allocate_buffer(*(lsl::Allocator **)result, 32 * a2, 0x10u);
    v4 = result;
    v6 = v5;
    v7 = *(_QWORD *)(v3 + 16);
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i < v7; ++i )
      {
        v10 = (_OWORD *)(result + v8);
        v11 = (_OWORD *)(*(_QWORD *)(v3 + 8) + v8);
        v12 = v11[1];
        *v10 = *v11;
        v10[1] = v12;
        v7 = *(_QWORD *)(v3 + 16);
        v8 += 32;
      }
    }
    v13 = *(void **)(v3 + 8);
    if ( v13 )
    {
      result = lsl::Allocator::deallocate_buffer(*(lsl::Allocator **)v3, v13, *(_QWORD *)(v3 + 24), 0x10u);
      v7 = *(_QWORD *)(v3 + 16);
    }
    if ( v7 >= a2 )
      v7 = a2;
    *(_QWORD *)(v3 + 8) = v4;
    *(_QWORD *)(v3 + 16) = v7;
    *(_QWORD *)(v3 + 24) = v6;
    if ( a2 > v6 >> 5 )
      lsl::Vector<dyld4::ObjCClassReplacement>::reserveExact();
  }
  return result;
}
