/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82584
// Address: 0x00082584

//----- (00082584) --------------------------------------------------------
int __fastcall sub_82584(int *a1, unsigned int a2)
{
  int v2; // r3
  unsigned int v3; // r2

  v2 = *a1;
  v3 = *(_DWORD *)(*a1 - 12);
  if ( a2 >= v3 )
    sub_83B6C("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v3);
  if ( *(int *)(v2 - 4) >= 0 )
  {
    sub_8244C(a1);
    v2 = *a1;
  }
  return v2 + a2;
}
