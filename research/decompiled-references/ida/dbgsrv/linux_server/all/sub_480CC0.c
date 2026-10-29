/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480CC0
// Address: 0x0000000000480CC0

//----- (0000000000480CC0) ----------------------------------------------------
__int64 __fastcall sub_480CC0(FILE *a1)
{
  __off64_t v1; // rbx

  if ( !a1 )
  {
    v1 = -1;
    sub_479EB0(1u);
    *__errno_location() = 9;
    sub_479EB0(1u);
    return v1;
  }
  v1 = ftello64(a1);
  if ( v1 != -1 )
    return v1;
  sub_479EB0(1u);
  return -1;
}
