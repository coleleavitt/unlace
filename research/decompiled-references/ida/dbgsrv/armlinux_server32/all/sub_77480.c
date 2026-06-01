/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77480
// Address: 0x00077480

//----- (00077480) --------------------------------------------------------
int __fastcall sub_77480(const char *a1)
{
  int v1; // r4

  v1 = rmdir(a1);
  if ( v1 != -1 )
    return v1;
  sub_70B98(1);
  return -1;
}
