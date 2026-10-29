/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_776C4
// Address: 0x000776C4

//----- (000776C4) --------------------------------------------------------
int __fastcall sub_776C4(const char *a1)
{
  int v1; // r4

  v1 = utime(a1, nullptr);
  if ( v1 != -1 )
    return v1;
  sub_70B98(1);
  return -1;
}
