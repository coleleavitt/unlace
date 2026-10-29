/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C390
// Address: 0x0001C390

//----- (0001C390) --------------------------------------------------------
unsigned int __cdecl sub_1C390(int *a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v3; // edi
  int v4; // esi
  void *v5; // eax
  void *v6; // eax
  unsigned int v8; // [esp+4h] [ebp-18h]
  unsigned int v9; // [esp+8h] [ebp-14h]

  v8 = a1[1];
  if ( v8 > a2 )
  {
    v2 = a2;
    v3 = (32 * a2) | 8;
    do
    {
      v9 = v2;
      v4 = *a1;
      v5 = *(void **)(*a1 + v3 + 12);
      if ( v5 )
      {
        *(_DWORD *)(v4 + v3 + 16) = 0;
        qfree(v5);
        *(_DWORD *)(v4 + v3 + 12) = 0;
        *(_DWORD *)(v4 + v3 + 20) = 0;
      }
      v6 = *(void **)(v4 + v3);
      if ( v6 )
      {
        *(_DWORD *)(v4 + v3 + 4) = 0;
        qfree(v6);
        *(_DWORD *)(v4 + v3) = 0;
        *(_DWORD *)(v4 + v3 + 8) = 0;
      }
      v2 = v9 + 1;
      v3 += 32;
    }
    while ( v9 + 1 < v8 );
  }
  a1[1] = a2;
  return a2;
}
