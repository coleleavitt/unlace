/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480DC0
// Address: 0x0000000000480DC0

//----- (0000000000480DC0) ----------------------------------------------------
__int64 __fastcall sub_480DC0(const char *a1)
{
  unsigned int v1; // ebx

  v1 = unlink(a1);
  if ( !v1 )
    return 0;
  sub_479EB0(1u);
  return v1;
}
