/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF830
// Address: 0x080CF830

//----- (080CF830) --------------------------------------------------------
void *__cdecl sub_80CF830(char *s)
{
  size_t size; // edi
  void *v2; // eax
  void *v3; // esi

  if ( !s )
    return nullptr;
  size = strlen(s) + 1;
  v2 = malloc(size);
  v3 = v2;
  if ( !v2 )
  {
    sub_80C7880(1);
    *__errno_location() = 12;
    sub_80C7880(1);
    return nullptr;
  }
  sub_80D0740((unsigned int)v2, s, size);
  return v3;
}
