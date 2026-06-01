/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98FD0
// Address: 0x00098FD0

//----- (00098FD0) --------------------------------------------------------
int __fastcall sub_98FD0(_DWORD *a1, size_t alignment, size_t size)
{
  size_t v4; // r3
  size_t v5; // r4
  int v6; // r3
  int result; // r0
  void *v8; // r0

  v4 = (alignment - 1) & alignment;
  v5 = alignment;
  v6 = v4 != 0;
  if ( alignment )
    v5 = 1;
  result = 22;
  if ( !(alignment << 30) && v6 != v5 )
  {
    v8 = memalign(alignment, size);
    *a1 = v8;
    if ( v8 )
      return 0;
    else
      return *(_DWORD *)_errno(0);
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
