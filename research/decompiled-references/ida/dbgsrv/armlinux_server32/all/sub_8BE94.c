/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BE94
// Address: 0x0008BE94

//----- (0008BE94) --------------------------------------------------------
unsigned int __fastcall sub_8BE94(int a1, unsigned int a2, const char *a3)
{
  unsigned int v3; // r3

  v3 = *(_DWORD *)(a1 + 4);
  if ( a2 > v3 )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v3);
  return a2;
}
