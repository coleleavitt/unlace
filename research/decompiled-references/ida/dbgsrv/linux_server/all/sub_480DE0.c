/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480DE0
// Address: 0x0000000000480DE0

//----- (0000000000480DE0) ----------------------------------------------------
__int64 __fastcall sub_480DE0(const char *a1, const char *a2)
{
  unsigned int v2; // ebx

  v2 = rename(a1, a2);
  if ( !v2 )
    return 0;
  sub_479EB0(1u);
  return v2;
}
