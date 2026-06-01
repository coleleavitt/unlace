/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2B38
// Address: 0x00000000004B2B38

//----- (00000000004B2B38) ----------------------------------------------------
__int64 __fastcall sub_4B2B38(_QWORD *a1, char *src)
{
  __int64 v2; // x2

  v2 = -1;
  *a1 = a1 + 2;
  if ( src )
    v2 = (__int64)&src[strlen(src)];
  return sub_4B2930(a1, src, v2);
}
