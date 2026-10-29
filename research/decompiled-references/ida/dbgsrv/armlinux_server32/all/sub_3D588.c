/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D588
// Address: 0x0003D588

//----- (0003D588) --------------------------------------------------------
int __fastcall sub_3D588(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77F70(v2);
  }
  return a1;
}
