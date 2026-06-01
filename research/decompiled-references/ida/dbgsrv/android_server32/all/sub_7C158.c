/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C158
// Address: 0x0007C158

//----- (0007C158) --------------------------------------------------------
_DWORD *__fastcall sub_7C158(_DWORD *a1)
{
  void *v2; // r0

  *a1 = &off_DB228;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[7] = 0;
    a1[5] = 0;
  }
  return a1;
}
// DB228: using guessed type _UNKNOWN *off_DB228;
