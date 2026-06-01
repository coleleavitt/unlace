/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C1E0
// Address: 0x0042C1E0

//----- (0042C1E0) --------------------------------------------------------
int __stdcall sub_42C1E0(_DWORD *a1)
{
  const char *v1; // eax

  v1 = MultiByteStr;
  if ( a1[5] )
    v1 = (const char *)a1[4];
  a1[24] = sub_428A60(v1, 0);
  return 0;
}
