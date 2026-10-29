/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8A40
// Address: 0x000D8A40

//----- (000D8A40) --------------------------------------------------------
int __cdecl sub_D8A40(_DWORD *a1, size_t alignment, size_t size)
{
  int result; // eax
  void *v4; // ecx

  result = 22;
  if ( (alignment & 3) == 0 && ((alignment & (alignment - 1)) != 0) != (alignment != 0) )
  {
    v4 = memalign(alignment, size);
    *a1 = v4;
    result = 0;
    if ( !v4 )
      return *(_DWORD *)__errno(0);
  }
  return result;
}
// 17A90: using guessed type int __fastcall __errno(_DWORD);
