/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490180
// Address: 0x0000000000490180

//----- (0000000000490180) ----------------------------------------------------
__int64 __fastcall sub_490180(const char *a1, __mode_t a2)
{
  unsigned int v2; // w19

  v2 = mkdir(a1, a2);
  if ( v2 != -1 )
    return v2;
  sub_4869C8(1);
  return 0xFFFFFFFFLL;
}
