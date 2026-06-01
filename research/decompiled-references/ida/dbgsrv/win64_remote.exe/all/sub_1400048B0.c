/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400048B0
// Address: 0x00000001400048B0

//----- (00000001400048B0) ----------------------------------------------------
__int64 __fastcall sub_1400048B0(__int64 a1, const char *a2)
{
  size_t v4; // rax

  if ( a2 )
  {
    v4 = strlen(a2);
    sub_1400048F0(a1, a2, v4);
  }
  return a1;
}
