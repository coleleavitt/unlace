/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C2A8
// Address: 0x0008C2A8

//----- (0008C2A8) --------------------------------------------------------
unsigned int __fastcall sub_8C2A8(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r2

  v2 = a1[1];
  if ( a2 >= v2 )
    sub_83B6C("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v2);
  return *a1 + a2;
}
