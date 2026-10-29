/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82564
// Address: 0x00082564

//----- (00082564) --------------------------------------------------------
int __fastcall sub_82564(int *a1)
{
  int v1; // r3
  int v2; // r4

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 - 12) - 1;
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_8244C(a1);
    v1 = *a1;
  }
  return v1 + v2;
}
