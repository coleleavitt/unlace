/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BD48
// Address: 0x0008BD48

//----- (0008BD48) --------------------------------------------------------
unsigned int __fastcall sub_8BD48(int a1, unsigned int a2, const char *a3)
{
  unsigned int v3; // r3

  v3 = *(_DWORD *)(a1 + 4);
  if ( a2 > v3 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v3);
  return a2;
}
