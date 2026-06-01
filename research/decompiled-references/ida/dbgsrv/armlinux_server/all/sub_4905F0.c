/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4905F0
// Address: 0x00000000004905F0

//----- (00000000004905F0) ----------------------------------------------------
__int64 __fastcall sub_4905F0(FILE *a1)
{
  __off64_t v1; // x19

  if ( !a1 )
  {
    sub_4869C8(1);
    v1 = -1;
    *__errno_location() = 9;
    sub_4869C8(1);
    return v1;
  }
  v1 = ftello64(a1);
  if ( v1 != -1 )
    return v1;
  sub_4869C8(1);
  return -1;
}
