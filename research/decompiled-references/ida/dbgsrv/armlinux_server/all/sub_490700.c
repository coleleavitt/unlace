/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490700
// Address: 0x0000000000490700

//----- (0000000000490700) ----------------------------------------------------
__int64 __fastcall sub_490700(const char *a1)
{
  unsigned int v1; // w19

  v1 = unlink(a1);
  if ( v1 )
    sub_4869C8(1);
  return v1;
}
