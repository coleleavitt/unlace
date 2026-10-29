__int64 __fastcall lsl::Vector<dyld4::AuthenticatedValue<dyld4::Loader const*>>::reserveExact(
        __int64 result,
        unsigned __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x22
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x21
  void *v7; // x1
  __int64 v8; // x9
  _QWORD *v9; // x10
  _QWORD *v10; // x11
  _QWORD *v11; // x12
  unsigned __int64 v12; // x8

  if ( a2 <= *(_QWORD *)(result + 24) >> 3 )
    return result;
  v3 = result;
  result = lsl::Allocator::allocate_buffer(*(lsl::Allocator **)result, 8 * a2, 0x10u);
  v4 = result;
  v6 = v5;
  v7 = *(void **)(v3 + 8);
  v8 = *(_QWORD *)(v3 + 16);
  if ( v8 )
  {
    v9 = *(_QWORD **)(v3 + 8);
    v10 = v9;
    v11 = (_QWORD *)result;
    do
    {
      *v11++ = *v9;
      *v9++ = 0;
      ++v10;
      --v8;
    }
    while ( v8 );
  }
  else if ( !v7 )
  {
    v12 = 0;
    goto LABEL_8;
  }
  result = lsl::Allocator::deallocate_buffer(*(lsl::Allocator **)v3, v7, *(_QWORD *)(v3 + 24), 0x10u);
  v12 = *(_QWORD *)(v3 + 16);
LABEL_8:
  if ( v12 >= a2 )
    v12 = a2;
  *(_QWORD *)(v3 + 8) = v4;
  *(_QWORD *)(v3 + 16) = v12;
  *(_QWORD *)(v3 + 24) = v6;
  if ( a2 > v6 >> 3 )
    lsl::Vector<dyld4::AuthenticatedValue<dyld4::Loader const*>>::reserveExact(result);
  return result;
}
