/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480980
// Address: 0x0000000000480980

//----- (0000000000480980) ----------------------------------------------------
__int64 __fastcall sub_480980(const char *a1, __mode_t a2)
{
  unsigned int v2; // ebx

  v2 = mkdir(a1, a2);
  if ( v2 != -1 )
    return v2;
  sub_479EB0(1u);
  return 0xFFFFFFFFLL;
}
