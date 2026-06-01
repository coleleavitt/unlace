/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42938
// Address: 0x00042938

//----- (00042938) --------------------------------------------------------
unsigned int __fastcall sub_42938(int *a1, unsigned int a2)
{
  unsigned int v2; // r6
  int v3; // r7
  int v4; // r4
  void *v5; // r0
  void *v6; // r0
  unsigned int v9; // [sp+Ch] [bp-10h]

  v9 = a1[1];
  if ( v9 > a2 )
  {
    v2 = a2;
    v3 = 24 * a2 + 12;
    do
    {
      v4 = *a1;
      v5 = *(void **)(*a1 + v3);
      if ( v5 )
      {
        *(_DWORD *)(v4 + v3 + 4) = 0;
        qfree(v5);
        *(_DWORD *)(v4 + v3) = 0;
        *(_DWORD *)(v4 + v3 + 8) = 0;
      }
      v6 = *(void **)(v4 + v3 - 12);
      if ( v6 )
      {
        *(_DWORD *)(v4 + v3 - 8) = 0;
        qfree(v6);
        *(_DWORD *)(v4 + v3 - 12) = 0;
        *(_DWORD *)(v4 + v3 - 4) = 0;
      }
      v3 += 24;
      ++v2;
    }
    while ( v2 < v9 );
  }
  a1[1] = a2;
  return a2;
}
