__int64 __fastcall lsl::Vector<unsigned int>::reserveExact(__int64 result, unsigned __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x22
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x21
  void *v7; // x1
  __int64 v8; // x8
  _DWORD *v9; // x9
  int *v10; // x10
  int v11; // t1
  unsigned __int64 v12; // x8

  if ( a2 <= *(_QWORD *)(result + 24) >> 2 )
    return result;
  v3 = result;
  result = lsl::Allocator::allocate_buffer(*(lsl::Allocator **)result, 4 * a2, 0x10u);
  v4 = result;
  v6 = v5;
  v7 = *(void **)(v3 + 8);
  v8 = *(_QWORD *)(v3 + 16);
  if ( v8 )
  {
    v9 = (_DWORD *)result;
    v10 = *(int **)(v3 + 8);
    do
    {
      v11 = *v10++;
      *v9++ = v11;
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
  if ( a2 > v6 >> 2 )
    lsl::Vector<unsigned int>::reserveExact(result);
  return result;
}
