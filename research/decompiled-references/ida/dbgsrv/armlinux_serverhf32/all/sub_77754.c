/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77754
// Address: 0x00077754

//----- (00077754) --------------------------------------------------------
int __fastcall sub_77754(FILE *a1)
{
  int v1; // r4

  if ( a1 )
  {
    v1 = fclose(a1);
    if ( v1 )
      sub_70A2C(1);
  }
  else
  {
    v1 = -1;
    sub_70A2C(1);
    *_errno_location() = 9;
    sub_70A2C(1);
  }
  return v1;
}
