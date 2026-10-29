/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82700
// Address: 0x00082700

//----- (00082700) --------------------------------------------------------
int __fastcall sub_82700(int *a1)
{
  int v1; // r3
  int v2; // r4

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 - 12) - 1;
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_825E8(a1);
    v1 = *a1;
  }
  return v1 + v2;
}
