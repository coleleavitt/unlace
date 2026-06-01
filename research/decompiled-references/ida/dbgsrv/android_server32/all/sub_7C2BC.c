/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C2BC
// Address: 0x0007C2BC

//----- (0007C2BC) --------------------------------------------------------
_DWORD *__fastcall sub_7C2BC(_DWORD *a1)
{
  FILE *v2; // r0
  void *v3; // r0

  *a1 = &off_DB23C;
  v2 = (FILE *)a1[6];
  if ( v2 )
    qfclose(v2);
  a1[5] = 0;
  a1[6] = 0;
  v3 = (void *)a1[10];
  if ( v3 )
  {
    a1[11] = 0;
    qfree(v3);
    a1[12] = 0;
    a1[10] = 0;
  }
  return a1;
}
// DB23C: using guessed type _UNKNOWN *off_DB23C;
