/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B7F4
// Address: 0x0001B7F4

//----- (0001B7F4) --------------------------------------------------------
unsigned int __fastcall sub_1B7F4(int *a1, unsigned int a2)
{
  unsigned int v2; // r7
  int v3; // r4
  int v4; // r5
  void *v5; // r0
  void *v6; // r0
  _DWORD *v7; // r5
  unsigned int v10; // [sp+8h] [bp-Ch]
  int v12; // [sp+10h] [bp-4h]

  v10 = a1[1];
  if ( v10 > a2 )
  {
    v2 = a2;
    v3 = 32 * a2 + 16;
    do
    {
      v12 = *a1;
      v4 = *a1 + v3;
      v5 = *(void **)(v4 + 4);
      if ( v5 )
      {
        *(_DWORD *)(v4 + 8) = 0;
        qfree(v5);
        *(_DWORD *)(v4 + 4) = 0;
        *(_DWORD *)(v12 + v3 + 12) = 0;
      }
      v6 = *(void **)(v4 - 8);
      v7 = (_DWORD *)(v4 - 8);
      if ( v6 )
      {
        v7[1] = 0;
        qfree(v6);
        *v7 = 0;
        *(_DWORD *)(v12 + v3) = 0;
      }
      v3 += 32;
      ++v2;
    }
    while ( v2 < v10 );
  }
  a1[1] = a2;
  return a2;
}
