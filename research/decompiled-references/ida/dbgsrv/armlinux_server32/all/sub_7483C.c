/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7483C
// Address: 0x0007483C

//----- (0007483C) --------------------------------------------------------
_DWORD *__fastcall sub_7483C(_DWORD *ptr)
{
  FILE *v2; // r0
  void *v3; // r0

  v2 = (FILE *)ptr[6];
  *ptr = &off_D1CFC;
  if ( v2 )
    sub_778BC(v2);
  v3 = (void *)ptr[10];
  ptr[5] = 0;
  ptr[6] = 0;
  if ( v3 )
  {
    ptr[11] = 0;
    sub_77F70(v3);
  }
  sub_808A0(ptr);
  return ptr;
}
// D1CFC: using guessed type _UNKNOWN *off_D1CFC;
