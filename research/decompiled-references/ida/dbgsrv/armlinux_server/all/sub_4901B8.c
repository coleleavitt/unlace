/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4901B8
// Address: 0x00000000004901B8

//----- (00000000004901B8) ----------------------------------------------------
__int64 __fastcall sub_4901B8(const char *a1)
{
  unsigned int v1; // w19

  v1 = rmdir(a1);
  if ( v1 != -1 )
    return v1;
  sub_4869C8(1);
  return 0xFFFFFFFFLL;
}
