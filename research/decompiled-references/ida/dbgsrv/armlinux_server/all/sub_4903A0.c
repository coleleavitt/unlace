/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4903A0
// Address: 0x00000000004903A0

//----- (00000000004903A0) ----------------------------------------------------
__int64 __fastcall sub_4903A0(const char *a1)
{
  unsigned int v1; // w19

  v1 = utime(a1, nullptr);
  if ( v1 != -1 )
    return v1;
  sub_4869C8(1);
  return 0xFFFFFFFFLL;
}
