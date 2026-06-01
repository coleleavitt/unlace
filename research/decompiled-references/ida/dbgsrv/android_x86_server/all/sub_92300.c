/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92300
// Address: 0x00092300

//----- (00092300) --------------------------------------------------------
unsigned int __cdecl sub_92300(int a1, unsigned int a2, int *a3)
{
  int *v3; // edx
  void *v4; // eax
  unsigned int v5; // eax
  int v6; // edi
  unsigned int v7; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // eax
  void *v11; // eax
  size_t v13; // [esp+4h] [ebp-18h]
  unsigned int v14; // [esp+8h] [ebp-14h]

  v3 = (int *)a1;
  if ( *(_DWORD *)(a1 + 8) < a2 )
  {
    v4 = qvector_reserve(a1, *(void **)a1, a2, 0x14u);
    v3 = (int *)a1;
    *(_DWORD *)a1 = v4;
  }
  v5 = v3[1];
  if ( v5 < a2 )
  {
    v6 = 20 * v5 + 16;
    v7 = a2 - v5;
    do
    {
      v14 = v7;
      v8 = *v3;
      v9 = *a3;
      *(_DWORD *)(v8 + v6 - 12) = a3[1];
      *(_DWORD *)(v8 + v6 - 16) = v9;
      *(_DWORD *)(v8 + v6 - 8) = 0;
      *(_DWORD *)(v8 + v6 - 4) = 0;
      *(_DWORD *)(v8 + v6) = 0;
      v10 = a3[3];
      if ( v10 )
      {
        v13 = a3[3];
        v11 = qalloc_or_throw(v10);
        *(_DWORD *)(v8 + v6 - 8) = v11;
        *(_DWORD *)(v8 + v6) = v13;
        memcpy(v11, (const void *)a3[2], v13);
        v3 = (int *)a1;
        *(_DWORD *)(v8 + v6 - 4) = v13;
      }
      v6 += 20;
      v7 = v14 - 1;
    }
    while ( v14 != 1 );
  }
  v3[1] = a2;
  return a2;
}
