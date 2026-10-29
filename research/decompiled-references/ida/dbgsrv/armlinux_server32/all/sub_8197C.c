/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8197C
// Address: 0x0008197C

//----- (0008197C) --------------------------------------------------------
unsigned int __fastcall sub_8197C(_DWORD *a1, unsigned int a2, const char *a3)
{
  unsigned int v3; // r3

  v3 = *(_DWORD *)(*a1 - 12);
  if ( v3 < a2 )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v3);
  return a2;
}
