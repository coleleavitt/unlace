/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlsize
// Address: 0x0007B7AA

//----- (0007B7AA) --------------------------------------------------------
int __fastcall qlsize(int *a1)
{
  int result; // r0

  result = -1;
  if ( a1 )
  {
    if ( *a1 < 2 )
      return qfsize((FILE *)a1[2]);
    else
      return a1[4];
  }
  return result;
}
