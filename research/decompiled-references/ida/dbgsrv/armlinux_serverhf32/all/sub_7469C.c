/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7469C
// Address: 0x0007469C

//----- (0007469C) --------------------------------------------------------
_DWORD *__fastcall sub_7469C(_DWORD *a1)
{
  FILE *v2; // r0
  void *v3; // r0

  v2 = (FILE *)a1[6];
  *a1 = &off_D0CFC;
  if ( v2 )
    sub_77754(v2);
  v3 = (void *)a1[10];
  a1[5] = 0;
  a1[6] = 0;
  if ( v3 )
  {
    a1[11] = 0;
    sub_77E08(v3);
  }
  return a1;
}
// D0CFC: using guessed type _UNKNOWN *;
