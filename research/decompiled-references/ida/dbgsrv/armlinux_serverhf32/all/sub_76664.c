/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76664
// Address: 0x00076664

//----- (00076664) --------------------------------------------------------
void __fastcall sub_76664(int a1)
{
  int v2; // r4
  _DWORD *v3; // r6
  _DWORD *v4; // r5
  void *v5; // r0

  if ( *(int *)(a1 + 8232) > 0 )
  {
    v2 = 0;
    v3 = (_DWORD *)(a1 + 8224);
    v4 = (_DWORD *)(a1 + 8232);
    do
    {
      v5 = *(void **)(*v3 + 4 * v2++);
      free(v5);
    }
    while ( *v4 > v2 );
  }
  free(*(void **)(a1 + 8224));
  *(_DWORD *)(a1 + 8224) = 0;
  *(_DWORD *)(a1 + 8232) = 0;
}
