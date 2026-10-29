/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77918
// Address: 0x00077918

//----- (00077918) --------------------------------------------------------
int __fastcall sub_77918(const char *a1, int a2)
{
  int v2; // r4

  v2 = access(a1, a2);
  if ( v2 )
    sub_70B98(1);
  return v2;
}
