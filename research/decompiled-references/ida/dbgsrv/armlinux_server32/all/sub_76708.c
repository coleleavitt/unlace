/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76708
// Address: 0x00076708

//----- (00076708) --------------------------------------------------------
int __fastcall sub_76708(int a1)
{
  int *v2; // r6
  int *v3; // r7
  _DWORD *v4; // r9
  int v5; // r3

  v2 = (int *)(a1 + 8228);
  v3 = (int *)(a1 + 8232);
  v4 = (_DWORD *)(a1 + 8224);
  do
  {
    v5 = *v2;
    if ( *v2 >= *v3 )
      return -1;
    ++*v2;
  }
  while ( sub_76600(a1 + 4116, (_DWORD *)(a1 + 4104), (char *)(*(_DWORD *)(*v4 + 4 * v5) + 19)) );
  *(_DWORD *)a1 = *(_DWORD *)(a1 + 4116);
  sub_70558((unsigned __int8 *)(a1 + 4), (unsigned __int8 *)(a1 + 4120), 4096);
  *(_WORD *)(a1 + 4112) = *(_WORD *)(a1 + 8220);
  *(_WORD *)(a1 + 4114) = *(_WORD *)(a1 + 8222);
  return 0;
}
