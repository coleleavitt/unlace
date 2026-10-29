/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82720
// Address: 0x00082720

//----- (00082720) --------------------------------------------------------
int __fastcall sub_82720(int *a1, unsigned int a2)
{
  int v2; // r3
  unsigned int v3; // r2

  v2 = *a1;
  v3 = *(_DWORD *)(*a1 - 12);
  if ( a2 >= v3 )
    sub_83E54("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v3);
  if ( *(int *)(v2 - 4) >= 0 )
  {
    sub_825E8(a1);
    v2 = *a1;
  }
  return v2 + a2;
}
