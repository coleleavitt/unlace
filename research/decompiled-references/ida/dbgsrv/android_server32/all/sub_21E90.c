/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21E90
// Address: 0x00021E90

//----- (00021E90) --------------------------------------------------------
int __fastcall sub_21E90(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  *(_DWORD *)a1 = &off_D6308;
  v2 = *(void **)(a1 + 1064);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 1068) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 1064) = 0;
    *(_DWORD *)(a1 + 1072) = 0;
  }
  v3 = *(void **)(a1 + 1052);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 1056) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 1052) = 0;
    *(_DWORD *)(a1 + 1060) = 0;
  }
  v4 = *(void **)(a1 + 1040);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 1044) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 1040) = 0;
    *(_DWORD *)(a1 + 1048) = 0;
  }
  sub_1B3BC((char **)(a1 + 1028));
  return a1;
}
// D6308: using guessed type _UNKNOWN *off_D6308;
