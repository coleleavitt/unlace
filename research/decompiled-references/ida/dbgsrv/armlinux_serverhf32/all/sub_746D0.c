/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_746D0
// Address: 0x000746D0

//----- (000746D0) --------------------------------------------------------
_DWORD *__fastcall sub_746D0(_DWORD *ptr)
{
  FILE *v2; // r0
  void *v3; // r0

  v2 = (FILE *)ptr[6];
  *ptr = &off_D0CFC;
  if ( v2 )
    sub_77754(v2);
  v3 = (void *)ptr[10];
  ptr[5] = 0;
  ptr[6] = 0;
  if ( v3 )
  {
    ptr[11] = 0;
    sub_77E08(v3);
  }
  sub_8121C(ptr);
  return ptr;
}
// D0CFC: using guessed type _UNKNOWN *off_D0CFC;
