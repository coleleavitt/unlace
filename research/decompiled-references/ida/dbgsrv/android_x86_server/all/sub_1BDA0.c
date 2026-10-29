/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BDA0
// Address: 0x0001BDA0

//----- (0001BDA0) --------------------------------------------------------
unsigned int __cdecl sub_1BDA0(int *a1, unsigned int a2)
{
  int v2; // edi
  unsigned int v3; // eax
  int v4; // esi
  void *v5; // eax
  void *v6; // eax
  unsigned int v8; // [esp+4h] [ebp-18h]
  unsigned int v9; // [esp+8h] [ebp-14h]

  v8 = a1[1];
  if ( v8 > a2 )
  {
    v2 = 40 * a2 + 8;
    v3 = a2;
    do
    {
      v9 = v3;
      v4 = *a1;
      v5 = *(void **)(*a1 + v2 + 12);
      if ( v5 )
      {
        *(_DWORD *)(v4 + v2 + 16) = 0;
        qfree(v5);
        *(_DWORD *)(v4 + v2 + 12) = 0;
        *(_DWORD *)(v4 + v2 + 20) = 0;
      }
      v6 = *(void **)(v4 + v2);
      if ( v6 )
      {
        *(_DWORD *)(v4 + v2 + 4) = 0;
        qfree(v6);
        *(_DWORD *)(v4 + v2) = 0;
        *(_DWORD *)(v4 + v2 + 8) = 0;
      }
      v3 = v9 + 1;
      v2 += 40;
    }
    while ( v9 + 1 < v8 );
  }
  a1[1] = a2;
  return a2;
}
