/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490148
// Address: 0x0000000000490148

//----- (0000000000490148) ----------------------------------------------------
__int64 __fastcall sub_490148(int a1)
{
  unsigned int v1; // w19

  v1 = fsync(a1);
  if ( v1 != -1 )
    return v1;
  sub_4869C8(1);
  return 0xFFFFFFFFLL;
}
