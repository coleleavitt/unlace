/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A210
// Address: 0x0041A210

//----- (0041A210) --------------------------------------------------------
int __userpurge sub_41A210@<eax>(__m128i a1@<xmm0>, int *a2, int a3)
{
  const char *v3; // ecx

  v3 = MultiByteStr;
  if ( a2[9] )
    v3 = (const char *)a2[8];
  *(_DWORD *)(a3 + 8) = sub_423CF0(a1, nullptr, a2, v3, 0) == 0;
  return 0;
}
