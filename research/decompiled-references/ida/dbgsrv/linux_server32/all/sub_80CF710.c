/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF710
// Address: 0x080CF710

//----- (080CF710) --------------------------------------------------------
void *__cdecl sub_80CF710(int size)
{
  void *v1; // esi

  if ( !size )
    return nullptr;
  if ( size <= 0 )
  {
    *__errno_location() = 12;
    sub_80C7880(1);
    return nullptr;
  }
  v1 = malloc(size);
  if ( !v1 )
    sub_80C7880(1);
  return v1;
}
