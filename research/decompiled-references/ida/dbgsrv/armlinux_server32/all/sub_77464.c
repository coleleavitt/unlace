/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77464
// Address: 0x00077464

//----- (00077464) --------------------------------------------------------
int __fastcall sub_77464(const char *a1, __mode_t a2)
{
  int v2; // r4

  v2 = mkdir(a1, a2);
  if ( v2 != -1 )
    return v2;
  sub_70B98(1);
  return -1;
}
