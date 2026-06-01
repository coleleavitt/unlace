/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480D20
// Address: 0x0000000000480D20

//----- (0000000000480D20) ----------------------------------------------------
__int64 __fastcall sub_480D20(FILE *a1, __off64_t a2, int a3)
{
  unsigned int v3; // ebx

  if ( !a1 )
  {
    v3 = -1;
    sub_479EB0(1u);
    *__errno_location() = 9;
    sub_479EB0(1u);
    return v3;
  }
  v3 = fseeko64(a1, a2, a3);
  if ( !v3 )
    return v3;
  sub_479EB0(1u);
  return v3;
}
