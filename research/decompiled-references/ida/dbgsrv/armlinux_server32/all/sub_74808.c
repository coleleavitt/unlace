/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74808
// Address: 0x00074808

//----- (00074808) --------------------------------------------------------
_DWORD *__fastcall sub_74808(_DWORD *a1)
{
  FILE *v2; // r0
  void *v3; // r0

  v2 = (FILE *)a1[6];
  *a1 = &off_D1CFC;
  if ( v2 )
    sub_778BC(v2);
  v3 = (void *)a1[10];
  a1[5] = 0;
  a1[6] = 0;
  if ( v3 )
  {
    a1[11] = 0;
    sub_77F70(v3);
  }
  return a1;
}
// D1CFC: using guessed type _UNKNOWN *;
