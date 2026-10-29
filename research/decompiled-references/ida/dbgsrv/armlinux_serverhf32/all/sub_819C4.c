/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_819C4
// Address: 0x000819C4

//----- (000819C4) --------------------------------------------------------
int __fastcall sub_819C4(int *a1, unsigned int a2)
{
  int v2; // r0
  unsigned int v3; // r2

  v2 = *a1;
  v3 = *(_DWORD *)(v2 - 12);
  if ( a2 >= v3 )
    sub_83B6C("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v3);
  return v2 + a2;
}
