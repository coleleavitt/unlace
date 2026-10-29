/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF7A0
// Address: 0x080CF7A0

//----- (080CF7A0) --------------------------------------------------------
void *__cdecl sub_80CF7A0(void *ptr, int size)
{
  void *v2; // esi

  if ( size )
  {
    if ( size <= 0 )
    {
      v2 = nullptr;
      *__errno_location() = 12;
      sub_80C7880(1);
    }
    else
    {
      v2 = realloc(ptr, size);
      if ( !v2 )
        sub_80C7880(1);
    }
  }
  else
  {
    v2 = nullptr;
    sub_80CF780(ptr);
  }
  return v2;
}
