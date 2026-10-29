/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7742C
// Address: 0x0007742C

//----- (0007742C) --------------------------------------------------------
int __fastcall sub_7742C(int a1)
{
  int v1; // r4

  v1 = dup(a1);
  if ( v1 != -1 )
    return v1;
  sub_70B98(1);
  return -1;
}
