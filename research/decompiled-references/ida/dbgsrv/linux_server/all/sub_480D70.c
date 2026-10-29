/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480D70
// Address: 0x0000000000480D70

//----- (0000000000480D70) ----------------------------------------------------
__int64 __fastcall sub_480D70(FILE *a1)
{
  unsigned int v1; // ebx

  if ( !a1 )
  {
    v1 = -1;
    sub_479EB0(1u);
    *__errno_location() = 9;
    sub_479EB0(1u);
    return v1;
  }
  v1 = fclose(a1);
  if ( !v1 )
    return v1;
  sub_479EB0(1u);
  return v1;
}
