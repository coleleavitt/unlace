/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A190
// Address: 0x0041A190

//----- (0041A190) --------------------------------------------------------
int __userpurge sub_41A190@<eax>(__m128i a1@<xmm0>, int *a2, __int128 *a3)
{
  const char *v3; // ecx

  v3 = MultiByteStr;
  if ( a2[9] )
    v3 = (const char *)a2[8];
  return sub_423CF0(a1, a3, a2, v3, 0);
}
