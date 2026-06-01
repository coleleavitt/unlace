/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_778BC
// Address: 0x000778BC

//----- (000778BC) --------------------------------------------------------
int __fastcall sub_778BC(FILE *a1)
{
  int v1; // r4

  if ( a1 )
  {
    v1 = fclose(a1);
    if ( v1 )
      sub_70B98(1);
  }
  else
  {
    v1 = -1;
    sub_70B98(1);
    *_errno_location() = 9;
    sub_70B98(1);
  }
  return v1;
}
