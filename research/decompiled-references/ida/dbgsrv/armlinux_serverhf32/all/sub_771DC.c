/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_771DC
// Address: 0x000771DC

//----- (000771DC) --------------------------------------------------------
int __fastcall sub_771DC(int a1)
{
  int v1; // r4

  v1 = close(a1);
  if ( v1 != -1 )
    return v1;
  sub_70A2C(1);
  return -1;
}
