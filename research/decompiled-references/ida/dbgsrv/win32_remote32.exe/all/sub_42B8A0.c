/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B8A0
// Address: 0x0042B8A0

//----- (0042B8A0) --------------------------------------------------------
int __stdcall sub_42B8A0(int *a1)
{
  const char *v1; // eax

  v1 = MultiByteStr;
  if ( a1[5] )
    v1 = (const char *)a1[4];
  return sub_42DCA0(a1, v1);
}
